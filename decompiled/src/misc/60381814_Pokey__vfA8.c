/* Pokey__vfA8
 * address: 0x60381814   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A7960
// 
// Overridden by: None
int __fastcall Pokey__vfA8(int a1, float *a2)
{
  _BOOL4 v3; // r7
  float v4; // r1
  int v5; // r5
  Vec3 position; // [sp+8h] [bp-40h] BYREF
  _BOOL4 v8; // [sp+14h] [bp-34h]
  int v9; // [sp+18h] [bp-30h]
  char v10; // [sp+1Ch] [bp-2Ch]
  char v11; // [sp+1Dh] [bp-2Bh]
  char v12; // [sp+1Eh] [bp-2Ah]
  _BOOL4 v13; // [sp+20h] [bp-28h]
  char v14; // [sp+24h] [bp-24h]
  Vec2 out; // [sp+28h] [bp-20h] BYREF

  if ( FIELD_S32(a1, 6360) < 0 )
  {
    v3 = *a2 >= FIELD_F32(a1, 108);
    position = *(Vec3 *)(**(_DWORD **)(a1 + 6304) + 72);
    v8 = v3;
    v9 = 1;
    v10 = 0;
    v12 = 0;
    v11 = 0;
    sub_60583000(dword_60CAF15C, &position, 3);
    v4 = FIELD_F32(a1, 112);
    v5 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 108);
    position.y = v4;
    mapPositionToScreen(&out, &position);
    sub_60813810(v5, (int)"SE_EMY_DOWN", (int)&out, 1, 0);
    v8 = 0;
    memset(&position, 0, sizeof(position));
    v9 = (int)&unk_60C96A1C;
    v10 = -1;
    v13 = v3;
    v14 = -1;
    sub_602A852C(a1 + 6104, &position);
  }
  return 1;
}
