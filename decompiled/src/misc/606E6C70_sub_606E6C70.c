/* sub_606E6C70
 * address: 0x606E6C70   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_606E6C70(StateActor *a1)
{
  bool v2; // zf
  signed int result; // r0
  unsigned int v4; // r1
  int v5; // r0
  int v6; // r1

  if ( !FIELD_U32(a1, 0x0)._.eventId1
    || (v2 = (FIELD_U64(EventMgr__instance, 16)
            & sub_6072A6DC(EventMgr__instance, (unsigned __int8)FIELD_U32(a1, 0x0)._.eventId1, (unsigned __int8)FIELD_U32(a1, 0x0)._.eventId2)) == 0,
        result = 2,
        v2) )
  {
    (*(void (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0)._._.vtable + 644))(a1);
    v4 = ((unsigned int)FIELD_U32(a1, 0x0)._._.settings1 >> 4) & 3;
    v5 = 0;
    if ( v4 != 1 )
    {
      if ( v4 )
        v5 = StageActor__directionToPlayerX(a1, &FIELD_U32(a1, 0x0)._.position);
      else
        v5 = 1;
    }
    FIELD_U32(a1, 0x0)._.direction = v5;
    FIELD_U32(a1, 0x0)._.position.z = 432.0;
    a1[1]._._.aCollider.createNode.owner = (ActiveCollider *)LODWORD(FIELD_U32(a1, 0x0)._.position.x);
    a1[1]._._.aCollider.createNode.next = (ActiveColliderNode *)LODWORD(FIELD_U32(a1, 0x0)._.position.y);
    a1[1]._._.aCollider.createNode.prev = (ActiveColliderNode *)1138229248;
    FIELD_U32(a1, 0x0).field_1774 = 1045220557;
    FIELD_U32(a1, 0x0)._.field_26C = 0;
    FIELD_U32(a1, 0x0)._.field_270 = 0;
    a1[1]._._.scale.x = 0.0;
    v6 = (*(int (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0)._._.vtable + 640))(a1);
    result = 2;
    if ( v6 == 1 )
    {
      (*(void (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0)._._.vtable + 648))(a1);
      return 1;
    }
  }
  return result;
}
