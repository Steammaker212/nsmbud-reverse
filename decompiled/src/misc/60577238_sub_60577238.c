/* sub_60577238
 * address: 0x60577238   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60577238(int a1)
{
  _DWORD *v2; // r7
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r5
  int v7; // r0
  bool v8; // zf
  int v10; // [sp+0h] [bp-20h] BYREF
  float v11; // [sp+4h] [bp-1Ch] BYREF

  v2 = (_DWORD *)(a1 + 7492);
  if ( FIELD_U32(a1, 7492) )
  {
    sub_605D006C(a1);
    StateMgr__execute((StateMgr *)(a1 + 6084));
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v4 != (*(int (**)(void))(dword_60CAED90 + 8))() )
    {
      v5 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
      v7 = (*(int (**)(void))(dword_60CAED48 + 8))();
      v8 = v6 == v7;
      if ( v6 != v7 )
        v8 = *v2 == 0;
      if ( !v8 )
      {
        v11 = 0.0;
        ((void (__fastcall *)(int *, float *, int, _DWORD))checkLiquidCollisions)(
          &v10,
          &v11,
          a1 + 108,
          FIELD_U8(a1, 86));
        FIELD_F32(a1, 112) = FIELD_F32(a1, 6796)
                             + (float)(FIELD_F32(a1, 7484) + (float)(v11 - FIELD_F32(a1, 7488)));
      }
      FIELD_U32(a1, 6364) = FIELD_U32(a1, 164);
      ShapedCollider_execute((ColliderBase *)(a1 + 6120));
    }
    sub_605B2D70(a1);
    FIELD_U32(a1, 7372) = 2;
    StageActor__cullCheck((StageActor *)a1, 0);
  }
  else
  {
    CoinBase__onExecute(a1);
  }
  return 1;
}
