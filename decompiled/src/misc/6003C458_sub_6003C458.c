/* sub_6003C458
 * address: 0x6003C458   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6003C458(int result)
{
  int v1; // r2

  v1 = 2;
  if ( FIELD_U8(result, 11676) )
    v1 = 1;
  FIELD_U32(result, 11492) = v1;
  FIELD_U32(result, 132) = 0;
  FIELD_U32(result, 104) = 1036831949;
  return result;
}
