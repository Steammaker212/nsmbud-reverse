/* StageActor__directionToPlayerY
 * address: 0x60000C88   size: 72   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall StageActor__directionToPlayerY(StageActor *a1, Vec2 *position)
{
  unsigned int v2; // r1
  signed int result; // r0
  Vec2 v4; // [sp+0h] [bp-18h] BYREF
  Vec2 distanceToPlayer; // [sp+8h] [bp-10h] BYREF

  v4 = *position;
  v2 = distanceToPLayer(&distanceToPlayer, &v4);
  result = 2;
  if ( v2 <= 3 )
  {
    result = 2;
    if ( distanceToPlayer.y < 0.0 )
      return 3;
  }
  return result;
}
