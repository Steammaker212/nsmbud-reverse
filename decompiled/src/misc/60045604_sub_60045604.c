/* sub_60045604
 * address: 0x60045604   size: 808   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n128 __fastcall sub_60045604(int a1)
{
  float v2; // s20
  float v3; // s16
  StateMgr *v4; // r5
  float v5; // s2
  StateBase *CurrentState; // r0
  int v7; // r6
  StateBase *v8; // r0
  int v9; // r6
  float v10; // s0
  float v11; // s22
  float v12; // s18
  float v13; // s0
  float v14; // s18
  float v15; // s16
  float v16; // s22
  float v17; // s0
  StateBase *v18; // r0
  int v19; // r5
  ActiveColliderMgr *v20; // r6
  ActiveColliderMgr *v21; // r6
  int v22; // r0
  float *v23; // r4
  _DWORD *v24; // t1
  float v25; // s2
  __n128 result; // q0
  _BYTE v27[12]; // [sp+0h] [bp-60h] BYREF
  float v28; // [sp+Ch] [bp-54h]
  float v29; // [sp+1Ch] [bp-44h]

  v2 = FIELD_F32(a1, 6872);
  v3 = FIELD_F32(a1, 6856);
  v4 = (StateMgr *)(a1 + 6084);
  v5 = v2 - FIELD_F32(a1, 112);
  FIELD_F32(a1, 304) = v3 - FIELD_F32(a1, 108);
  FIELD_F32(a1, 308) = v5;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v7 == (*(int (**)(void))(dword_60C80268 + 8))()
    || (v8 = StateMgr__getCurrentState(v4),
        v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8),
        v9 == (*(int (**)(void))(dword_60C80288 + 8))()) )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 668))(a1);
    v11 = 0.6;
  }
  else
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 668))(a1);
    v11 = 1.08;
  }
  v12 = v10 * v11;
  v13 = (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 668))(a1);
  FIELD_F32(a1, 312) = v12;
  FIELD_F32(a1, 316) = v13 * v11;
  v14 = v3 - FIELD_F32(a1, 108);
  v15 = v2 - FIELD_F32(a1, 112);
  FIELD_F32(a1, 7464) = v14;
  FIELD_F32(a1, 7468) = v15;
  v16 = (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 668))(a1) * 1.08;
  v17 = (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 668))(a1);
  FIELD_F32(a1, 7472) = v16;
  FIELD_F32(a1, 7476) = v17 * 1.08;
  v18 = StateMgr__getCurrentState(v4);
  v19 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v18, 0x0) + 2))(v18);
  if ( v19 != (*(int (**)(void))(dword_60C80310 + 8))() && !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 724))(a1) )
  {
    v20 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7348))
      && !ActiveColliderMgr_isInCreateList(v20, (ActiveCollider *)(a1 + 7348)) )
    {
      v21 = ActiveColliderMgr_instance;
      if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7348))
        && !ActiveColliderMgr_isInCreateList(v21, (ActiveCollider *)(a1 + 7348)) )
      {
        ActiveColliderMgr_addToCreateList(v21, (ActiveCollider *)(a1 + 7348));
      }
    }
  }
  FIELD_F32(a1, 6676) = v14;
  FIELD_F32(a1, 6680) = v15;
  FIELD_U32(a1, 6580) = FIELD_U32(a1, 164);
  v22 = FIELD_U32(a1, 11436);
  FIELD_U32(a1, 6508) = 0;
  FIELD_U32(a1, 6512) = v22;
  CircularCollider_execute(a1 + 6336);
  v24 = *(_DWORD **)(a1 + 6304);
  v23 = (float *)(a1 + 6304);
  (*(void (__fastcall **)(_DWORD, int, _BYTE *))(*(_DWORD *)*v24 + 108))(*v24, 9, v27);
  v25 = v29 - *(v23 - 1548);
  v23[384] = v28 - *(v23 - 1549);
  v23[385] = v25;
  (*(void (__fastcall **)(_DWORD, int, _BYTE *))(***(_DWORD ***)v23 + 108))(**(_DWORD **)v23, 16, v27);
  result.n128_f32[0] = v28 - *(v23 - 1549);
  result.n128_f32[2] = v29 - *(v23 - 1548);
  v23[460] = result.n128_f32[0];
  v23[461] = result.n128_f32[2];
  return result;
}
