/* SE_OBJ_ROCK_LAND_ref_2
 * address: 0x60145DFC   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_ROCK_LAND_ref_2(int a1)
{
  char *v2; // r7
  char v3; // r0
  float v4; // r1
  int v5; // r5
  int result; // r0
  int v7; // [sp+4h] [bp-2Ch] BYREF
  Vec2 out; // [sp+8h] [bp-28h] BYREF
  Vec3 position; // [sp+10h] [bp-20h] BYREF

  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  FIELD_U32(a1, 156) += dword_60C880A0;
  FIELD_U32(a1, 160) += dword_60C880A4;
  if ( FIELD_U16(a1, 6276) == 1 )
  {
    FIELD_U32(a1, 312) = 1091567616;
    FIELD_U32(a1, 316) = 1091567616;
  }
  CollisionMgr_process((_BYTE *)(a1 + 648));
  v2 = (char *)(a1 + 7040);
  v3 = 0;
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
  {
    v3 = 1;
    if ( !*v2 && !FIELD_U8(a1, 7041) && !FIELD_U16(a1, 6278) )
    {
      SE_OBJ_ROCK_LAND_ref_2_helper(a1);
      v4 = FIELD_F32(a1, 112);
      v5 = Global_BasicSoundActor2;
      position.x = FIELD_F32(a1, 108);
      position.y = v4;
      mapPositionToScreen(&out, &position);
      BasicSoundActor2_play(v5, "SE_OBJ_ROCK_LAND", &out.x, 0);
      FIELD_U32(a1, 124) = 1071644672;
      v3 = 1;
      FIELD_U8(a1, 7041) = 1;
    }
  }
  *v2 = v3;
  result = ((int (__fastcall *)(int *, Vec3 *, int, _DWORD))checkLiquidCollisions)(
             &v7,
             &position,
             a1 + 108,
             FIELD_U8(a1, 86));
  if ( v7 )
  {
    SE_OBJ_ROCK_LAND_ref_2_helper_13E8B4(a1, v7, position.x);
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8806C);
  }
  return result;
}
