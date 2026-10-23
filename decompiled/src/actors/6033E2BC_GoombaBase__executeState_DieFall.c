/* GoombaBase__executeState_DieFall
 * address: 0x6033E2BC   size: 24   group: actors
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
int __fastcall GoombaBase__executeState_DieFall(CollisionActor *a1)
{
  Enemy__executeState_DieFall(a1);
  return sub_6033C4A8((int)a1);
}
