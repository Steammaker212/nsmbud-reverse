/* SE_OBJ_PNGN_ICE_FREEZE_ref
 * address: 0x602F37B0   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_PNGN_ICE_FREEZE_ref(int a1)
{
  unsigned int v2; // r0
  int v3; // r1
  int v4; // r5
  int v5; // r0
  float v6; // r1
  float v7; // r0
  int result; // r0
  Vec2 v9; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  FIELD_U8(a1, 76) = 0;
  FIELD_U8(a1, 70) = 0;
  FIELD_U8(a1, 71) = 0;
  v2 = sub_602F389C();
  FIELD_U8(a1, 74) = 0;
  v3 = FIELD_U8(a1, 52);
  FIELD_U8(a1, 69) = 0;
  if ( v2 == 2 )
  {
    LOBYTE(v2) = 1;
    if ( (v3 | 4) != 5 )
    {
      FIELD_U8(a1, 69) = 1;
      LOBYTE(v2) = 2;
    }
  }
  else if ( v3 == 4 || v2 <= 7 && ((1 << v2) & 0x98) != 0 )
  {
    FIELD_U8(a1, 69) = 1;
  }
  FIELD_U8(a1, 72) = v2;
  FIELD_U8(a1, 73) = 0;
  v4 = Global_BasicSoundActor2;
  v5 = FIELD_U32(a1, 60);
  v6 = FIELD_F32(v5, 108);
  v7 = FIELD_F32(v5, 112);
  position.x = v6;
  position.y = v7;
  mapPositionToScreen(&v9, &position);
  BasicSoundActor2_play(v4, "SE_OBJ_PNGN_ICE_FREEZE", &v9.x, 0);
  result = **(unsigned __int16 **)(a1 + 56);
  FIELD_U16(a1, 64) = result;
  FIELD_U16(a1, 66) = result;
  return result;
}
