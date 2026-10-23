/* Kanibo__executeState_DieFall
 * address: 0x60310158   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A7FF8
// 
// Overridden by: None
int __fastcall Kanibo__executeState_DieFall(CollisionActor *a1)
{
  Enemy__executeState_DieFall(a1);
  j_ModelWrapper_updateAnims(a1[1]._.aCollider.node3.prev);
  return sub_604218E0(&a1[1]._.aCollider.node3.prev->owner);
}
