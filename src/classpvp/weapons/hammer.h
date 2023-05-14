#ifndef CLASSPVP_WEAPONS_HAMMER_H
#define CLASSPVP_WEAPONS_HAMMER_H

#include <classpvp/weapon.h>

class CWeaponHammer : public CWeapon
{
public:
    CWeaponHammer(CGameContext *pGameServer);

    void Fire(vec2 Pos, vec2 Direction, int Owner) override;
};

#endif