#ifndef CLASSPVP_WEAPONS_RIFLE_H
#define CLASSPVP_WEAPONS_RIFLE_H

#include <classpvp/weapon.h>

class CWeaponRifle : public CWeapon
{
public:
    CWeaponRifle(CGameContext *pGameServer);

    void Fire(vec2 Pos, vec2 Dir, int Owner) override;
};

#endif