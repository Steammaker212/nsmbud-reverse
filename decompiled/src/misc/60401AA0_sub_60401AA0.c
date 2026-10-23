/* sub_60401AA0
 * address: 0x60401AA0   size: 12   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60401AA0(int a1)
{
  int result; // r0

  result = a1 + 4708;
  if ( FIELD_U8(result, 3552) )
    return sub_60473B88(result + 4);
  return result;
}
