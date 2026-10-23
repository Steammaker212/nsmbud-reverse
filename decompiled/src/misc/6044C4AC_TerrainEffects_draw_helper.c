/* TerrainEffects_draw_helper
 * address: 0x6044C4AC   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall TerrainEffects_draw_helper(int result)
{
  unsigned int v1; // r3

  v1 = FIELD_U32(result, 115368);
  if ( v1 <= 4 )
    __asm { ADD             PC, R3, LR }
  return result;
}
