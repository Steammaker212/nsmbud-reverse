/* sub_600E6D80
 * address: 0x600E6D80   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_600E6D80(CollisionActor *a1)
{
  int y; // r2
  int v3; // r0
  int v4; // r1
  int v5; // r3
  bool v6; // cc
  int *v7; // r1

  j_ModelWrapper_updateAnims(*(_DWORD *)&a1[1].collisionMgr[384]);
  y = FIELD_U32(a1, 0x0).rotation.y;
  v3 = *(_DWORD *)&a1[1].collisionMgr[1456];
  *(_DWORD *)&a1[1].collisionMgr[1412] = y;
  v4 = y + v3;
  FIELD_U32(a1, 0x0).rotation.y = y + v3;
  v5 = *(_DWORD *)&a1[1].collisionMgr[380];
  if ( v5 != 2 )
  {
    if ( v5 == 1 )
    {
      ((void (__fastcall *)(Vec3 *, float, float, float, float))loc_60832560)(
        &FIELD_U32(a1, 0x0).position,
        *(float *)&a1[1].collisionMgr[1444],
        0.1,
        *(float *)&a1[1].collisionMgr[1448],
        0.1);
      EffectWrapper_update((EffectWrapper *)&a1[1].collisionMgr[1092], 1051, &FIELD_U32(a1, 0x0).position, 0, 0);
      if ( FIELD_U32(a1, 0x0).position.x == *(float *)&a1[1].collisionMgr[1444] )
        *(_DWORD *)&a1[1].collisionMgr[380] = 2;
    }
    goto LABEL_19;
  }
  if ( y <= 0 )
  {
    if ( (v4 | v3) < 0 && (y < 0 || v4 > 0 || v3 >= 1) )
      goto LABEL_19;
    goto LABEL_15;
  }
  v6 = v4 <= 0;
  if ( v4 <= 0 )
    v6 = v3 <= 0;
  if ( v6 )
  {
LABEL_15:
    FIELD_U32(a1, 0x0).rotation.y = 0;
    if ( a1[1].collisionMgr[1420] )
      v7 = &dword_60C85234;
    else
      v7 = &dword_60C851D4;
    (*(void (__fastcall **)(CollisionActor *, int *))(FIELD_U32(a1, 0x0)._.vtable + 192))(a1, v7);
  }
LABEL_19:
  CollisionActor__handleGravity(a1);
  return CollisionActor__handleSpeed(a1);
}
