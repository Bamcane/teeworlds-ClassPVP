#ifndef CLASSPVP_WEAPONS_CAPTAIN_RIFLE_H
#define CLASSPVP_WEAPONS_CAPTAIN_RIFLE_H

#include <classpvp/weapons/rifle.h>

class CWeaponCaptainRifle : public CWeaponRifle
{
public:
    CWeaponCaptainRifle(CGameContext *pGameServer);

    void Fire(vec2 Pos, vec2 Dir, int Owner) override;
};

#endif