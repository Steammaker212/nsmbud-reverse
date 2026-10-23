/* sub_6046F204
 * address: 0x6046F204   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6046F204(int a1)
{
  StateMgr *v2; // r5
  float *v3; // r0
  float v4; // s0
  float v5; // s0
  int v6; // r1
  float v7; // s0
  float v8; // s0
  int v9; // r2
  int v10; // r0
  StateBase *CurrentState; // r0
  int v12; // r5
  int v13; // r0

  v2 = (StateMgr *)(a1 + 6084);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  ActorScaler_execute((ActorScaler *)(a1 + 6300));
  sub_6046EFC4(a1);
  v3 = (float *)(a1 + 6984);
  v4 = FIELD_F32(a1, 6984);
  if ( FIELD_U8(a1, 6988) )
  {
    v5 = v4 + 27.0;
    *v3 = v5;
    if ( v5 < 108.0 )
    {
      v6 = LODWORD(v5);
      goto LABEL_9;
    }
    v6 = 1121452032;
  }
  else
  {
    v7 = v4 + -27.0;
    *v3 = v7;
    if ( v7 > 0.0 )
    {
      v6 = LODWORD(v7);
      goto LABEL_9;
    }
    v6 = 0;
  }
  *(_DWORD *)v3 = v6;
LABEL_9:
  v8 = FIELD_F32(a1, 112);
  v9 = FIELD_U32(a1, 108);
  v10 = FIELD_U32(a1, 116);
  FIELD_U32(a1, 6832) = v6;
  FIELD_U32(a1, 6840) = v9;
  FIELD_F32(a1, 6844) = v8 + 8.0;
  FIELD_U32(a1, 6848) = v10;
  LightMask__update((LightMask *)(a1 + 6828));
  CurrentState = StateMgr__getCurrentState(v2);
  v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v12 != (*(int (**)(void))(dword_60C9D2D8 + 8))() )
    EffectWrapper_update((EffectWrapper *)(a1 + 6868), 89, (Vec3 *)(a1 + 6972), 0, (Vec3 *)(a1 + 144));
  StageActor__cullCheck((StageActor *)a1, 0);
  if ( v13 == 1 )
    sub_604096C4(dword_60C9A1F0);
  sub_60461904(a1);
  sub_604615A4(a1);
  return 1;
}
