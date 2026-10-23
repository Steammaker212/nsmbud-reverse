/* sub_607B0A84
 * address: 0x607B0A84   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607B0A84(float *a1)
{
  int result; // r0
  _DWORD v3[2]; // [sp+4h] [bp-14h] BYREF
  char v4; // [sp+Ch] [bp-Ch]

  sub_607712D4((int)a1);
  (*(void (__fastcall **)(float *))(*(_DWORD *)a1 + 1104))(a1);
  ((void (__fastcall *)(float *))loc_60771910)(a1);
  ((void (__fastcall *)(float *))loc_60770F74)(a1);
  *((_DWORD *)a1 + 301) |= 0x2000000u;
  result = sub_607AFD98((int)a1);
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
        return sub_60773E6C((int)a1, (StateBase *)&dword_60CC4BE0, (int)v3);
      }
    }
  }
  return result;
}
