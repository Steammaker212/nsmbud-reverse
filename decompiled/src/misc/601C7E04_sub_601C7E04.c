/* sub_601C7E04
 * address: 0x601C7E04   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C7E04(_DWORD *a1)
{
  _DWORD *v2; // r0
  float *v3; // r5
  int v4; // s2
  int v5; // r6
  float v6; // s16
  float v7; // s18
  int v8; // r7
  float v9; // s22
  float v10; // s20
  float *v11; // r0
  double v13; // [sp+Ch] [bp-44h] BYREF
  int v14; // [sp+14h] [bp-3Ch]

  sub_601CCD14(a1, 7);
  a1[59] = 3;
  a1[242] = a1[20];
  a1[243] = a1[21];
  a1[244] = a1[22];
  v2 = (_DWORD *)sub_601E0040(a1 + 258);
  a1[245] = *v2;
  a1[246] = v2[1];
  a1[247] = v2[2];
  (*(void (__fastcall **)(_DWORD *, int, int, float))(*a1 + 336))(a1, 7, -1, 0.0);
  v3 = (float *)sub_601C6BF0((int)a1);
  v13 = sub_6019B6EC(a1[275]);
  v14 = v4;
  v5 = *((__int16 *)v3 + 184);
  v6 = v3[91];
  v7 = v3[93];
  v8 = *((__int16 *)v3 + 185);
  v9 = *((float *)sub_601C6BF0((int)a1) + 1);
  v10 = v3[94];
  v11 = (float *)sub_601C6BF0((int)a1);
  return ((int (__fastcall *)(_DWORD *, _DWORD *, _DWORD, int, float, float, float, int, double *))loc_60185F9C)(
           a1,
           a1 + 245,
           0,
           v5,
           v6,
           v7 * v9,
           v10 * v11[1],
           v8,
           &v13);
}
