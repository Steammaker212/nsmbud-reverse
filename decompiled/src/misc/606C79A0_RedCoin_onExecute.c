/* RedCoin_onExecute
 * address: 0x606C79A0   size: 468   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall RedCoin_onExecute(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r5
  int v5; // r0
  bool v6; // zf
  float *v7; // r0
  float v8; // s0
  float v9; // s0
  int v10; // r1
  float v11; // s0
  float v12; // s0
  int v13; // r2
  int v14; // r0

  v2 = (StateMgr *)(a1 + 6084);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  CurrentState = StateMgr__getCurrentState(v2);
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 != (*(int (**)(void))(dword_60CBACC0 + 8))() )
  {
    if ( !FIELD_U32(a1, 7072) )
    {
      v5 = FIELD_U32(a1, 7056);
      v6 = v5 == 0;
      if ( v5 )
        v6 = FIELD_U32(a1, 7060) == 0;
      if ( !v6 )
      {
        MovementHandler__execute((MovementHandler *)(a1 + 6808));
        if ( FIELD_U32(a1, 6856) == 1 && FIELD_U32(a1, 6876) != 1 )
        {
          FIELD_U32(a1, 108) = FIELD_U32(a1, 6808);
          FIELD_U32(a1, 112) = FIELD_U32(a1, 6812);
          FIELD_U32(a1, 164) = FIELD_U32(a1, 6888);
        }
      }
    }
    if ( FIELD_U8(a1, 7097) )
    {
      FIELD_U32(a1, 6356) = FIELD_U32(a1, 164);
      ShapedCollider_execute((ColliderBase *)(a1 + 6112));
    }
    if ( (FIELD_U8(a1, 22) & 0x10) != 0 )
    {
      v7 = (float *)(a1 + 7092);
      v8 = FIELD_F32(a1, 7092);
      if ( FIELD_U8(a1, 7096) )
      {
        v9 = v8 + 12.0;
        *v7 = v9;
        if ( v9 < 48.0 )
        {
          v10 = LODWORD(v9);
LABEL_20:
          v12 = FIELD_F32(a1, 112);
          v13 = FIELD_U32(a1, 108);
          v14 = FIELD_U32(a1, 116);
          FIELD_U32(a1, 7140) = v10;
          FIELD_U32(a1, 7148) = v13;
          FIELD_F32(a1, 7152) = v12 + 8.0;
          FIELD_U32(a1, 7156) = v14;
          LightMask__update((LightMask *)(a1 + 7136));
          goto LABEL_21;
        }
        v10 = 1111490560;
      }
      else
      {
        v11 = v8 + -3.0;
        *v7 = v11;
        if ( v11 > 0.0 )
        {
          v10 = LODWORD(v11);
          goto LABEL_20;
        }
        v10 = 0;
      }
      *(_DWORD *)v7 = v10;
      goto LABEL_20;
    }
  }
LABEL_21:
  sub_606C7C4C(a1);
  StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
