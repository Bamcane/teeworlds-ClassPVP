#ifndef CLASSPVP_WEAPONS_GUN_H
#define CLASSPVP_WEAPONS_GUN_H

#include <classpvp/weapon.h>

class CWeaponGun : public CWeapon
{
public:
    CWeaponGun(CGameContext *pGameServer);

    void Fire(vec2 Pos, vec2 Direction, int Owner) override;
};

#endif