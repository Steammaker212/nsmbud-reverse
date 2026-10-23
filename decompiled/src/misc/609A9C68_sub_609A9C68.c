/* sub_609A9C68
 * address: 0x609A9C68   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_609A9C68(int a1, unsigned int *a2)
{
  unsigned int result; // r0

  result = FIELD_U32(a1, 160);
  if ( result <= 4 )
  {
    result = dword_60B75470[result];
    *a2 = result;
  }
  return result;
}
