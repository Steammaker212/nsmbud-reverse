/* sub_606D4760
 * address: 0x606D4760   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606D4760(int a1, int a2)
{
  int result; // r0

  result = 0;
  if ( (a2 & 0xFFFFFFFE) == 2 )
  {
    result = FIELD_U8(a1, 6116);
    if ( FIELD_U8(a1, 6116) )
      return 1;
  }
  return result;
}
