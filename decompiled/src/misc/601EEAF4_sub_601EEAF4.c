/* sub_601EEAF4
 * address: 0x601EEAF4   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601EEAF4(int a1)
{
  float v2; // r0
  float v3; // r1
  float v4; // r2
  float v5; // s2
  float v6; // s4
  int result; // r0
  float v8[7]; // [sp+Ch] [bp-1Ch] BYREF

  FIELD_U32(a1, 376) = 30;
  v2 = FIELD_F32(a1, 340);
  FIELD_F32(a1, 328) = v2;
  v3 = FIELD_F32(a1, 344);
  FIELD_F32(a1, 332) = v3;
  v4 = FIELD_F32(a1, 348);
  FIELD_F32(a1, 336) = v4;
  FIELD_U32(a1, 236) = 0;
  v5 = FIELD_F32(a1, 84);
  v6 = FIELD_F32(a1, 88);
  v8[0] = v2 - FIELD_F32(a1, 80);
  v8[1] = v3 - v5;
  v8[2] = v4 - v6;
  result = ((int (__fastcall *)(int, int, _DWORD, int, float, float, float, int, float *))loc_60185F9C)(
             a1,
             a1 + 328,
             0,
             20,
             15.0,
             2.3,
             0.1,
             10,
             v8);
  FIELD_U32(a1, 236) = 10;
  return result;
}
