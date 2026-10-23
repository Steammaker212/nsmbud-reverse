/* sub_600657C8
 * address: 0x600657C8   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600657C8(int a1)
{
  int result; // r0

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6100));
  result = FIELD_U8(a1, 6132);
  if ( FIELD_U8(a1, 6132) )
    return j_ModelWrapper_updateAnims(FIELD_U32(a1, 6104));
  return result;
}
