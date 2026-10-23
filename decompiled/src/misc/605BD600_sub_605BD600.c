/* sub_605BD600
 * address: 0x605BD600   size: 480   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605BD600(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  int v5; // r0
  bool v6; // zf
  float *v7; // r0
  float v8; // s0
  float v9; // s0
  int v10; // r1
  float v11; // s0
  StateBase *v12; // r0
  int v13; // r5

  v2 = (StateMgr *)(a1 + 6084);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  CurrentState = StateMgr__getCurrentState(v2);
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 != (*(int (**)(void))(dword_60CAED90 + 8))() )
  {
    v5 = FIELD_U32(a1, 7732);
    v6 = v5 == 0;
    if ( v5 )
      v6 = FIELD_U32(a1, 7736) == 0;
    if ( !v6 )
    {
      MovementHandler__execute((MovementHandler *)(a1 + 7484));
      if ( FIELD_U32(a1, 7532) == 1 && FIELD_U32(a1, 7552) != 1 )
      {
        FIELD_U32(a1, 108) = FIELD_U32(a1, 7484);
        FIELD_U32(a1, 112) = FIELD_U32(a1, 7488);
        FIELD_U32(a1, 164) = FIELD_U32(a1, 7564);
      }
    }
    if ( FIELD_U8(a1, 7793) )
    {
      FIELD_U32(a1, 6364) = FIELD_U32(a1, 164);
      ShapedCollider_execute((ColliderBase *)(a1 + 6120));
    }
  }
  if ( (FIELD_U8(a1, 22) & 0x10) != 0 )
  {
    v7 = (float *)(a1 + 7788);
    v8 = FIELD_F32(a1, 7788);
    if ( FIELD_U8(a1, 7792) )
    {
      v9 = v8 + 12.0;
      *v7 = v9;
      if ( v9 < 48.0 )
      {
        v10 = LODWORD(v9);
LABEL_19:
        FIELD_U32(a1, 7744) = v10;
        FIELD_U32(a1, 7752) = FIELD_U32(a1, 108);
        FIELD_U32(a1, 7756) = FIELD_U32(a1, 112);
        FIELD_U32(a1, 7760) = FIELD_U32(a1, 116);
        LightMask__update((LightMask *)(a1 + 7740));
        goto LABEL_20;
      }
      v10 = 1111490560;
    }
    else
    {
      v11 = v8 + -12.0;
      *v7 = v11;
      if ( v11 > 0.0 )
      {
        v10 = LODWORD(v11);
        goto LABEL_19;
      }
      v10 = 0;
    }
    *(_DWORD *)v7 = v10;
    goto LABEL_19;
  }
LABEL_20:
  v12 = StateMgr__getCurrentState(v2);
  v13 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v12, 0x0) + 2))(v12);
  if ( v13 != (*(int (**)(void))(dword_60CB082C + 8))() )
    StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
