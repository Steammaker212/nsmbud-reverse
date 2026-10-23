/* StageActor__directionToPlayerX
 * address: 0x60000BEC   size: 144   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall StageActor__directionToPlayerX(StateActor *this, Vec3 *position)
{
  float x; // r0
  float y; // r1
  signed int result; // r0
  float v6; // s0
  float v7; // s2
  Vec2 x_; // [sp+0h] [bp-18h] BYREF
  Vec2 a1; // [sp+8h] [bp-10h] BYREF

  x = FIELD_F32(position, 0x0);
  y = FIELD_F32(position, 0x4);
  x_.x = x;
  x_.y = y;
  if ( (unsigned int)distanceToPLayer(&a1, &x_) <= 3 )
    return a1.x < 0.0;
  v6 = FIELD_F32(this, 0x6C);
  result = 1;
  v7 = FIELD_F32(dword_60CC6484, 116);
  if ( v6 <= (float)(v7 + 96.0) )
  {
    result = 0;
    if ( v6 >= (float)(v7 + -96.0) )
      return FIELD_U32(this, 0x50);
  }
  return result;
}
