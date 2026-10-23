/* sub_605BDD84
 * address: 0x605BDD84   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605BDD84(int a1)
{
  int result; // r0
  int v3; // r0

  result = FIELD_U8(a1, 23);
  if ( (result & 0xF) != 0 )
  {
    v3 = ((int (__fastcall *)(int, int, _DWORD))loc_60585214)(dword_60CAF15C, result & 0xF, 0);
    return sub_60585110(dword_60CAF15C, FIELD_U8(a1, 23) & 0xF, v3, 0, FIELD_U8(a1, 24), 0);
  }
  return result;
}
