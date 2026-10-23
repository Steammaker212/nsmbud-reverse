/* sub_6013C874
 * address: 0x6013C874   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6013C874(int result, float a2)
{
  FIELD_F32(result, 6424) = a2;
  FIELD_U8(result, 6421) = 0;
  FIELD_U8(result, 6422) = 1;
  return result;
}
