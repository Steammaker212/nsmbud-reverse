/* ShellEnemy__ctor
 * address: 0x6039EF44   size: 844   group: misc
 * sym: ShellEnemy::ShellEnemy(ActorBuildInfo const*) as C2
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

CarryableEnemy *__fastcall ShellEnemy__ctor(CarryableEnemy *a1, ActorBuildInfo *a2, int a3, char a4, char a5)
{
  int v8; // r0
  int v9; // r1
  int v10; // s2

  CarryableEnemy__ctor(a1, a2);
  FIELD_U32(a1, 0x0) = (int)ShellEnemy_vtable;
  *(int *)((char *)&a1[1]._._._._._.vtable + 2) = a3;
  *(int *)((char *)&a1[1]._._._._._.heap + 2) = a3;
  HIWORD(a1[1]._._._._._.field_20.previous) = 0;
  *(_DWORD *)&a1[1]._._._._._.initStateFlag = 0;
  *(int *)((char *)&a1[1]._._._._._.settigns2 + 2) = 0;
  *(int *)((char *)&a1[1]._._._._._.settings1 + 2) = 0;
  *(_DWORD *)&a1[1]._._._._._.field_12 = 0;
  *(Profile **)((char *)&a1[1]._._._._._.profile + 2) = 0;
  *(int *)((char *)&a1[1]._._._._._.id + 2) = 0;
  LOBYTE(a1[1]._._._._._.field_20.next) = a4;
  *(sead_ListNode **)((char *)&a1[1]._._._._._.field_20.next + 2) = 0;
  BYTE2(a1[1]._._._._._.childCount) = a5;
  HIBYTE(a1[1]._._._._._.childCount) = 0;
  LOBYTE(a1[1]._._._._._.field_3C) = 0;
  HIWORD(a1[1]._._._._._.parent) = 0;
  *(int *)((char *)&a1[1]._._._._._.field_34 + 2) = 0;
  *(int *)((char *)&a1[1]._._._._._.field_30 + 2) = 0;
  *(int *)((char *)&a1[1]._._._._._.field_2C + 2) = 0;
  *(int *)((char *)&a1[1]._._._._.field_58 + 2) = 0;
  *(_DWORD *)&a1[1]._._._._.field_56 = 0;
  *(int *)((char *)&a1[1]._._._._.direction + 2) = 0;
  *(int *)((char *)&a1[1]._._._._._.field_4C + 2) = 0;
  *(int *)((char *)&a1[1]._._._._._.field_48 + 2) = 0;
  *(int *)((char *)&a1[1]._._._._._.field_44 + 2) = 0;
  *(int *)((char *)&a1[1]._._._._._.field_40 + 2) = 0;
  *(int *)((char *)&a1[1]._._._._._.field_3C + 2) = 0;
  sub_602A8564((int *)((char *)&a1[1]._._._._.field_5C + 2), FIELD_U32(a1, 0x8));
  *(int *)((char *)&a1[1]._._._._.field_5C + 2) = (int)off_60BF43A0;
  *(_DWORD *)((char *)&a1[1]._._._._.position.x + 2) = 1;
  *(_DWORD *)((char *)&a1[1]._._._._.speed.y + 2) = 2;
  sub_602A40A0((float *)((char *)&a1[1]._._._._.speed.z + 2), FIELD_U32(a1, 0x8));
  *(int *)((char *)&a1[1]._._._._.rotation.z + 2) = (int)off_60BF471C;
  *(int *)((char *)&a1[1]._._._._.field_A8 + 2) = 0;
  *(int *)((char *)&a1[1]._._._._.field_AC + 2) = (int)&ActorScaler_vtable;
  *(int *)((char *)&a1[1]._._._._.field_B0 + 2) = 1065353216;
  *(int *)((char *)&a1[1]._._._._.field_B4 + 2) = 1065353216;
  *(int *)((char *)&a1[1]._._._._.field_B8 + 2) = 1065353216;
  *(int *)((char *)&a1[1]._._._._.aCollider._.vtable + 2) = 1065353216;
  *(int *)((char *)&a1[1]._._._._.aCollider._.containingHeap + 2) = 0;
  *(int *)((char *)&a1[1]._._._._.aCollider._.field_8 + 2) = 0;
  *(int *)((char *)&a1[1]._._._._.aCollider._.field_C + 2) = (int)a1;
  BYTE2(a1[1]._._._._.aCollider.activeNode.owner) = 0;
  HIBYTE(a1[1]._._._._.aCollider.activeNode.owner) = 1;
  *(ActiveColliderNode **)((char *)&a1[1]._._._._.aCollider.activeNode.next + 2) = 0;
  BYTE2(a1[1]._._._._.aCollider.activeNode.prev) = 0;
  BYTE2(a1[1]._._._._.aCollider.node3.next) = 0;
  *(ActiveCollider **)((char *)&a1[1]._._._._.aCollider.node3.owner + 2) = 0;
  *(ActiveColliderNode **)((char *)&a1[1]._._._._.aCollider.createNode.prev + 2) = 0;
  *(ActiveColliderNode **)((char *)&a1[1]._._._._.aCollider.createNode.next + 2) = 0;
  *(ActiveCollider **)((char *)&a1[1]._._._._.aCollider.createNode.owner + 2) = 0;
  *(int *)((char *)&a1[1]._._._._.aCollider.field_44 + 2) = 0;
  *(ActiveColliderNode **)((char *)&a1[1]._._._._.aCollider.node3.prev + 2) = 0;
  *(StageActor **)((char *)&a1[1]._._._._.aCollider.owner + 2) = 0;
  *(ActiveColliderNode **)((char *)&a1[1]._._._._.aCollider.node4.prev + 2) = 0;
  *(ActiveColliderNode **)((char *)&a1[1]._._._._.aCollider.node4.next + 2) = 0;
  *(ActiveCollider **)((char *)&a1[1]._._._._.aCollider.node4.owner + 2) = 0;
  EffectWrapper_ctor((EffectWrapper *)((char *)&a1[1]._._._._.aCollider.field_48 + 2));
  *(int *)((char *)&a1[1]._._._._.aCollider.field_48 + 2) = (int)off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)((char *)&a1[1]._._._._.aCollider.field_B0 + 2));
  *(int *)((char *)&a1[1]._._._._.aCollider.field_B0 + 2) = (int)off_60BC1450;
  FIELD_U32(a1, 0x187C) = (int)off_60BE2BE4;
  FIELD_U32(a1, 0x1804) = 3;
  v8 = BYTE2(a1[1]._._._._._.childCount);
  *(_DWORD *)((char *)&a1[1]._._._._.position.x + 2) = v8 ^ 1;
  FIELD_U32(a1, 0x26C) = (int)&a1[1]._._._._.field_5C + 2;
  *(int *)((char *)&a1[1]._._._._.rotation.x + 2) = v8 ^ 1;
  FIELD_U32(a1, 0x270) = (int)&a1[1]._._._._.speed.z + 2;
  v9 = 2;
  if ( !v8 )
    v9 = 1;
  FIELD_U32(a1, 0x1864) = v9;
  FIELD_U32(a1, 0x280) = (int)&FIELD_U32(a1, 0x1858);
  *(double *)((char *)&a1[1]._._._._.field_B0 + 2) = ((double (__fastcall *)(char *))**(_DWORD **)((char *)&a1[1]._._._._.field_AC
                                                                                                 + 2))((char *)&a1[1]._._._._.field_AC + 2);
  *(int *)((char *)&a1[1]._._._._.field_B8 + 2) = v10;
  BYTE2(a1[1]._._._._.aCollider.node4.owner) = 0;
  *(ActiveColliderNode **)((char *)&a1[1]._._._._.aCollider.node4.next + 2) = 0;
  *(ActiveColliderNode **)((char *)&a1[1]._._._._.aCollider.node4.prev + 2) = 0;
  *(StageActor **)((char *)&a1[1]._._._._.aCollider.owner + 2) = 0;
  return a1;
}
