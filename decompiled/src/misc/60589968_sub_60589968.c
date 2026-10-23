/* sub_60589968
 * address: 0x60589968   size: 872   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60589968(StageActor *a1)
{
  StateBase *CurrentState; // r0
  int v3; // r7
  ActiveCollider *owner; // r0
  bool v5; // zf
  char v6; // r12
  StateBase *v7; // r0
  int v8; // r8
  Actor *parent; // r6
  int v10; // r0
  int v11; // r0
  float x; // r0
  float y; // r1
  float z; // r2
  StateBase *v15; // r0
  int v16; // r5
  int v18; // [sp+0h] [bp-20h] BYREF
  float v19; // [sp+4h] [bp-1Ch] BYREF

  if ( (FIELD_U32(a1, 0x0).settings1 & 0x80) != 0 )
  {
    StateMgr__execute((StateMgr *)&a1[9].aCollider.field_64);
    a1[9].profileFlags = FIELD_U32(a1, 0x9C).z;
    ShapedCollider_execute((ColliderBase *)&a1[9].aCollider.info.field_14);
    return 1;
  }
  ((void (__fastcall *)(Vec3i *, Vec3 *))loc_6069B070)(&a1[11].rotation, &FIELD_U32(a1, 0x6C));
  StateMgr__execute((StateMgr *)&a1[9].aCollider.field_64);
  CurrentState = StateMgr__getCurrentState((StateMgr *)&a1[9].aCollider.field_64);
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 != (*(int (**)(void))(dword_60CAED48 + 8))() )
  {
    owner = a1[11].aCollider.createNode.owner;
    v5 = owner == 0;
    if ( owner )
      v5 = a1[11].aCollider.createNode.next == 0;
    if ( v5 )
    {
      if ( a1[11].aCollider.field_F0 )
      {
        v19 = 0.0;
        ((void (__fastcall *)(int *, float *, Vec3 *, _DWORD))checkLiquidCollisions)(
          &v18,
          &v19,
          &FIELD_U32(a1, 0x6C),
          (unsigned __int8)FIELD_U8(a1, 0x56));
        FIELD_U32(a1, 0x6C).y = a1[10].aCollider.trapezoidOffsetBottomLeft
                       + (float)(*(float *)&a1[11].aCollider.field_E8
                               + (float)(v19 - *(float *)&a1[11].aCollider.field_EC));
      }
      goto LABEL_30;
    }
    MovementHandler__execute((MovementHandler *)&a1[10].field_228);
    if ( LODWORD(a1[10].field_254.y) == 1 && a1[10].field_26C != 1 )
    {
      if ( a1[11].aCollider.field_E0 == 1 )
      {
        v7 = StateMgr__getCurrentState((StateMgr *)&a1[9].aCollider.field_64);
        v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7);
        if ( v8 == (*(int (**)(void))(dword_60CAF2F8 + 8))() )
        {
          if ( a1[11].direction )
          {
            a1[11].aCollider.activeNode.prev = (ActiveColliderNode *)31;
            (*(void (__fastcall **)(StageActor *, void *))(FIELD_U32(a1, 0x0).vtable + 192))(a1, &unk_60CAF318);
          }
        }
      }
      FIELD_U32(a1, 0x6C).x = *(float *)&a1[10].field_228;
      FIELD_U32(a1, 0x6C).y = *(float *)&a1[10].field_22C + a1[10].aCollider.trapezoidOffsetBottomLeft;
      if ( a1[11].aCollider.createNode.owner == (ActiveCollider *)1 && (FIELD_U32(a1, 0x0).settings1 & 0x2000000) != 0 )
      {
        v11 = 7120;
      }
      else
      {
        if ( a1[11].aCollider.field_D4 )
        {
          parent = FIELD_U32(a1, 0x0).parent;
          if ( ((unsigned int)&dword_60C7B364 & ~(1616419588 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
          {
            StageActor_RTTI = (int)&off_60BC0098;
            _cxa_guard_release(&dword_60C7B364);
          }
          if ( !parent || (*(int (__fastcall **)(Actor *, int *))FIELD_U32(parent, 0x0))(parent, &StageActor_RTTI) != 1 )
            goto LABEL_28;
          v10 = a1[11].aCollider.field_DC + parent[2].heap;
LABEL_27:
          FIELD_U32(a1, 0x9C).z = v10;
LABEL_28:
          if ( LOBYTE(a1[10].field_27C) )
          {
            x = FIELD_U32(a1, 0x6C).x;
            y = FIELD_U32(a1, 0x6C).y;
            z = FIELD_U32(a1, 0x6C).z;
            FIELD_U32(a1, 0x248).x = x;
            FIELD_U32(a1, 0x248).y = y;
            FIELD_U32(a1, 0x248).z = z;
            FIELD_U32(a1, 0x260).x = x;
            FIELD_U32(a1, 0x260).y = y;
            FIELD_U32(a1, 0x260).z = z;
            sub_60160948(&a1[9].aCollider.info.field_14);
          }
          goto LABEL_30;
        }
        v11 = 7072;
      }
      v10 = *(int *)((char *)&FIELD_U32(a1, 0x0).vtable + v11);
      goto LABEL_27;
    }
  }
LABEL_30:
  a1[9].profileFlags = FIELD_U32(a1, 0x9C).z;
  ShapedCollider_execute((ColliderBase *)&a1[9].aCollider.info.field_14);
  sub_605B2D70(a1);
  if ( !a1[11].aCollider.field_E0 )
  {
    v15 = StateMgr__getCurrentState((StateMgr *)&a1[9].aCollider.field_64);
    v16 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v15, 0x0) + 2))(v15);
    if ( v16 != (*(int (**)(void))(dword_60CAF338 + 8))() )
      StageActor__cullCheck(a1, 0);
  }
  return 1;
}
