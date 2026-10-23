/* sub_601C0908
 * address: 0x601C0908   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C0908(_DWORD *a1, int a2)
{
  int result; // r0
  float *v4; // r0
  int v5; // s2
  int v6; // s2
  double v7; // [sp+8h] [bp-48h] BYREF
  int v8; // [sp+10h] [bp-40h]
  unsigned __int64 v9; // [sp+14h] [bp-3Ch] BYREF
  int v10; // [sp+1Ch] [bp-34h]

  result = sub_601C4774(a1, a2);
  if ( result == 1 )
  {
    if ( (a1[66] | 1) == 7 )
    {
      result = sub_601C6678(a1);
      if ( result == 1 )
      {
        a1[274] = 2;
        v4 = (float *)sub_601E0040(a1 + 271);
        v9 = sub_601BA56C((int)a1, v4, 0).n64_u64[0];
        v10 = v5;
        v7 = sub_6019B6EC(a1[274]);
        v8 = v6;
        return ((int (__fastcall *)(_DWORD *, unsigned __int64 *, _DWORD, int, float, float, float, int, double *))loc_60185F9C)(
                 a1,
                 &v9,
                 0,
                 15,
                 8.0,
                 1.0 * 2.3,
                 2.3 * 1.0,
                 15,
                 &v7);
      }
    }
    else
    {
      a1[263] = 0;
      return 0;
    }
  }
  return result;
}
