#ifndef CLASSPVP_WEAPONS_MEDIC_HAMMER_H
#define CLASSPVP_WEAPONS_MEDIC_HAMMER_H

#include <classpvp/weapons/hammer.h>

class CWeaponMedicHammer : public CWeaponHammer
{
public:
    CWeaponMedicHammer(CGameContext *pGameServer);

    void Fire(vec2 Pos, vec2 Direction, int Owner) override;
};

#endif