/* sub_600369F0
 * address: 0x600369F0   size: 480   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_600369F0(StateActor *a1)
{
  char *v2; // r5
  int v3; // r0
  ActiveColliderMgr *v4; // r6
  int v5; // r1
  int v6; // r0

  BowserJrBase__vf3FC();
  v2 = &a1[1]._.collisionMgr[1040];
  if ( Actor__getProfileId(&FIELD_U32(a1, 0x0)._._) == 825 )
    *v2 = 1;
  FIELD_U32(a1, 0x0)._.direction = StageActor__directionToPlayerX(a1, &FIELD_U32(a1, 0x0)._.position);
  a1[1]._.collisionMgr[1039] = 1;
  if ( *v2 )
  {
    FIELD_U32(a1, 0x0)._.scale.x = 1.2;
    FIELD_U32(a1, 0x0)._.scale.y = 1.2;
    FIELD_U32(a1, 0x0)._.scale.z = 1.2;
    sub_60036DD0(a1);
    (*(void (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0)._._.vtable + 1068))(a1);
    (*(void (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0)._._.vtable + 1008))(a1);
    (*(void (__fastcall **)(StateActor *, void *))(FIELD_U32(a1, 0x0)._._.vtable + 192))(a1, &unk_60C7FFBC);
  }
  else
  {
    FIELD_U32(a1, 0x0)._.scale.x = 1.25;
    FIELD_U32(a1, 0x0)._.scale.y = 1.25;
    FIELD_U32(a1, 0x0)._.scale.z = 1.25;
    v3 = dword_60CC6484;
    *(_DWORD *)&a1[1]._.collisionMgr[420] = FIELD_U32(dword_60CC6484, 116);
    *(_DWORD *)&a1[1]._.collisionMgr[424] = FIELD_U32(v3, 128);
    ActiveCollider__init(&FIELD_U32(a1, 0x0)._.aCollider, &FIELD_U32(a1, 0x0)._, (ActiveColliderInfo *)&unk_60BC2C6C, 0);
    v4 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, &FIELD_U32(a1, 0x0)._.aCollider)
      && !ActiveColliderMgr_isInCreateList(v4, &FIELD_U32(a1, 0x0)._.aCollider) )
    {
      ActiveColliderMgr_addToCreateList(v4, &FIELD_U32(a1, 0x0)._.aCollider);
    }
    CollisionMgr_init((CollisionMgr *)FIELD_U32(a1, 0x0).collisionMgr, a1, 0, &stru_60AF5234, &stru_60AF5240);
    v5 = *(_DWORD *)&FIELD_U32(a1, 0x0).collisionMgr[2536];
    v6 = *(_DWORD *)&FIELD_U32(a1, 0x0).collisionMgr[2528] | 0x10000800;
    *(_DWORD *)&FIELD_U32(a1, 0x0).collisionMgr[2544] |= 0x10000800u;
    *(_DWORD *)&FIELD_U32(a1, 0x0).collisionMgr[2528] = v6;
    *(_DWORD *)&FIELD_U32(a1, 0x0).collisionMgr[2536] = v5 | 0x10000800;
    sub_60036BF0(a1);
    (*(void (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0)._._.vtable + 1068))(a1);
    (*(void (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0)._._.vtable + 1008))(a1);
    (*(void (__fastcall **)(StateActor *, int *))(FIELD_U32(a1, 0x0)._._.vtable + 192))(a1, &dword_60C7FDFC);
  }
  return 1;
}
