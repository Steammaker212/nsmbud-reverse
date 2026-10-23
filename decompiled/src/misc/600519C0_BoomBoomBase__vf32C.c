/* BoomBoomBase__vf32C
 * address: 0x600519C0   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x600267FC
// 
// Overridden by: None
int __fastcall BoomBoomBase__vf32C(int a1, int a2)
{
  float v4; // s16
  float v5; // s18
  _DWORD v7[5]; // [sp+0h] [bp-40h] BYREF
  char v8; // [sp+14h] [bp-2Ch]
  _BOOL4 v9; // [sp+18h] [bp-28h]
  char v10; // [sp+1Ch] [bp-24h]

  v4 = FIELD_F32(a2, 108);
  v5 = FIELD_F32(a1, 108);
  sub_60025B84(a1, a2, a1 + 108, 6u);
  v7[0] = 0;
  v7[1] = 1077936128;
  v7[2] = -1065353216;
  v7[3] = -1103101952;
  v7[4] = &unk_60C80780;
  v8 = -1;
  v9 = v5 >= v4;
  v10 = FIELD_U8(a2, 84);
  return sub_602A852C(a1 + 6104, v7);
}
