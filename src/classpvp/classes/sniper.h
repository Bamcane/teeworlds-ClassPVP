#ifndef CLASSPVP_CLASS_SNIPER_H
#define CLASSPVP_CLASS_SNIPER_H

#include <classpvp/class.h>

class CClassSniper : public CClass
{
public:
    CClassSniper(CGameContext *pGameServer, CPlayer *pOwner);

    CClass *CreateNewOne(CGameContext *pGameServer, CPlayer *pOwner) override;
};

#endif