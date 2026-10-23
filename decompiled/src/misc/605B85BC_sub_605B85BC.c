/* sub_605B85BC
 * address: 0x605B85BC   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605B85BC(int result)
{
  int v1; // r1

  v1 = 0;
  if ( (FIELD_U8(result, 6128) | 1) == 3 )
    v1 = FIELD_U32(result, 6120);
  FIELD_U32(result, 164) = v1;
  return result;
}
