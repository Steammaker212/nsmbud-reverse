/* sub_606E3E9C
 * address: 0x606E3E9C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606E3E9C(int a1)
{
  int result; // r0
  int v3; // r0

  result = FIELD_U8(a1, 23);
  if ( (result & 0xF) != 0 )
  {
    v3 = ((int (__fastcall *)(int, int, _DWORD))loc_60585214)(dword_60CAF15C, result & 0xF, 0);
    return sub_60585110(
             dword_60CAF15C,
             FIELD_U8(a1, 23) & 0xF,
             v3,
             (FIELD_U32(a1, 24) >> 8) & 1,
             (unsigned __int8)FIELD_U32(a1, 24),
             0);
  }
  return result;
}
