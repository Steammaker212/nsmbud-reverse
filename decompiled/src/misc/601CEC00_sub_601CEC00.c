/* sub_601CEC00
 * address: 0x601CEC00   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601CEC00(_DWORD *a1)
{
  _DWORD *i; // r5
  bool v3; // zf
  int v4; // s2
  float *v5; // r0
  float v6; // s18
  float v7; // s16
  float v8; // s20
  float v9; // s22
  int v10; // r6
  int v11; // r7
  int v12; // s2
  double v14; // [sp+Ch] [bp-44h] BYREF
  int v15; // [sp+14h] [bp-3Ch]

  (*(void (__fastcall **)(_DWORD *, int, int, float))(*a1 + 336))(a1, 39, -1, 0.0);
  for ( i = (_DWORD *)a1[68]; ; i = (_DWORD *)i[68] )
  {
    v3 = i == 0;
    if ( i )
      v3 = (i[66] | 1) == 7;
    if ( v3 )
      break;
    if ( (*(int (__fastcall **)(_DWORD *))(*i + 92))(i) == 1 )
      sub_601C5B4C((int)i, 7);
  }
  sub_601C5B4C((int)a1, 7);
  a1[275] = 2;
  v14 = sub_6019B6EC(2);
  v15 = v4;
  sub_601862E0((int)a1, (float *)&v14);
  v5 = (float *)sub_601C6BF0((int)a1);
  v6 = v5[1];
  v7 = v5[76];
  v8 = v5[78];
  v9 = v5[79];
  v10 = *((__int16 *)v5 + 154);
  v11 = *((__int16 *)v5 + 155);
  v14 = sub_6019B6EC(a1[275]);
  v15 = v12;
  return ((int (__fastcall *)(_DWORD *, _DWORD *, _DWORD, int, float, float, float, int, double *))loc_60185F9C)(
           a1,
           a1 + 20,
           0,
           v10,
           v7,
           v8 * v6,
           v6 * v9,
           v11,
           &v14);
}
