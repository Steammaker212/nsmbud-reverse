/* SE_BOSS_JR_CLOWN_MOVE_ref_FF1FC
 * address: 0x600FF1FC   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_JR_CLOWN_MOVE_ref_FF1FC(int a1)
{
  float v2; // s2
  float v3; // s0
  float v4; // r1
  int result; // r0
  float v6; // r1
  float v7; // s0
  Vec2 v8; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6304));
  v2 = FIELD_F32(a1, 100) + FIELD_F32(a1, 124);
  FIELD_F32(a1, 124) = v2;
  v3 = FIELD_F32(a1, 136);
  if ( v2 <= v3 )
  {
    CollisionActor__handleSpeed((CollisionActor *)a1);
    v6 = FIELD_F32(a1, 112);
    position.x = FIELD_F32(a1, 108);
    position.y = v6;
    mapPositionToScreen(&v8, &position);
    sub_60813574(a1 + 9476, "SE_BOSS_JR_CLOWN_MOVE", &v8, 0);
    CollisionMgr_process((_BYTE *)(a1 + 648));
    sub_600D17F4(a1);
    ((void (__fastcall *)(int))loc_601005C0)(a1);
    result = a1 + 6812;
    v7 = FIELD_F32(a1, 6812);
    if ( FIELD_F32(a1, 112) >= v7 )
    {
      FIELD_F32(a1, 112) = v7;
      FIELD_U32(a1, 9420) = 0;
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C85E94);
    }
  }
  else
  {
    FIELD_F32(a1, 124) = v3;
    CollisionActor__handleSpeed((CollisionActor *)a1);
    v4 = FIELD_F32(a1, 112);
    position.x = FIELD_F32(a1, 108);
    position.y = v4;
    mapPositionToScreen(&v8, &position);
    sub_60813574(a1 + 9476, "SE_BOSS_JR_CLOWN_MOVE", &v8, 0);
    CollisionMgr_process((_BYTE *)(a1 + 648));
    sub_600D17F4(a1);
    ((void (__fastcall *)(int))loc_601005C0)(a1);
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C85F54);
  }
  return result;
}
