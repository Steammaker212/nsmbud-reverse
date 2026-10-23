/* sub_6031BA60
 * address: 0x6031BA60   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6031BA60(CollisionActor *a1)
{
  CollisionMgr_vf18(&a1[1].collisionMgr[416]);
  return Enemy__beforeExecute(a1);
}
