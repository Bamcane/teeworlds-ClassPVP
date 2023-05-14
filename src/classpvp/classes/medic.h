#ifndef CLASSPVP_CLASS_MEDIC_H
#define CLASSPVP_CLASS_MEDIC_H

#include <classpvp/class.h>

class CClassMedic : public CClass
{
public:
    CClassMedic(CGameContext *pGameServer, CPlayer *pOwner);

    CClass *CreateNewOne(CGameContext *pGameServer, CPlayer *pOwner) override;
};

#endif