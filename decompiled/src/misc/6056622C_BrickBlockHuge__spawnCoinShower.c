/* BrickBlockHuge__spawnCoinShower
 * address: 0x6056622C   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BlockCoinBase : 0x605B5958
// 
// Overridden by: None
int __fastcall BrickBlockHuge__spawnCoinShower(int a1)
{
  float v2; // r1
  int v3; // r2
  int v4; // r5
  float v5; // r1
  int v6; // r3
  int v8; // [sp+8h] [bp-30h] BYREF
  float v9; // [sp+Ch] [bp-2Ch]
  int v10; // [sp+10h] [bp-28h]
  Vec2 out; // [sp+18h] [bp-20h] BYREF
  Vec3 position; // [sp+20h] [bp-18h] BYREF

  v2 = FIELD_F32(a1, 112);
  v3 = FIELD_U32(a1, 116);
  v8 = FIELD_U32(a1, 108);
  v9 = v2;
  v10 = v3;
  if ( FIELD_U8(a1, 6868) || FIELD_U32(a1, 6864) == 2 )
  {
    v4 = Global_BasicSoundActor2;
    v9 = v9 + 20.0;
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
    v9 = v9 + -12.0;
  }
  return ((int (__fastcall *)(int, int *, int, int, _DWORD, int))sub_605839E8)(
           dword_60CAF15C,
           &v8,
           5,
           v6,
           FIELD_U8(a1, 86),
           1);
}
