/* sub_607D72E0
 * address: 0x607D72E0   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_607D72E0(float *a1)
{
  _DWORD *result; // r0
  int v3; // r1

  sub_60774360((int)a1);
  sub_607712D4((int)a1);
  (*(void (__fastcall **)(float *))(*(_DWORD *)a1 + 1104))(a1);
  ((void (__fastcall *)(float *))loc_60771910)(a1);
  sub_60771250((int)a1);
  if ( !sub_60773F4C((int)a1) )
    *((_DWORD *)a1 + 305) |= 0x800u;
  result = (_DWORD *)(*(int (__fastcall **)(float *))(*(_DWORD *)a1 + 972))(a1);
  if ( !result )
  {
    result = a1 + 2485;
    v3 = *((_DWORD *)a1 + 2485);
    if ( v3 == 1 )
    {
      return (_DWORD *)sub_607740F4((int)a1);
    }
    else if ( !v3 )
    {
      if ( a1[22] == 0.0 )
      {
        return (_DWORD *)(*(int (__fastcall **)(float *, int))(*(_DWORD *)a1 + 976))(a1, 1);
      }
      else
      {
        *result = 1;
        return (_DWORD *)sub_607740E8((int)a1);
      }
    }
  }
  return result;
}
