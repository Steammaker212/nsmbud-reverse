/* sub_60202B00
 * address: 0x60202B00   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60202B00(int a1)
{
  float *v2; // r0
  float v3; // s10
  float v4; // s4
  float v5; // s2
  _BOOL4 result; // r0
  int v7; // r1
  float v8[5]; // [sp+Ch] [bp-14h] BYREF

  ((void (__fastcall *)(int, int, _DWORD, int, float, float, float, int, int *))loc_60185F9C)(
    a1,
    a1 + 80,
    0,
    24,
    8.0,
    FIELD_F32(a1, 128),
    FIELD_F32(a1, 128),
    16,
    &dword_60B3B974);
  v2 = (float *)sub_601CF9C0(dword_60C8AEF0);
  v3 = v2[22];
  v4 = FIELD_F32(a1, 88);
  v5 = v2[21] - FIELD_F32(a1, 84);
  v8[0] = v2[20] - FIELD_F32(a1, 80);
  v8[1] = v5;
  v8[2] = v3 - v4;
  sub_601862E0(a1, v8);
  FIELD_U32(a1, 484) = 1;
  result = sub_60185EA8(a1);
  v7 = 4;
  if ( result )
    v7 = 0;
  FIELD_U32(a1, 576) = v7;
  return result;
}
