/* sub_60598874
 * address: 0x60598874   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60598874(int a1, int a2)
{
  FIELD_U8(a1, 13888) = 0;
  if ( a2 == 2 )
    FIELD_U32(a1, 13480) = 2139095039;
  return sub_605D8110();
}
