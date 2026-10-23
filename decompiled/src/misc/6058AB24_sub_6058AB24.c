/* sub_6058AB24
 * address: 0x6058AB24   size: 560   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6058AB24(StageActor *a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r6
  ActiveCollider *owner; // r0
  bool v8; // zf
  StateBase *v9; // r0
  int v10; // r7
  int v11; // r0
  StateBase *v12; // r0
  int v13; // r5

  if ( (FIELD_U32(a1, 0x0).settigns2 & 1) != 0 )
  {
    v2 = (StateMgr *)&a1[9].aCollider.field_64;
    CurrentState = StateMgr__getCurrentState((StateMgr *)&a1[9].aCollider.field_64);
    v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v4 != (*(int (**)(void))(dword_60CAF370 + 8))() )
      sub_605D006C(a1);
  }
  else
  {
    sub_605D006C(a1);
    v2 = (StateMgr *)&a1[9].aCollider.field_64;
  }
  StateMgr__execute(v2);
  v5 = StateMgr__getCurrentState(v2);
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
  if ( v6 != (*(int (**)(void))(dword_60CAED48 + 8))() )
  {
    owner = a1[11].aCollider.createNode.owner;
    v8 = owner == 0;
    if ( owner )
      v8 = a1[11].aCollider.createNode.next == 0;
    if ( !v8 )
    {
      MovementHandler__execute((MovementHandler *)&a1[10].field_228);
      if ( LODWORD(a1[10].field_254.y) == 1 && a1[10].field_26C != 1 )
      {
        if ( (FIELD_U32(a1, 0x0).settigns2 & 1) != 0 )
        {
          v9 = StateMgr__getCurrentState(v2);
          v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v9, 0x0) + 2))(v9);
          if ( v10 == (*(int (**)(void))(dword_60CAF370 + 8))() )
          {
            if ( a1[11].direction )
            {
              a1[11].aCollider._.field_8 = 1124073472;
              a1[11].aCollider._.field_C = 1132462080;
              sub_605D0024(a1);
              (*(void (__fastcall **)(StageActor *, int *))(FIELD_U32(a1, 0x0).vtable + 192))(a1, &dword_60CB10FC);
            }
          }
        }
        FIELD_U32(a1, 0x6C).x = *(float *)&a1[10].field_228;
        FIELD_U32(a1, 0x6C).y = *(float *)&a1[10].field_22C + a1[10].aCollider.trapezoidOffsetBottomLeft;
        if ( (FIELD_U32(a1, 0x0).settings1 & 0x2000000) != 0 )
          v11 = 0;
        else
          v11 = a1[10].field_278;
        FIELD_U32(a1, 0x9C).z = v11;
      }
    }
  }
  a1[9].profileFlags = FIELD_U32(a1, 0x9C).z;
  ShapedCollider_execute((ColliderBase *)&a1[9].aCollider.info.field_14);
  sub_605B2D70(a1);
  v12 = StateMgr__getCurrentState(v2);
  v13 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v12, 0x0) + 2))(v12);
  if ( v13 == (*(int (**)(void))(dword_60CAED48 + 8))() )
    StageActor__cullCheck(a1, 0);
  return 1;
}
