/* sub_60566490
 * address: 0x60566490   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60566490(int a1)
{
  int result; // r0
  _BYTE *v3; // r6
  StateBase *CurrentState; // r0
  int v5; // r5
  StateBase *v6; // r0
  int v7; // r5

  result = sub_60729CF0(EventMgr__instance, 0);
  v3 = (_BYTE *)(a1 + 7292);
  if ( FIELD_U8(a1, 7292) )
  {
    if ( !result )
    {
      CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      result = (*(int (**)(void))(dword_60CAE3C8 + 8))();
      if ( v5 == result )
      {
        *v3 = 0;
        sub_605D05CC((ColliderBase *)a1);
        FIELD_U32(a1, 6776) = -1048576000;
        FIELD_U32(a1, 6780) = 1098907648;
        FIELD_U32(a1, 6784) = 1098907648;
        FIELD_U32(a1, 6788) = -1048576000;
        sub_60165340(a1 + 6120, (_DWORD *)(a1 + 6776), (_DWORD *)(a1 + 6784));
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CAE3A8);
      }
    }
  }
  else if ( result )
  {
    v6 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6);
    result = (*(int (**)(void))(dword_60CAE3A8 + 8))();
    if ( v7 == result )
    {
      *v3 = 1;
      sub_605D0580((ColliderBase *)a1);
      FIELD_U32(a1, 6776) = -1056964608;
      FIELD_U32(a1, 6780) = 1090519040;
      FIELD_U32(a1, 6784) = 1090519040;
      FIELD_U32(a1, 6788) = -1056964608;
      sub_60165340(a1 + 6120, (_DWORD *)(a1 + 6776), (_DWORD *)(a1 + 6784));
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CAE3C8);
    }
  }
  return result;
}
