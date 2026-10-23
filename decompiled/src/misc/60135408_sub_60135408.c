/* sub_60135408
 * address: 0x60135408   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60135408(CollisionActor *a1)
{
  float v2; // s0

  CollisionActor__handleGravity(a1);
  v2 = CollisionActor__handleSpeed(a1);
  return (*(int (__fastcall **)(CollisionActor *, float))(FIELD_U32(a1, 0x0)._.vtable + 196))(a1, v2);
}
