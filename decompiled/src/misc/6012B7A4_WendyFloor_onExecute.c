/* WendyFloor_onExecute
 * address: 0x6012B7A4   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall WendyFloor_onExecute(int a1)
{
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 644));
  WendyFloor_updateModel((StateActor *)a1);
  ShapedCollider_execute(a1 + 648);
  return 1;
}
