/* sub_605D0678
 * address: 0x605D0678   size: 964   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605D0678(int a1)
{
  int result; // r0
  _BYTE *v3; // r6
  int v4; // r7
  StateBase *CurrentState; // r0
  int v6; // r5
  int v7; // r7
  StateBase *v8; // r0
  int v9; // r5

  result = FIELD_U8(a1, 7320);
  if ( !result )
  {
    result = sub_60729CF0(EventMgr__instance, 0);
    v3 = (_BYTE *)(a1 + 7292);
    if ( FIELD_U8(a1, 7292) )
    {
      if ( result )
        return result;
      v4 = FIELD_U32(a1, 7288);
      CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v4 == 1 )
      {
        result = (*(int (**)(void))(dword_60CB10FC + 8))();
        if ( v6 != result )
          return result;
        *v3 = 0;
        FIELD_U32(a1, 6432) = sub_605B348C;
        FIELD_U32(a1, 6436) = sub_605B3934;
        FIELD_U32(a1, 6440) = sub_605B4110;
        ColliderBase_setType((ColliderBase *)(a1 + 6120), 8);
        FIELD_U32(a1, 6456) = a1 + 7344;
        if ( !FIELD_U8(a1, 7276) )
        {
          ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6120));
          FIELD_U8(a1, 7276) = 1;
        }
        FIELD_U32(a1, 7296) = 48;
        if ( FIELD_U32(a1, 7324) == 1 )
          CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), 0, 3);
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB111C);
      }
      result = (*(int (**)(void))(dword_60CB111C + 8))();
      if ( v6 != result )
        return result;
      *v3 = 0;
      FIELD_U32(a1, 6432) = 0;
      FIELD_U32(a1, 6436) = 0;
      FIELD_U32(a1, 6440) = 0;
      ColliderBase_setType((ColliderBase *)(a1 + 6120), 1);
      FIELD_U32(a1, 6456) = 0;
      FIELD_U32(a1, 7296) = 30;
      sub_605B52F4(a1);
      if ( FIELD_U32(a1, 7324) == 1 )
        CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), (CollisionMgr_Sensor *)(a1 + 6968), 3);
    }
    else
    {
      if ( !result )
        return result;
      v7 = FIELD_U32(a1, 7288);
      v8 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8);
      if ( v7 != 1 )
      {
        result = (*(int (**)(void))(dword_60CB10FC + 8))();
        if ( v9 != result )
          return result;
        *v3 = 1;
        FIELD_U32(a1, 6432) = sub_605B348C;
        FIELD_U32(a1, 6436) = sub_605B3934;
        FIELD_U32(a1, 6440) = sub_605B4110;
        ColliderBase_setType((ColliderBase *)(a1 + 6120), 8);
        FIELD_U32(a1, 6456) = a1 + 7344;
        if ( !FIELD_U8(a1, 7276) )
        {
          ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6120));
          FIELD_U8(a1, 7276) = 1;
        }
        FIELD_U32(a1, 7296) = 48;
        sub_605B52E0(a1);
        if ( FIELD_U32(a1, 7324) == 1 )
          CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), 0, 3);
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB111C);
      }
      result = (*(int (**)(void))(dword_60CB111C + 8))();
      if ( v9 != result )
        return result;
      *v3 = 1;
      FIELD_U32(a1, 6432) = 0;
      FIELD_U32(a1, 6436) = 0;
      FIELD_U32(a1, 6440) = 0;
      ColliderBase_setType((ColliderBase *)(a1 + 6120), 1);
      FIELD_U32(a1, 6456) = 0;
      FIELD_U32(a1, 7296) = 30;
      if ( FIELD_U32(a1, 7324) == 1 )
        CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), (CollisionMgr_Sensor *)(a1 + 6968), 3);
    }
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB10FC);
  }
  return result;
}
