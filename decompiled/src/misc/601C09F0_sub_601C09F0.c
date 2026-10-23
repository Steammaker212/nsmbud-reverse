/* sub_601C09F0
 * address: 0x601C09F0   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C09F0(_DWORD *a1)
{
  float *v2; // r0
  int v3; // s2
  int v4; // s2
  double v6; // [sp+8h] [bp-48h] BYREF
  int v7; // [sp+10h] [bp-40h]
  unsigned __int64 v8; // [sp+14h] [bp-3Ch] BYREF
  int v9; // [sp+1Ch] [bp-34h]

  if ( (a1[66] | 1) == 7 )
  {
    a1[274] = 2;
    v2 = (float *)sub_601E0040(a1 + 271);
    v8 = sub_601BA56C((int)a1, v2, 0).n64_u64[0];
    v9 = v3;
    v6 = sub_6019B6EC(a1[274]);
    v7 = v4;
    return ((int (__fastcall *)(_DWORD *, unsigned __int64 *, _DWORD, int, float, float, float, int, double *))loc_60185F9C)(
             a1,
             &v8,
             0,
             15,
             8.0,
             1.0 * 2.3,
             2.3 * 1.0,
             15,
             &v6);
  }
  else
  {
    a1[263] = 0;
    return 0;
  }
}
