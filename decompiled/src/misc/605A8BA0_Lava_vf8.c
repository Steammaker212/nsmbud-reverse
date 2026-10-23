/* Lava_vf8
 * address: 0x605A8BA0   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall Lava_vf8(int a1)
{
  ModelWrapper **v2; // r5

  v2 = (ModelWrapper **)(a1 + 72332);
  if ( FIELD_U32(a1, 72332) )
  {
    sub_605A8604(a1);
    ModelWrapper_updateAnims(*v2);
  }
  return TerrainActor_onExecute(a1);
}
