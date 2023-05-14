/* (c) Magnus Auvinen. See licence.txt in the root of the distribution for more information. */
/* If you are missing that file, acquire a complete release at teeworlds.com.                */
#include <game/server/gamecontext.h>
#include "dm.h"


CGameControllerDM::CGameControllerDM(class CGameContext *pGameServer)
: IGameController(pGameServer)
{
	m_pGameType = "C-DM";

	GameServer()->Console()->ExecuteFile("config/dm.cfg");
}

void CGameControllerDM::Tick()
{
	IGameController::Tick();
}
