/* GoombaBase__vf2C8
 * address: 0x6033DCF0   size: 480   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x6033B3DC : Goomba
int __fastcall GoombaBase__vf2C8(CollisionActor *a1)
{
  int direction; // r0
  float v3; // s0
  int v4; // r0
  float y; // s0
  _BYTE *v7; // r1
  int speed; // [sp+4h] [bp-Ch] BYREF

  StageActor__accelerateX(&FIELD_U32(a1, 0x0));
  CollisionActor__handleGravity(a1);
  CollisionActor__handleSpeed(a1);
  direction = FIELD_U32(a1, 0x50);
  speed = 0x2000000;
  moveValueTo(&FIELD_U32(a1, 0xA0), (int *)&Enemy_CommonRotations[direction], &speed);
  CollisionMgr_process(FIELD_U8(a1, 0x288), v3);
  v4 = *(_DWORD *)&FIELD_U8(a1, 0x288)[2224];
  if ( (v4 & 0x10400) == 0x400 )
    FIELD_F32(a1, 0x7C) = -FIELD_F32(a1, 0x7C);
  if ( (v4 & 0x440000) != 0 && (v4 & 0x10000000) == 0 || (v4 & 0x880000) != 0 && (v4 & 0x20000000) == 0 )
    FIELD_F32(a1, 0x78) = 0.0;
  y = FIELD_F32(a1, 0x7C);
  if ( y <= FIELD_F32(a1, 0x88) && BYTE1(a1[1]._.field_27C) )
    return (*(int (__fastcall **)(CollisionActor *))(FIELD_U32(a1, 0x0) + 0x2F8))(a1);
  v7 = (char *)&a1[1]._.field_280 + 3;
  switch ( HIBYTE(a1[1]._.field_280) )
  {
    case 1:
      if ( y < 0.0 && (v4 & 1) != 0 )
      {
        FIELD_F32(a1, 0x7C) = y * -0.75;
        *v7 = 2;
        BYTE2(a1[1]._.field_27C) = 1;
      }
      break;
    case 2:
      if ( y < 0.0 && (v4 & 1) != 0 )
      {
        FIELD_F32(a1, 0x7C) = y * -0.75;
        *v7 = 3;
      }
      break;
    case 3:
      if ( (v4 & 1) != 0 )
      {
        LOWORD(a1[1]._.aCollider.activeNode.prev) = 10;
        FIELD_F32(a1, 0x7C) = 0.0;
        FIELD_F32(a1, 0x84) = 0.0;
        FIELD_F32(a1, 0x68) = fabsf(FIELD_F32(a1, 0x78)) / 10.0;
        *v7 = 4;
      }
      break;
    case 4:
      if ( (v4 & 1) != 0 )
        FIELD_F32(a1, 0x7C) = 0.0;
      if ( !LOWORD(a1[1]._.aCollider.activeNode.prev) )
        (*(void (__fastcall **)(CollisionActor *))(FIELD_U32(a1, 0x0) + 760))(a1);
      break;
    default:
      return (*(int (__fastcall **)(CollisionActor *))(FIELD_U32(a1, 0x0) + 0x2F4))(a1);
  }
  return (*(int (__fastcall **)(CollisionActor *))(FIELD_U32(a1, 0x0) + 0x2F4))(a1);
}
