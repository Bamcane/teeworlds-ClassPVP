#include <game/server/gamecontext.h>

#include <engine/shared/config.h>

#include <engine/console.h>

#include "class-define.h"
#include "classes.h"

IConsole *CClasses::Console()
{
	return GameServer()->Console();
}

CClasses::CClasses(CGameContext *pGameServer)
{
    m_pGameServer = pGameServer;

	Console()->Register("inf_set_class", "is", CFGFLAG_SERVER, ConSetClass, this, "");
}

CClasses::~CClasses()
{
	for(int i = 0;i < (int) m_Classes.size(); i++)
	{
		delete m_Classes[i];
		m_Classes[i] = 0;
	}
}

// Init Class
void CClasses::InitClasses()
{
	InitClass(new CClassLooper(0, 0));
	InitClass(new CClassSniper(0, 0));
	InitClass(new CClassMedic(0, 0));
	InitClass(new CClassCaptain(0, 0));
}

// Humans
void CClasses::InitClass(CClass *pClass)
{
	m_Classes.push_back(pClass);
}

void CClasses::ConSetClass(IConsole::IResult *pResult, void *pUserData)
{
	CClasses *pSelf = (CClasses *) pUserData;
	
	int ClientID = pResult->GetInteger(0);
	CPlayer *pPlayer = pSelf->GameServer()->m_apPlayers[ClientID];

	if(!pPlayer)
		return;

	const char* ClassName = pResult->GetString(1);

	for(unsigned int i = 0;i < (unsigned int) pSelf->m_Classes.size(); i ++)
	{
		if(str_comp_nocase(pSelf->m_Classes[i]->m_ClassName, ClassName) == 0)
		{
			CClass *pNewClass = pSelf->m_Classes[i]->CreateNewOne(pSelf->GameServer(), pPlayer);
			pPlayer->SetClass(pNewClass);
			return;
		}
	}
}