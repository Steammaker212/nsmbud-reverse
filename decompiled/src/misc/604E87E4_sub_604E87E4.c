/* sub_604E87E4
 * address: 0x604E87E4   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_604E87E4(int a1)
{
  unsigned int result; // r0

  result = FIELD_U32(dword_60C99DD4, 764);
  if ( result <= 1 )
  {
    FIELD_U8(a1, 564) = 1;
    result = sub_603FC6A0(dword_60C99DE4);
    FIELD_U16(a1, 566) = result;
  }
  return result;
}
