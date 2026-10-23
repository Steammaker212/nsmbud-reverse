/* BlockCoinBase__spawnCoinShower
 * address: 0x605B5958   size: 216   group: blocks
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x6056622C : BrickBlockHuge
void __fastcall BlockCoinBase__spawnCoinShower(int a1)
{
  float v2; // r1
  float v3; // r2
  int v4; // r5
  float v5; // r1
  int v6; // r3
  Vec3 v7; // [sp+8h] [bp-30h] BYREF
  Vec2 out; // [sp+18h] [bp-20h] BYREF
  Vec3 position; // [sp+20h] [bp-18h] BYREF

  v2 = FIELD_F32(a1, 112);
  v3 = FIELD_F32(a1, 116);
  v7.x = FIELD_F32(a1, 108);
  v7.y = v2;
  v7.z = v3;
  if ( FIELD_U8(a1, 6868) || FIELD_U32(a1, 6864) == 2 )
  {
    v4 = Global_BasicSoundActor2;
    v7.y = v7.y + 16.0;
    v5 = FIELD_F32(a1, 112);
    position.x = FIELD_F32(a1, 108);
    position.y = v5;
    mapPositionToScreen(&out, &position);
    BasicSoundActor2_play(v4, "SE_OBJ_GET_COIN_SHOWER", &out.x, 0);
    v6 = 2;
  }
  else
  {
    v6 = 3;
    v7.y = v7.y + -8.0;
  }
  sub_605839E8(dword_60CAF15C, &v7, 5, v6, FIELD_U8(a1, 86), 1);
}
