/* sub_602E7540
 * address: 0x602E7540   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602E7540(int a1)
{
  int result; // r0

  sub_602EDD20(a1, a1 + 108, a1 + 164);
  result = FIELD_U8(a1, 6780);
  if ( FIELD_U8(a1, 6780) )
  {
    result = FIELD_U32(a1, 164);
    FIELD_U32(a1, 6348) = result;
  }
  return result;
}
