#ifndef CLASSPVP_WEAPONS_GRENADE_H
#define CLASSPVP_WEAPONS_GRENADE_H

#include <classpvp/weapon.h>

class CWeaponGrenade : public CWeapon
{
public:
    CWeaponGrenade(CGameContext *pGameServer);

    void Fire(vec2 Pos, vec2 Direction, int Owner) override;
};

#endif