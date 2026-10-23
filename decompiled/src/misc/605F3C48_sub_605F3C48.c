/* sub_605F3C48
 * address: 0x605F3C48   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_605F3C48(CollisionActor *a1)
{
  FIELD_U32(a1, 0x0).rotation.y += dword_60CB21DC;
  CollisionActor__handleGravity(a1);
  CollisionActor__handleSpeed(a1);
  if ( FIELD_U32(a1, 0x0).speed.y < -3.0 )
    FIELD_U32(a1, 0x0)._.isDeleted = 1;
}
