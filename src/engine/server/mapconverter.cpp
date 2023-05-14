// modify from infclass
#include "base/system.h"
#include <base/color.h>

#include <engine/server/mapconverter.h>


CMapConverter::CMapConverter(IStorage *pStorage, IEngineMap *pMap, IConsole* pConsole, CClasses* pClasses) :
	m_pStorage(pStorage),
	m_pMap(pMap),
	m_pConsole(pConsole),
	m_pClasses(pClasses)
{
	
}

bool CMapConverter::CreateMap(const char *pMapName)
{
	int Finish = ConvertMapTo7(pMapName);
	return !Finish;
}