/* sub_603D7E60
 * address: 0x603D7E60   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603D7E60(CollisionActor *a1)
{
  int y; // r0
  int result; // r0

  CollisionActor__handleGravity(a1);
  FIELD_U32(a1, 0x0).position.x = FIELD_U32(a1, 0x0).position.x + FIELD_U32(a1, 0x0).speed.x;
  FIELD_U32(a1, 0x0).position.y = FIELD_U32(a1, 0x0).position.y + FIELD_U32(a1, 0x0).speed.y;
  FIELD_U32(a1, 0x0).position.z = FIELD_U32(a1, 0x0).position.z + FIELD_U32(a1, 0x0).speed.z;
  y = FIELD_U32(a1, 0x0).rotation.y;
  if ( FIELD_U32(a1, 0x0).direction )
  {
    result = y - 0x4000000;
    if ( result <= -1073741824 )
      result = -1073741824;
    FIELD_U32(a1, 0x0).rotation.y = result;
  }
  else
  {
    result = y + 0x4000000;
    if ( result >= 0x40000000 )
      result = 0x40000000;
    FIELD_U32(a1, 0x0).rotation.y = result;
  }
  return result;
}
