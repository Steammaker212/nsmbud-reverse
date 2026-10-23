/* StageActor__distanceToPlayer
 * address: 0x60000BAC   size: 64   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall StageActor__distanceToPlayer(StateActor *this, Vec2 *out)
{
  float yPos; // s0
  float _240; // s6
  Vec2 pos_offset; // [sp+0h] [bp-10h] BYREF

  yPos = FIELD_U32(this, 0x0)._.position.y;
  _240 = FIELD_U32(this, 0x0)._.effectOffset.y;
  pos_offset.x = FIELD_U32(this, 0x0)._.position.x + FIELD_U32(this, 0x0)._.effectOffset.x;
  pos_offset.y = yPos + _240;
  return distanceToPLayer(out, &pos_offset);
}
