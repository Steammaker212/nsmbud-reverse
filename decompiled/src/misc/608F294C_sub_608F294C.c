/* sub_608F294C
 * address: 0x608F294C   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int (__fastcall ***__fastcall sub_608F294C(
        int (__fastcall ***result)(_DWORD, _DWORD *),
        int a2,
        int a3,
        int a4,
        int a5))(_DWORD, _DWORD *)
{
  _DWORD v5[7]; // [sp+4h] [bp-1Ch] BYREF

  if ( dword_60CCF464 )
  {
    v5[0] = result;
    v5[1] = a2;
    v5[2] = a3;
    v5[3] = a4;
    v5[4] = a5;
    result = *(int (__fastcall ****)(_DWORD, _DWORD *))(dword_60CCF464 + 360);
    if ( result )
      return (int (__fastcall ***)(_DWORD, _DWORD *))(**result)(result, v5);
  }
  return result;
}
