/* sub_6020D4EC
 * address: 0x6020D4EC   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6020D4EC(int a1)
{
  float v2; // s8
  float v3; // s6
  float v5[12]; // [sp+8h] [bp-48h] BYREF
  float v6; // [sp+38h] [bp-18h] BYREF
  float v7; // [sp+3Ch] [bp-14h]
  float v8; // [sp+40h] [bp-10h]

  v8 = 1.0;
  v7 = 0.0;
  v6 = 0.0;
  sub_60832684((int)v5, (unsigned int *)(a1 + 180));
  v2 = v7;
  v3 = v6;
  v6 = (float)((float)(v7 * v5[1]) + (float)(v6 * v5[0])) + (float)(v8 * v5[2]);
  v7 = (float)((float)(v7 * v5[5]) + (float)(v3 * v5[4])) + (float)(v8 * v5[6]);
  v8 = (float)((float)(v2 * v5[9]) + (float)(v3 * v5[8])) + (float)(v8 * v5[10]);
  return ((int (__fastcall *)(int, int, _DWORD, int, float, float, float, int, float *))loc_60185F9C)(
           a1,
           a1 + 416,
           0,
           20,
           20.0,
           FIELD_F32(a1, 128),
           FIELD_F32(a1, 128),
           20,
           &v6);
}
