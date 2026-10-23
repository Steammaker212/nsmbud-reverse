/* TerrainActor_vfD4
 * address: 0x605A548C   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall TerrainActor_vfD4(int result)
{
  FIELD_U16(result, 6890) = 10 * (FIELD_U8(result, 23) & 0xF);
  return result;
}
