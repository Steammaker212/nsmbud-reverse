/* sub_600F5E44
 * address: 0x600F5E44   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600F5E44(CollisionActor *a1)
{
  CollisionActor__handleGravity(a1);
  CollisionActor__handleSpeed(a1);
  return CollisionMgr_process(FIELD_U8(a1, 0x288));
}
