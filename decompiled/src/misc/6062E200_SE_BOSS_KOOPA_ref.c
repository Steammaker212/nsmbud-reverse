/* SE_BOSS_KOOPA_ref
 * address: 0x6062E200   size: 504   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_KOOPA_ref(int a1)
{
  _BYTE *v2; // r7
  int v3; // r5
  int v4; // r6
  float v5; // r1
  int v6; // r1
  unsigned int v7; // r0
  int result; // r0
  float v9; // s0
  float *v10; // r0
  float v11; // r1
  float v12; // s2
  int v13; // [sp+8h] [bp-30h] BYREF
  Vec3 position; // [sp+Ch] [bp-2Ch] BYREF
  Vec2 out; // [sp+18h] [bp-20h] BYREF

  CollisionActor__handleSpeed((CollisionActor *)a1);
  FIELD_U32(a1, 156) += FIELD_U32(a1, 6252);
  FIELD_U32(a1, 160) += FIELD_U32(a1, 6256);
  FIELD_U32(a1, 164) += FIELD_U32(a1, 6260);
  v2 = (_BYTE *)(a1 + 6264);
  if ( !FIELD_U8(a1, 6264) )
  {
    v3 = FIELD_U32(a1, 8);
    v4 = Global_BasicSoundActor2;
    v5 = FIELD_F32(a1, 112);
    if ( FIELD_S32(a1, 6240) < 3 )
    {
      position.x = FIELD_F32(a1, 108);
      position.y = v5;
      mapPositionToScreen(&out, &position);
      SE_OBJ_FIRE_CANNON_BLAZE_ref_2(v4, "SE_BOSS_KOOPA_FIRE_SHOT2", v3, &out, 0);
    }
    else
    {
      position.x = FIELD_F32(a1, 108);
      position.y = v5;
      mapPositionToScreen(&out, &position);
      SE_OBJ_FIRE_CANNON_BLAZE_ref_2(v4, "SE_BOSS_KOOPA_L_FIRE_SHOT2", v3, &out, 0);
    }
  }
  CollisionActor__sub_600034C8((CollisionActor *)a1);
  v7 = FIELD_U32(a1, 2872);
  if ( (v7 & 1) != 0
    || (v7 & 0x440000) != 0 && (v6 = v7 & 0x10000000, (v7 & 0x10000000) == 0)
    || (v6 = ((v7 & 0x880000) == 0) | (v7 >> 29), !(((v7 & 0x880000) == 0) | (v7 >> 29) & 1))
    || (v6 = -1056964064, (v7 & 0xC1000220) != 0) )
  {
    sub_6062E40C(a1, v6);
    return sub_6062E508(a1);
  }
  else
  {
    result = (unsigned __int8)*v2;
    if ( !*v2 )
    {
      v9 = FIELD_F32(a1, 112);
      v10 = (float *)((char *)&unk_60AF21C0 + 4 * FIELD_U32(a1, 6244));
      v11 = FIELD_F32(a1, 116);
      position.x = FIELD_F32(a1, 108);
      v12 = *v10;
      out.x = 0.0;
      position.y = v9 + v12;
      position.z = v11;
      ((void (__fastcall *)(int *, Vec2 *, Vec3 *, _DWORD))checkLiquidCollisions)(
        &v13,
        &out,
        &position,
        FIELD_U8(a1, 86));
      result = v13;
      if ( v13 )
      {
        position.x = FIELD_F32(a1, 108);
        position.y = out.x;
        TileMgr_splashRelated(TileMgr_instance, &position, 16);
        result = 1;
        *v2 = 1;
      }
    }
  }
  return result;
}
