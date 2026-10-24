/* GiantWiggler_ctor
 * address: 0x60255314   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Enemy *__fastcall GiantWiggler_ctor(Enemy *a1, ActorBuildInfo *a2)
{
  int v3; // r2
  ActiveColliderInfo *p_info; // r0
  char *v5; // r3

  Enemy__ctor(a1, a2);
  FIELD_U32(a1, 0x0) = (int)GiantWiggler_vtable;
  sub_60257AE8(&a1[1]._._._._.field_10, FIELD_U32(a1, 0x9C), FIELD_U32(a1, 0xA0), FIELD_U32(a1, 0xA4), a1, 0);
  v3 = 0;
  *(_DWORD *)&a1[1]._._._._.field_10 = off_60BDAAEC;
  a1[1]._._._.aCollider.activeNode.owner = 0;
  a1[1]._._._.aCollider.activeNode.next = 0;
  a1[1]._._._.aCollider.activeNode.prev = (ActiveColliderNode *)0x3F800000;
  a1[1]._._._.aCollider.createNode.owner = (ActiveCollider *)0x3F800000;
  a1[1]._._._.aCollider.createNode.next = (ActiveColliderNode *)0x3F800000;
  a1[1]._._._.aCollider.createNode.prev = (ActiveColliderNode *)0x3F800000;
  FIELD_U32(a1 + (1) * 6300, 0xE4) = (ActiveCollider *)0x3F800000;
  a1[1]._._._.aCollider.node3.next = (ActiveColliderNode *)0x3F800000;
  a1[1]._._._.aCollider.node3.prev = (ActiveColliderNode *)0x3F800000;
  a1[1]._._._.aCollider.node4.owner = (ActiveCollider *)0x3F800000;
  a1[1]._._._.aCollider.node4.next = (ActiveColliderNode *)0x3F800000;
  a1[1]._._._.aCollider.node4.prev = 0;
  a1[1]._._._.aCollider.field_44 = 0;
  a1[1]._._._.aCollider.field_48 = 0;
  p_info = &a1[1]._._._.aCollider.info;
  do
  {
    v5 = (char *)p_info + v3;
    *((_DWORD *)v5 - 8) = 0;
    *((_DWORD *)v5 - 7) = 0;
    *((_DWORD *)v5 - 6) = 0;
    *(int *)((char *)&FIELD_U32(a1 + (1) * 6300, 0x124) + v3) = 0;
    *(float *)((char *)&FIELD_F32(p_info, 0x0) + v3) = 0.0;
    v3 += 64;
    *((_DWORD *)v5 + 5) = 0;
    *((_DWORD *)v5 + 1) = 0;
    *((_DWORD *)v5 + 2) = 0;
  }
  while ( v3 != 3840 );
  ActiveCollider_ctor((ActiveCollider *)&a1[1]._._.collisionMgr[3456]);
  ActiveCollider_ctor((ActiveCollider *)&a1[1]._._.collisionMgr[3760]);
  ActiveCollider_ctor((ActiveCollider *)&a1[1]._._.collisionMgr[4064]);
  ActiveCollider_ctor((ActiveCollider *)&a1[1]._._.collisionMgr[4368]);
  ActiveCollider_ctor((ActiveCollider *)&a1[1]._._.collisionMgr[4672]);
  ActiveCollider_ctor((ActiveCollider *)&a1[1]._._.collisionMgr[4976]);
  ActiveCollider_ctor((ActiveCollider *)&a1[1]._._.collisionMgr[5280]);
  ActiveCollider_ctor((ActiveCollider *)&a1[1].field_1858);
  ActiveCollider_ctor((ActiveCollider *)&a1[2]._._._.aCollider.node3.prev);
  ActiveCollider_ctor((ActiveCollider *)&a1[2]._._._.eventId2);
  *(_DWORD *)&a1[2]._._.collisionMgr[196] = off_60BDAB54;
  return a1;
}
