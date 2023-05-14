#ifndef ENGINE_SERVER_MAPCONVERTER_H
#define ENGINE_SERVER_MAPCONVERTER_H

#include <base/tl/array.h>
#include <engine/storage.h>
#include <engine/map.h>
#include <engine/console.h>
#include <engine/shared/datafile.h>
#include <game/mapitems.h>
#include <game/gamecore.h>
#include <classpvp/classes.h>


enum
{
	TIMESHIFT_MENUCLASS = 60,
	MENU_RADIUS = 192,
	MENU_ANGLE_START = -90
};

class CMapConverter
{
protected:
	IStorage *m_pStorage;
	IEngineMap *m_pMap;
	IConsole *m_pConsole;
	CClasses *m_pClasses;
protected:	
	IEngineMap* Map() { return m_pMap; };
	IStorage* Storage() { return m_pStorage; };
	IConsole* Console() { return m_pConsole; };
	CClasses* Classes() { return m_pClasses; }
	// 0.7
	bool CheckImageDimensions(void *pLayerItem, int LayerType, const char *pFilename);
	void *ReplaceImageItem(void *pItem, int Type, CMapItemImage *pNewImgItem);
	int LoadPNG(class CImageInfo *pImg, const char *pFilename);
	int ConvertMapTo7(const char* pFilename);

public:
	CMapConverter(IStorage *pStorage, IEngineMap *pMap, IConsole* pConsole, CClasses *pClasses);
	~CMapConverter() {}

	bool CreateMap(const char *pMapName);
};

#endif
