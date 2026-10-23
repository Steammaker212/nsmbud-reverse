/* sub_604091B0
 * address: 0x604091B0   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_604091B0(int a1)
{
  unsigned int result; // r0

  result = (unsigned __int8)(FIELD_U8(a1, 6559) - 1);
  if ( result <= 2 )
  {
    result = ((int (__fastcall *)(int))loc_60583CD4)(dword_60CAF15C);
    FIELD_U32(a1, 6492) = result;
  }
  return result;
}
