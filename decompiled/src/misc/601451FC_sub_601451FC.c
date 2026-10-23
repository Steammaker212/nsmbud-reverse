/* sub_601451FC
 * address: 0x601451FC   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_601451FC(CollisionActor *a1)
{
  CollisionActor__handleGravity(a1);
  CollisionActor__handleSpeed(a1);
  JUMPOUT(0x60000CD0);
}
