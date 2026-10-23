/* sub_607D449C
 * address: 0x607D449C   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D449C(float *a1)
{
  int result; // r0
  _DWORD v3[2]; // [sp+4h] [bp-1Ch] BYREF
  char v4; // [sp+Ch] [bp-14h]

  sub_607712D4((int)a1);
  (*(void (__fastcall **)(float *))(*(_DWORD *)a1 + 1104))(a1);
  sub_607D3BB4((int)a1);
  result = *(unsigned __int8 *)(*((_DWORD *)a1 + 2842) + 196);
  if ( (result & 1) == 0 )
  {
    result = (_DWORD)a1[301] & 0xBFFFFFFF;
    *((_DWORD *)a1 + 301) = result;
  }
  if ( a1[31] < 0.0 )
  {
    *((_DWORD *)a1 + 307) &= ~0x20000u;
    result = sub_60786974((int)(a1 + 172));
    if ( !result )
    {
      result = ((int (__fastcall *)(float *))loc_60763E28)(a1);
      if ( !result )
      {
        *(float *)v3 = a1[31];
        v3[1] = 0;
        v4 = 1;
        return sub_60773E6C((int)a1, &stru_60CC54AC, (int)v3);
      }
    }
  }
  return result;
}
