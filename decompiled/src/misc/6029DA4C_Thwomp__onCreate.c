/* Thwomp__onCreate
 * address: 0x6029DA4C   size: 848   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Actor : 0x60002F00
// 
// Overridden by: None
signed int __fastcall Thwomp__onCreate(StateActor *a1)
{
  float v2; // r0
  ActiveCollider *p_aCollider; // r5
  float v4; // s0
  ActiveColliderMgr *v5; // r6
  ActiveColliderMgr *v6; // r6
  ActiveColliderNode **p_next; // r6
  double v8; // d0
  unsigned int v9; // r3
  unsigned int v10; // r1
  int v11; // r2
  int v12; // s2
  int v13; // r0
  int owner; // r7
  bool v15; // zf
  State *v16; // r1

  a1[1]._._.aCollider.activeNode.owner = (ActiveCollider *)(Actor__getProfileId(&FIELD_U32(a1, 0x0)) != 636);
  sub_6029DDD8(a1);
  a1[1]._._.aCollider.activeNode.next = (ActiveColliderNode *)(FIELD_U32(a1, 0x14) & 0xF);
  FIELD_U32(a1, 0x26C) = 0;
  FIELD_U32(a1, 0x270) = 0;
  a1[1]._._.scale.x = 0.0;
  LOWORD(v2) = 0;
  p_aCollider = &FIELD_U32(a1, 0xBC);
  if ( a1[1]._._.aCollider.activeNode.owner )
  {
    HIWORD(v2) = -15446;
    FIELD_F32(a1, 0x74) = v2;
    FIELD_F32(a1, 0x70) = FIELD_F32(a1, 0x70) + -21.0;
    ActiveCollider__init(&FIELD_U32(a1, 0xBC), &FIELD_U32(a1, 0x0), (ActiveColliderInfo *)&unk_60BE2094, 0);
    ActiveCollider__init(
      (ActiveCollider *)&a1[1]._._.aCollider.trapezoidOffsetBottomLeft,
      &FIELD_U32(a1, 0x0),
      &stru_60AFE2C8,
      (int)&a1[1]._.collisionMgr[12]);
    CollisionMgr_init((CollisionMgr *)FIELD_U8(a1, 0x288), a1, &stru_60AFE2F4, &stru_60AFE300, 0);
    v4 = 36.0;
  }
  else
  {
    HIWORD(v2) = -15466;
    FIELD_F32(a1, 0x74) = v2;
    FIELD_F32(a1, 0x70) = FIELD_F32(a1, 0x70) + -10.0;
    ActiveCollider__init(&FIELD_U32(a1, 0xBC), &FIELD_U32(a1, 0x0), (ActiveColliderInfo *)&unk_60BE2068, 0);
    ActiveCollider__init(
      (ActiveCollider *)&a1[1]._._.aCollider.trapezoidOffsetBottomLeft,
      &FIELD_U32(a1, 0x0),
      &stru_60AFE284,
      (int)&a1[1]._.collisionMgr[12]);
    CollisionMgr_init((CollisionMgr *)FIELD_U8(a1, 0x288), a1, &stru_60AFE2B0, &stru_60AFE2BC, 0);
    v4 = 18.0;
    FIELD_F32(a1, 0x1F4) = 32.0;
    FIELD_F32(a1, 0x1F8) = 64.0;
    FIELD_F32(a1, 0x1FC) = 32.0;
    FIELD_U32(a1, 0x200) = 1115684864;
  }
  FIELD_F32(a1, 0x23C) = 0.0;
  FIELD_F32(a1, 0x240) = v4;
  FIELD_F32(a1, 0x244) = 0.0;
  v5 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, p_aCollider)
    && !ActiveColliderMgr_isInCreateList(v5, p_aCollider) )
  {
    ActiveColliderMgr_addToCreateList(v5, p_aCollider);
  }
  v6 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(
          ActiveColliderMgr_instance,
          (ActiveCollider *)&a1[1]._._.aCollider.trapezoidOffsetBottomLeft)
    && !ActiveColliderMgr_isInCreateList(v6, (ActiveCollider *)&a1[1]._._.aCollider.trapezoidOffsetBottomLeft) )
  {
    ActiveColliderMgr_addToCreateList(v6, (ActiveCollider *)&a1[1]._._.aCollider.trapezoidOffsetBottomLeft);
  }
  p_next = &a1[1]._._.aCollider.activeNode.next;
  v8 = ((double (__fastcall *)(char *))**(_DWORD **)&a1[1]._.collisionMgr[20])(&a1[1]._.collisionMgr[20]);
  v9 = 486542912;
  v10 = 0x8000;
  v11 = 1;
  *(double *)&a1[1]._.collisionMgr[24] = v8;
  *(_DWORD *)&a1[1]._.collisionMgr[32] = v12;
  v13 = 3;
  owner = (int)a1[1]._._.aCollider.activeNode.owner;
  if ( owner != 1 )
  {
    v15 = owner == 0;
    if ( !owner )
      v15 = *p_next == (ActiveColliderNode *)2;
    if ( !v15 )
    {
      if ( !FIELD_U8(dword_60CC6D8C, 17) )
        goto LABEL_17;
      v13 = 2;
      v10 = 0x80000000;
      v11 = 0;
      v9 = 0x80000000;
    }
  }
  *(_DWORD *)&FIELD_U8(a1, 0x288)[4 * v11 + 2552] |= v10;
  *(_DWORD *)&FIELD_U8(a1, 0x288)[8 * v13 + 2528] |= v9;
LABEL_17:
  FIELD_F32(a1, 0x84) = 0.0;
  FIELD_F32(a1, 0x88) = -8.0;
  FIELD_F32(a1, 0x8C) = 0.0;
  FIELD_F32(a1, 0x64) = -0.25;
  FIELD_U32(a1, 0x9C) = 0;
  FIELD_U32(a1, 0xA0) = 0;
  FIELD_U32(a1, 0xA4) = 0;
  a1[1]._._.aCollider.node4.owner = (ActiveCollider *)LODWORD(FIELD_F32(a1, 0x6C));
  a1[1]._._.aCollider.node4.next = (ActiveColliderNode *)LODWORD(FIELD_F32(a1, 0x70));
  a1[1]._._.aCollider.node4.prev = (ActiveColliderNode *)LODWORD(FIELD_F32(a1, 0x74));
  if ( *p_next == (ActiveColliderNode *)2 )
    v16 = (State *)&unk_60C900E8;
  else
    v16 = &stru_60C90088;
  (*(void (__fastcall **)(StateActor *, State *))(FIELD_U32(a1, 0x0) + 192))(a1, v16);
  Thwomp_updateModel((int)a1);
  return 1;
}
