/* sub_607C14E0
 * address: 0x607C14E0   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C14E0(_DWORD *a1)
{
  int v2; // r1
  unsigned int v3; // r2
  int result; // r0
  unsigned int v5; // r2
  int v6; // r3
  _DWORD *v7; // r4
  int v8; // t1
  int v9; // [sp+4h] [bp-Ch] BYREF

  v2 = a1[3212];
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( v2 == 0x80000000 )
    {
LABEL_6:
      v5 = a1[3212];
      if ( v2 != 0x80000000 )
        v5 = -v2;
      goto LABEL_8;
    }
    v3 = -v2;
  }
  result = 0;
  if ( v3 <= 0x1000000 )
    return result;
  v5 = a1[3212];
  if ( v2 < 0 )
    goto LABEL_6;
LABEL_8:
  v6 = a1[3214];
  if ( v6 < 0 && v6 != 0x80000000 )
    v6 = -v6;
  result = 0;
  if ( v5 <= v6 && (float)(flt_60B0A898[a1[20]] * (float)v2) >= 0.0 )
  {
    if ( sub_607868D4((int)(a1 + 172), &v9) == 1 && v9 != a1[20] )
    {
      v8 = a1[2840];
      v7 = a1 + 2840;
      sub_60794368(v8);
      (*(void (__fastcall **)(_DWORD, int, float, float, float))(*(_DWORD *)*v7 + 84))(*v7, 131, 1.0, 10.0, 64.0);
      v7[369] = 6;
      return 1;
    }
    else
    {
      result = 0;
      a1[3209] = 0;
    }
  }
  return result;
}
