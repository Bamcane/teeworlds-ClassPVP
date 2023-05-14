#ifndef CLASSPVP_WEAPONS_LOOPER_RIFLE_H
#define CLASSPVP_WEAPONS_LOOPER_RIFLE_H

#include <classpvp/weapons/rifle.h>

class CWeaponSniperRifle : public CWeaponRifle
{
public:
    CWeaponSniperRifle(CGameContext *pGameServer);

    void Fire(vec2 Pos, vec2 Dir, int Owner) override;
};

#endif