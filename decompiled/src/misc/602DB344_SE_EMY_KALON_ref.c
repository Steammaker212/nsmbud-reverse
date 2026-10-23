/* SE_EMY_KALON_ref
 * address: 0x602DB344   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_KALON_ref(int a1)
{
  _BOOL4 v2; // r5
  int v3; // r7
  _BOOL4 v4; // r6
  int v5; // r0
  int v6; // r0
  bool v7; // zf
  int result; // r0
  float v9; // r1
  int v10; // r5
  Vec2 v11; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  v2 = 0;
  v3 = FIELD_U32(a1, 2872) & 0x10401;
  v4 = v3 == 1025;
  v5 = sub_6014B6F8(a1 + 648);
  if ( v5 )
    v4 = v3 == 1025 && (FIELD_U8(v5, 137) & 0x10) == 0;
  v6 = FIELD_U32(a1, 2872);
  if ( (v6 & 0x10000000) == 0 )
  {
    v7 = (v6 & 0x440000) == 0;
    if ( (v6 & 0x440000) != 0 )
      v7 = (v6 & 0x880000) == 0;
    if ( !v7 )
      v2 = (v6 & 0x20000000) == 0;
  }
  result = 0;
  if ( v4 || v2 )
  {
    sub_602A38A4(a1, (float *)(a1 + 108));
    v9 = FIELD_F32(a1, 112);
    v10 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 108);
    position.y = v9;
    mapPositionToScreen(&v11, &position);
    BasicSoundActor1_playSound(v10, "SE_EMY_KALON", (int)&v11, 0);
    sub_602A6024(a1, (float)(FIELD_F32(a1, 108) - FIELD_F32(a1, 584)) < 0.0, -1, -1);
    return 1;
  }
  return result;
}
