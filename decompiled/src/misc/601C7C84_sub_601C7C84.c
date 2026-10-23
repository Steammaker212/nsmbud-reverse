/* sub_601C7C84
 * address: 0x601C7C84   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C7C84(_DWORD *a1)
{
  float *v2; // r5
  int v3; // r0
  int v4; // r1
  int v5; // r2
  int v6; // s2
  float v7; // s16
  float v8; // s18
  int v9; // r6
  int v10; // r7
  float v11; // s22
  float v12; // s20
  float *v13; // r0
  double v15; // [sp+Ch] [bp-44h] BYREF
  int v16; // [sp+14h] [bp-3Ch]

  sub_601CCD14(a1, 7);
  a1[59] = 3;
  v2 = (float *)sub_601C6BF0((int)a1);
  v3 = a1[20];
  a1[242] = v3;
  v4 = a1[21];
  a1[243] = v4;
  v5 = a1[22];
  a1[244] = v5;
  a1[245] = v3;
  a1[246] = v4;
  a1[247] = v5;
  v15 = sub_6019B6EC(a1[275]);
  v16 = v6;
  (*(void (__fastcall **)(_DWORD *, int, int, float))(*a1 + 336))(a1, 7, -1, 0.0);
  v7 = v2[86];
  v8 = v2[88];
  v9 = *((__int16 *)v2 + 174);
  v10 = *((__int16 *)v2 + 175);
  v11 = *((float *)sub_601C6BF0((int)a1) + 1);
  v12 = v2[89];
  v13 = (float *)sub_601C6BF0((int)a1);
  return ((int (__fastcall *)(_DWORD *, _DWORD *, _DWORD, int, float, float, float, int, double *))loc_60185F9C)(
           a1,
           a1 + 245,
           0,
           v9,
           v7,
           v8 * v11,
           v12 * v13[1],
           v10,
           &v15);
}
