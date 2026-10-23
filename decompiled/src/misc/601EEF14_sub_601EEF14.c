/* sub_601EEF14
 * address: 0x601EEF14   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601EEF14(int a1)
{
  float v2; // s0
  float v3; // s8
  float v4; // s2
  float v5; // s10
  float v7[7]; // [sp+Ch] [bp-1Ch] BYREF

  FIELD_U32(a1, 424) = 2;
  FIELD_U32(a1, 180) = 0;
  FIELD_U32(a1, 412) = 894784853;
  v2 = FIELD_F32(a1, 84);
  v3 = FIELD_F32(a1, 332);
  v4 = FIELD_F32(a1, 88);
  v5 = FIELD_F32(a1, 336);
  v7[0] = FIELD_F32(a1, 328) - FIELD_F32(a1, 80);
  v7[1] = v3 - v2;
  v7[2] = v5 - v4;
  ((void (__fastcall *)(int, int, _DWORD, int, float, float, float, int, float *))loc_60185F9C)(
    a1,
    a1 + 328,
    0,
    20,
    15.0,
    0.0,
    2.3,
    20,
    v7);
  sub_601ECD14(a1, 3);
  FIELD_U32(a1, 376) = 10;
  FIELD_U32(a1, 364) = 0;
  return 10;
}
