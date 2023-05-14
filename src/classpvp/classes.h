#ifndef CLASSPVP_CLASSES_H
#define CLASSPVP_CLASSES_H

#include "class.h"

#include <engine/console.h>

#include <vector>

class CGameContext;

class CClasses
{
	CGameContext *m_pGameServer;

public:
	CGameContext *GameServer() { return m_pGameServer; }
	IConsole *Console();

	CClasses(CGameContext *pGameServer);
	~CClasses();


	std::vector<CClass*> m_Classes;

	void InitClasses();
	void InitClass(CClass *pClass);
	
private:
	static void ConSetClass(IConsole::IResult *pResult, void *pUserData);
};

#endif