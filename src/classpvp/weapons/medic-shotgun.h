#ifndef CLASSPVP_WEAPONS_MEDIC_SHOTGUN_H
#define CLASSPVP_WEAPONS_MEDIC_SHOTGUN_H

#include <classpvp/weapons/shotgun.h>

class CWeaponMedicShotgun : public CWeaponShotgun
{
public:
    CWeaponMedicShotgun(CGameContext *pGameServer);
    void Fire(vec2 Pos, vec2 Dir, int Owner) override; 
};

#endif