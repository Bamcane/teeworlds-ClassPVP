#ifndef CLASSPVP_CLASS_LOOPER_H
#define CLASSPVP_CLASS_LOOPER_H

#include <classpvp/class.h>

class CClassLooper : public CClass
{
public:
    CClassLooper(CGameContext *pGameServer, CPlayer *pOwner);

    CClass *CreateNewOne(CGameContext *pGameServer, CPlayer *pOwner) override;
};

#endif