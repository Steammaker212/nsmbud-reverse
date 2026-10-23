/* LavaGeyser_vf162
 * address: 0x6070C72C   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LavaGeyser_vf162(int result)
{
  FIELD_U32(result, 6304) = 1109393408;
  FIELD_F32(result, 6396) = flt_60B09C80[(FIELD_U32(result, 20) >> 12) & 7];
  FIELD_U32(result, 6336) = 0;
  FIELD_U32(result, 6340) = 1065353216;
  FIELD_U8(result, 533) = 0;
  return result;
}
