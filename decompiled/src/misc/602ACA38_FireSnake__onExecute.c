/* FireSnake__onExecute
 * address: 0x602ACA38   size: 1244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Actor : 0x60002F3C
// 
// Overridden by: None
signed int __fastcall FireSnake__onExecute(int a1)
{
  StateMgr *v2; // r5
  int v3; // r0
  _BYTE *v4; // r1
  float x; // s1
  float y; // s0
  unsigned int v7; // r0
  float *v8; // r1
  float v9; // s0
  int v10; // s2
  int v11; // s0
  float v12; // s0
  float v13; // s2
  float v14; // s0
  float v15; // s2
  float v16; // s20
  int v17; // r9
  float v18; // s16
  int v19; // r8
  StateBase *CurrentState; // r0
  int v21; // r7
  float v22; // s16
  float v23; // s0
  StateBase *v24; // r0
  int v25; // r7
  StateBase *v26; // r0
  int v27; // r7
  StateBase *v28; // r0
  int v29; // r5
  Vec3 *v30; // r1
  LightSource *v31; // r4
  float v33; // [sp+20h] [bp-50h] BYREF
  Vec2 out; // [sp+24h] [bp-4Ch] BYREF
  float v35; // [sp+2Ch] [bp-44h]

  v2 = (StateMgr *)(a1 + 6084);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  v3 = sub_6000389C(a1, (int)&v33);
  v4 = (_BYTE *)(a1 + 7284);
  if ( v3 )
  {
    if ( !*v4 )
    {
      *v4 = 1;
      out.x = FIELD_F32(a1, 108);
      out.y = v33;
      v35 = 4500.0;
      if ( (unsigned int)(v3 - 3) >= 2 )
      {
        if ( v3 == 5 )
          (*(void (__fastcall **)(int, Vec2 *))(*(_DWORD *)a1 + 120))(a1, &out);
        else
          (*(void (__fastcall **)(int, Vec2 *))(*(_DWORD *)a1 + 108))(a1, &out);
      }
      else
      {
        (*(void (__fastcall **)(int, Vec2 *))(*(_DWORD *)a1 + 112))(a1, &out);
      }
    }
  }
  else
  {
    *v4 = 0;
  }
  Animation_update(**(_DWORD **)(FIELD_U32(a1, 6300) + 28));
  ModelWrapper_updateAnims(**(ModelWrapper ***)(a1 + 6800));
  ModelWrapper_updateAnims(**(ModelWrapper ***)(a1 + 6804));
  ModelWrapper_updateAnims(**(ModelWrapper ***)(a1 + 6808));
  ModelWrapper_updateAnims(**(ModelWrapper ***)(a1 + 6812));
  if ( !FIELD_U8(a1, 536) )
  {
    if ( StageActor__distanceToPlayer((StateActor *)a1, &out) == -1 )
    {
      x = 0.0;
      out.x = 0.0;
      out.y = 0.0;
      y = 0.0;
    }
    else
    {
      x = out.x;
      y = out.y;
    }
    v7 = sub_6000F7B8(y, x);
    v8 = (float *)((char *)sinLutTable + ((v7 >> 20) & 0xFF0));
    v9 = (float)(v7 & 0xFFFFFF) * 0.000000059605;
    v10 = (int)(float)((float)(2147500000.0 * (float)((float)(v8[2] + (float)(v9 * v8[3])) * 25.0)) / 180.0);
    v11 = (int)(float)((float)(2147500000.0 * (float)((float)(*v8 + (float)(v8[1] * v9)) * -25.0)) / 180.0);
    FIELD_U32(a1, 7232) = v10;
    FIELD_U32(a1, 7228) = v11;
    FIELD_U32(a1, 7236) = 0;
  }
  v12 = FIELD_F32(a1, 148);
  FIELD_U32(a1, 304) = 0;
  v13 = v12 * 8.0;
  v14 = v12 * 6.0;
  FIELD_F32(a1, 308) = v13;
  v15 = FIELD_F32(a1, 144) * 4.0;
  FIELD_F32(a1, 312) = v15;
  FIELD_F32(a1, 316) = v14;
  FIELD_U32(a1, 7444) = 0;
  FIELD_F32(a1, 7448) = v14;
  FIELD_F32(a1, 7452) = v15;
  FIELD_F32(a1, 7456) = v14;
  ActorScaler_execute((ActorScaler *)(a1 + 7296));
  v16 = FIELD_F32(a1, 148);
  v17 = FIELD_U32(a1, 108);
  v18 = FIELD_F32(a1, 112);
  v19 = FIELD_U32(a1, 116);
  CurrentState = StateMgr__getCurrentState(v2);
  v21 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v22 = v18 + (float)(v16 * 4.0);
  if ( v21 == (*(int (**)(void))(dword_60C90B30 + 8))() )
    v23 = (float)(*(float *)&dword_60C90BB4 * (float)FIELD_U16(a1, 6276)) / 30.0;
  else
    v23 = *(float *)&dword_60C90BB4 + (float)((float)(FIELD_F32(a1, 148) - *(float *)&dword_60C90BB4) * 0.15);
  FIELD_F32(a1, 6820) = v23 * 120.0;
  FIELD_U32(a1, 6828) = v17;
  FIELD_F32(a1, 6832) = v22;
  FIELD_U32(a1, 6836) = v19;
  LightMask__update((LightMask *)(a1 + 6816));
  v24 = StateMgr__getCurrentState(v2);
  v25 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v24, 0x0) + 2))(v24);
  if ( v25 != (*(int (**)(void))(dword_60C90B74 + 8))() )
  {
    v26 = StateMgr__getCurrentState(v2);
    v27 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v26, 0x0) + 2))(v26);
    if ( v27 != (*((int (**)(void))stru_60C90950._._.vtable + 2))() )
    {
      v28 = StateMgr__getCurrentState(v2);
      v29 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v28, 0x0) + 2))(v28);
      if ( v29 != (*((int (**)(void))stru_60C90974._._.vtable + 2))() )
      {
        sub_602ACF44(a1);
        sub_602AD0EC(a1);
      }
    }
  }
  sub_602AD28C(a1);
  StageActor__cullCheck((StageActor *)a1, 0);
  skl_root_ref_2AC6EC((unsigned int *)a1);
  sub_602372C0(a1 + 6976, 663, (__int64 *)(a1 + 6928), 0);
  out.x = FIELD_F32(a1, 144);
  out.y = out.x;
  sub_6023636C(a1 + 6992, &out);
  out.x = FIELD_F32(a1, 144);
  out.y = out.x;
  v35 = out.x;
  sub_60236290(a1 + 6992, (int)&out);
  fire_snake_body_model_ref(FIELD_U32(a1, 6800));
  fire_snake_body_model_ref(FIELD_U32(a1, 6804));
  fire_snake_body_model_ref(FIELD_U32(a1, 6808));
  fire_snake_body_model_ref(FIELD_U32(a1, 6812));
  v30 = (Vec3 *)(a1 + 108);
  v31 = (LightSource *)(a1 + 6856);
  LightSource_update2(v31, v30, 0, 0, 0, 0, 0, 0);
  LightSource_unkUpdate3(v31);
  return 1;
}
