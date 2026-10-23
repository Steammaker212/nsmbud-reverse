/* sub_6004D634
 * address: 0x6004D634   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6004D634(StateActor *a1)
{
  int direction; // r6
  int v3; // r5
  int v4; // r6
  int result; // r0

  j_ModelWrapper_updateAnims(*(_DWORD *)&a1[1]._.collisionMgr[456]);
  (*(void (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0)._._.vtable + 1276))(a1);
  sub_6004E178(a1);
  StageActor__accelerateX(&FIELD_U32(a1, 0x0)._);
  CollisionActor__handleGravity(&FIELD_U32(a1, 0x0));
  CollisionActor__handleSpeed(&FIELD_U32(a1, 0x0));
  direction = FIELD_U32(a1, 0x0)._.direction;
  v3 = 1;
  if ( direction != StageActor__directionToPlayerX(a1, &FIELD_U32(a1, 0x0)._.position) )
  {
    v3 = 0;
    if ( sub_600525EC(a1) == 1 )
    {
      v3 = 1;
      FIELD_U32(a1, 0x0)._.direction ^= 1u;
    }
  }
  v4 = *(_DWORD *)&FIELD_U32(a1, 0x0).collisionMgr[2224];
  CollisionMgr_process(FIELD_U32(a1, 0x0).collisionMgr);
  result = *(_DWORD *)&FIELD_U32(a1, 0x0).collisionMgr[2224];
  if ( (result & 0x440000) != 0 && (result & 0x10000000) == 0 || (result & 0x880000) != 0 && (result & 0x20000000) == 0 )
    FIELD_U32(a1, 0x0)._.speed.x = 0.0;
  if ( (result & 1) != 0 )
  {
    FIELD_U32(a1, 0x0)._.speed.y = 0.0;
    if ( (v4 & 1) != 0 )
    {
      result = (*(int (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0)._._.vtable + 1136))(a1);
      if ( v3 != 1 )
        return result;
    }
    else
    {
      result = (*(int (__fastcall **)(StateActor *, float))(FIELD_U32(a1, 0x0)._._.vtable + 1120))(a1, 0.0);
      if ( v3 != 1 )
        return result;
    }
    return (*(int (__fastcall **)(StateActor *, int *))(FIELD_U32(a1, 0x0)._._.vtable + 192))(a1, &dword_60C80558);
  }
  return result;
}
