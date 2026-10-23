/* sub_6058EF40
 * address: 0x6058EF40   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6058EF40(float *a1)
{
  int v2; // r2
  float v3; // s2
  int v5[2]; // [sp+0h] [bp-18h] BYREF
  float v6; // [sp+8h] [bp-10h] BYREF
  float v7; // [sp+Ch] [bp-Ch]

  v2 = FIELD_U32(dword_60C9CF0C, 1416);
  v5[1] = FIELD_U32(dword_60C9CF0C, 1420);
  v5[0] = v2;
  sub_603F4BF4(AreaTask_intance, &v6, v5);
  v6 = (float)((float)(int)(float)(v6 * 0.0625) * 16.0) + 8.0;
  v7 = (float)((float)(int)(float)(v7 * 0.0625) * 16.0) + -8.0;
  v3 = v7;
  a1[27] = v6;
  a1[28] = v3;
  FIELD_U8(dword_60CBC000, 154) = sub_6058F1F0(a1) ^ 1;
  return (*(int (__fastcall **)(float *, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CAF608);
}
