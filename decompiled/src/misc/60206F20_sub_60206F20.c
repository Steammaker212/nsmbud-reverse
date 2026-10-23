/* sub_60206F20
 * address: 0x60206F20   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60206F20(int a1)
{
  float v2; // r1
  float v3; // r2
  float v4; // s2
  float *v5; // r0
  float v7[6]; // [sp+8h] [bp-18h] BYREF

  v2 = FIELD_F32(a1, 84);
  v3 = FIELD_F32(a1, 88);
  v7[0] = FIELD_F32(a1, 80);
  v7[2] = v3;
  v7[0] = v7[0] + 120.0;
  v7[1] = v2 + 100.0;
  v4 = FIELD_F32(a1, 344);
  v5 = (float *)((char *)&unk_60AFD280 + 20 * FIELD_U32(a1, 240));
  ((void (__fastcall *)(int, float *, _DWORD, _DWORD, float, float, float, _DWORD, int *))loc_60185F9C)(
    a1,
    v7,
    0,
    *((__int16 *)v5 + 4),
    v5[1],
    v5[3] * v4,
    v4 * v5[4],
    *((__int16 *)v5 + 5),
    &dword_60B3B974);
  FIELD_U32(a1, 348) = 1291472805;
  FIELD_U32(a1, 356) = 32;
  return 32;
}
