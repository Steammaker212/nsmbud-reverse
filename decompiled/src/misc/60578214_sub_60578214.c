/* sub_60578214
 * address: 0x60578214   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60578214(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r5
  int v7; // r0
  bool v8; // zf
  int *v9; // r5
  int v10; // r0
  _DWORD *v11; // r3
  int v12; // r1
  int v13; // r2

  v2 = (StateMgr *)(a1 + 6084);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  CurrentState = StateMgr__getCurrentState(v2);
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 != (*(int (**)(void))(dword_60CAED90 + 8))() )
  {
    v5 = StateMgr__getCurrentState(v2);
    v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
    if ( v6 != (*(int (**)(void))(dword_60CAED48 + 8))() )
    {
      v7 = FIELD_U32(a1, 7300);
      v8 = v7 == 0;
      if ( v7 )
        v8 = FIELD_U32(a1, 7304) == 0;
      if ( !v8 )
      {
        v9 = (int *)(a1 + 6992);
        MovementHandler__execute((MovementHandler *)(a1 + 6992));
        if ( FIELD_U32(a1, 7040) == 1 && FIELD_U32(a1, 7060) != 1 )
        {
          v10 = *v9;
          v11 = (_DWORD *)(a1 + 7120);
          FIELD_U32(a1, 108) = *v9;
          v12 = FIELD_U32(a1, 6996);
          FIELD_U32(a1, 112) = v12;
          if ( (FIELD_U32(a1, 20) & 0x2000000) == 0 )
            v11 = (_DWORD *)(a1 + 7072);
          FIELD_U32(a1, 164) = *v11;
          if ( FIELD_U8(a1, 7076) )
          {
            FIELD_U32(a1, 108) = v10;
            FIELD_U32(a1, 112) = v12;
            v13 = FIELD_U32(a1, 116);
            FIELD_U32(a1, 584) = v10;
            FIELD_U32(a1, 588) = v12;
            FIELD_U32(a1, 592) = v13;
            FIELD_U32(a1, 608) = v10;
            FIELD_U32(a1, 612) = v12;
            FIELD_U32(a1, 616) = v13;
            sub_60160948((_DWORD *)(a1 + 6120));
          }
          if ( FIELD_U8(a1, 7128) )
            FIELD_U8(a1, 7488) = 1;
        }
      }
    }
    FIELD_U32(a1, 6364) = FIELD_U32(a1, 164);
    ShapedCollider_execute((ColliderBase *)(a1 + 6120));
  }
  sub_605B2D70(a1);
  return 1;
}
