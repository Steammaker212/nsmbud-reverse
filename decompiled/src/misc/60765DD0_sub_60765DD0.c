/* sub_60765DD0
 * address: 0x60765DD0   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60765DD0(float *a1, int a2)
{
  int result; // r0

  if ( (*((_BYTE *)a1 + 1214) & 0x20) != 0 )
  {
    a1[31] = -1.0;
    return -1082130432;
  }
  else
  {
    if ( a1[31] > 0.0 )
      a1[31] = 0.0;
    (*(void (__fastcall **)(float *))(*(_DWORD *)a1 + 220))(a1);
    (*(void (__fastcall **)(float *))(*(_DWORD *)a1 + 212))(a1);
    result = FIELD_U8(a2, 6900);
    if ( (result & 2) != 0 )
    {
      result = *((_DWORD *)a1 + 310) | 1;
      *((_DWORD *)a1 + 310) = result;
    }
  }
  return result;
}
