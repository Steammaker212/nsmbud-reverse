/* sub_6058B474
 * address: 0x6058B474   size: 560   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6058B474(int a1)
{
  float v2; // s16
  float v3; // s18
  StateBase *CurrentState; // r0
  int v5; // r5
  int v6; // r0
  bool v7; // zf
  float v8; // s0
  float v9; // s2
  int v10; // r0
  ColliderBase *v11; // r5

  sub_605D006C(a1);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  v2 = FIELD_F32(a1, 108);
  v3 = FIELD_F32(a1, 112);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v5 != (*(int (**)(void))(dword_60CAED48 + 8))() )
  {
    v6 = FIELD_U32(a1, 7300);
    v7 = v6 == 0;
    if ( v6 )
      v7 = FIELD_U32(a1, 7304) == 0;
    if ( v7 )
    {
      if ( !FIELD_U32(a1, 7372) )
        FIELD_F32(a1, 112) = FIELD_F32(a1, 7368) + FIELD_F32(a1, 6796);
    }
    else
    {
      MovementHandler__execute((MovementHandler *)(a1 + 6992));
      if ( FIELD_U32(a1, 7040) == 1 )
      {
        if ( FIELD_U32(a1, 7060) == 1 )
        {
          StageActor__delete((StateActor *)a1, 0);
        }
        else
        {
          FIELD_U32(a1, 108) = FIELD_U32(a1, 6992);
          FIELD_F32(a1, 112) = FIELD_F32(a1, 6996) + FIELD_F32(a1, 6796);
          FIELD_U32(a1, 116) = FIELD_U32(a1, 7000);
          FIELD_U32(a1, 164) = FIELD_U32(a1, 7072);
          if ( !FIELD_U8(a1, 7481) )
          {
            FIELD_U32(a1, 6980) = FIELD_U32(a1, 7188);
            FIELD_U32(a1, 6984) = FIELD_U32(a1, 7192);
            FIELD_U32(a1, 6988) = FIELD_U32(a1, 7196);
            FIELD_U8(a1, 7481) = 1;
            if ( sub_605D00B8(a1) == 1 )
            {
              StageActor__delete((StateActor *)a1, 1);
              return 1;
            }
          }
        }
      }
    }
  }
  v8 = FIELD_F32(a1, 108);
  v9 = FIELD_F32(a1, 112);
  if ( (float)((float)((float)(v9 - v3) * (float)(v9 - v3)) + (float)((float)(v8 - v2) * (float)(v8 - v2))) <= 65536.0 )
  {
    v11 = (ColliderBase *)(a1 + 6120);
  }
  else
  {
    FIELD_F32(a1, 108) = v8;
    v10 = FIELD_U32(a1, 116);
    FIELD_F32(a1, 584) = v8;
    FIELD_F32(a1, 588) = v9;
    FIELD_U32(a1, 592) = v10;
    FIELD_U32(a1, 616) = v10;
    FIELD_F32(a1, 608) = v8;
    FIELD_F32(a1, 612) = v9;
    v11 = (ColliderBase *)(a1 + 6120);
    sub_60160948((_DWORD *)(a1 + 6120));
  }
  FIELD_U32(a1, 6364) = FIELD_U32(a1, 164);
  ShapedCollider_execute(v11);
  sub_605B2D70(a1);
  FIELD_U32(a1, 7372) = 2;
  return 1;
}
