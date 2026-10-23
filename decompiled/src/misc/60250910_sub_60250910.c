/* sub_60250910
 * address: 0x60250910   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60250910(CollisionActor *a1)
{
  int v2; // r0
  int *v3; // r1
  int v4; // r2
  int v5; // r1
  int result; // r0

  v3 = &a1[1]._.aCollider.field_4C;
  v2 = a1[1]._.aCollider.field_4C;
  *v3 = v2 - 1;
  if ( v2 >= 2 )
    FIELD_U32(a1, 0x0).rotation.x += 0x4000000;
  CollisionActor__handleGravity(a1);
  CollisionActor__handleSpeed(a1);
  v4 = -322437120;
  v5 = -23068672;
  if ( !a1[1]._.aCollider.createNode.next )
  {
    v4 = 322437120;
    v5 = 23068672;
  }
  if ( FIELD_U8(a1, 0x17A6) )
    v5 = v4;
  result = v5 + FIELD_U32(a1, 0x0).rotation.z;
  FIELD_U32(a1, 0x0).rotation.z = result;
  return result;
}
