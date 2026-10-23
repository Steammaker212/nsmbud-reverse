/* sub_6036B414
 * address: 0x6036B414   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6036B414(CollisionActor *a1)
{
  j_ModelWrapper_updateAnims(a1[1]._.aCollider.node3.prev);
  return Enemy__executeState_DieFall(a1);
}
