/* sub_6025C02C
 * address: 0x6025C02C   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6025C02C(int result)
{
  FIELD_U32(result, 144) = 1065353216;
  FIELD_U32(result, 148) = 1065353216;
  FIELD_U32(result, 152) = 1065353216;
  FIELD_U32(result, 116) = 1153138688;
  if ( (FIELD_U8(result, 333) & 8) == 0 )
    return sub_6015907C((ActiveCollider *)(result + 188), 2048);
  return result;
}
