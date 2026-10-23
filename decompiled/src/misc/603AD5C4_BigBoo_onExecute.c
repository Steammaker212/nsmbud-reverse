/* BigBoo_onExecute
 * address: 0x603AD5C4   size: 592   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BigBoo_onExecute(int a1)
{
  int *v2; // r1
  float *v3; // r2
  float v4; // s0
  float v5; // s2
  bool v6; // r0
  float v7; // s0
  int v8; // r1
  int v9; // r1
  int v10; // r1
  int v11; // r1
  int v12; // r1
  float v13; // s0
  float v14; // s2

  StageActor__cullCheck((StageActor *)a1, 0);
  v2 = dword_603AD814;
  v3 = (float *)(a1 + 108);
  if ( FIELD_U32(a1, 6656) == 1 )
    v2 = &dword_603AD814[1];
  v4 = *(float *)v2;
  v6 = *v3 > (float)(FIELD_F32(dword_60CC6484, 120) + *(float *)v2)
    || *v3 < (float)(FIELD_F32(dword_60CC6484, 112) - v4)
    || (v5 = FIELD_F32(a1, 112), v5 > (float)(v4 + FIELD_F32(dword_60CC6484, 124)))
    || v5 < (float)(FIELD_F32(dword_60CC6484, 132) - v4);
  FIELD_U8(a1, 7081) = v6;
  ActorScaler_execute((ActorScaler *)(a1 + 7096));
  v7 = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
  FIELD_F32(a1, 6984) = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
  FIELD_F32(a1, 6988) = v7;
  if ( FIELD_U16(a1, 6676) )
    --FIELD_U16(a1, 6676);
  v8 = FIELD_U32(a1, 6652);
  if ( v8 )
    FIELD_U32(a1, 6652) = v8 - 1;
  v9 = FIELD_U32(a1, 6680);
  if ( v9 )
    FIELD_U32(a1, 6680) = v9 - 1;
  v10 = FIELD_U32(a1, 6896);
  if ( v10 )
    FIELD_U32(a1, 6896) = v10 - 1;
  v11 = FIELD_U32(a1, 6900);
  if ( v11 )
    FIELD_U32(a1, 6900) = v11 - 1;
  StateMgr__execute((StateMgr *)(a1 + 6084));
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6308));
  ((void (__fastcall *)(int))loc_603AD244)(a1);
  if ( !FIELD_U8(a1, 7081) )
  {
    if ( FIELD_U32(a1, 6656) == 1 )
      v12 = 19;
    else
      v12 = 18;
    LightSource_update1((LightSource *)(a1 + 7008), v12, (Vec3 *)(a1 + 6616), 0, 0, 0, 0, 0, 0);
    if ( !FIELD_U8(a1, 7080) )
      LightSource_unkUpdate3((LightSource *)(a1 + 7008));
  }
  v13 = FIELD_F32(a1, 6628) - FIELD_F32(a1, 108);
  v14 = FIELD_F32(a1, 6632) - FIELD_F32(a1, 112);
  FIELD_F32(a1, 304) = v13;
  FIELD_F32(a1, 308) = v14;
  FIELD_F32(a1, 6428) = v13;
  FIELD_F32(a1, 6432) = v14;
  ActiveCollider_reset((ActiveCollider *)(a1 + 6312));
  return 1;
}
