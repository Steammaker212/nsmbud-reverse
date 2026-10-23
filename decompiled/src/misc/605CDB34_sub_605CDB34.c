/* sub_605CDB34
 * address: 0x605CDB34   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605CDB34(int a1)
{
  int result; // r0

  result = FIELD_U8(a1, 95);
  if ( result )
  {
    result = FIELD_U8(a1, 98);
    if ( !FIELD_U8(a1, 98) )
    {
      SE_OBJ_COIN_POP_UP_ref_2(a1);
      FIELD_U8(a1, 98) = 1;
      return 1;
    }
  }
  return result;
}
