/* sub_60367A24
 * address: 0x60367A24   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60367A24(CollisionActor *a1)
{
  float v2; // s0
  int result; // r0

  j_ModelWrapper_updateAnims(a1[1]._.aCollider.node3.prev);
  v2 = CollisionActor__handleSpeed(a1);
  result = (int)&a1[1]._.aCollider.owner[-1].field_280 + 3;
  a1[1]._.aCollider.owner = (StageActor *)result;
  if ( !result )
    return (*(int (__fastcall **)(CollisionActor *, int *, float))(FIELD_U32(a1, 0x0)._.vtable + 192))(a1, &dword_60C95D38, v2);
  return result;
}
