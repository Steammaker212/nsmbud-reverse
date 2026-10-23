/* sub_601C2E80
 * address: 0x601C2E80   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C2E80(_DWORD *a1)
{
  _DWORD *v2; // r5
  float *v3; // r0
  int v4; // s2
  int v5; // r0
  int v6; // s2
  double v8; // [sp+Ch] [bp-5Ch] BYREF
  int v9; // [sp+14h] [bp-54h]
  unsigned __int64 v10; // [sp+18h] [bp-50h] BYREF
  int v11; // [sp+20h] [bp-48h]
  _DWORD v12[17]; // [sp+24h] [bp-44h] BYREF

  sub_601BA0F8((int)a1, 39, 0.0, 0.0);
  v2 = (_DWORD *)sub_601CF9C0(dword_60C8AEF0);
  memset(v12, 255, 12);
  sub_6019EC34(v12, v2 + 258);
  v3 = (float *)sub_601E0040(v12);
  v10 = sub_601BA56C((int)a1, v3, v2[45]).n64_u64[0];
  v11 = v4;
  a1[20] = v2[20];
  a1[21] = v2[21];
  a1[22] = v2[22];
  v5 = v2[275];
  a1[274] = v5;
  v8 = sub_6019B6EC(v5);
  v9 = v6;
  return ((int (__fastcall *)(_DWORD *, unsigned __int64 *, int, int, float, float, float, int, double *))loc_60185F9C)(
           a1,
           &v10,
           4,
           30,
           12.0,
           0.5 * 2.3,
           2.3 * 1.0,
           3,
           &v8);
}
