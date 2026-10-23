/* sub_601353B0
 * address: 0x601353B0   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601353B0(CollisionActor *a1)
{
  float v2; // s0

  StageActor__accelerateX(&FIELD_U32(a1, 0x0));
  CollisionActor__handleGravity(a1);
  v2 = CollisionActor__handleSpeed(a1);
  (*(void (__fastcall **)(CollisionActor *, float))(FIELD_U32(a1, 0x0)._.vtable + 336))(a1, v2);
  (*(void (__fastcall **)(CollisionActor *))(FIELD_U32(a1, 0x0)._.vtable + 340))(a1);
  return (*(int (__fastcall **)(CollisionActor *))(FIELD_U32(a1, 0x0)._.vtable + 196))(a1);
}
