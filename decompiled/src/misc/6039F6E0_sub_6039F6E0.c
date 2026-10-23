/* sub_6039F6E0
 * address: 0x6039F6E0   size: 1080   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6039F6E0(int a1)
{
  int v2; // r0
  _BYTE *v3; // r7
  bool v4; // zf
  StateBase *CurrentState; // r0
  int v6; // r6
  int v7; // r5
  int v8; // r0
  int v9; // r3
  int result; // r0
  bool v11; // zf
  StateBase *v12; // r0
  int v13; // r5
  float v14; // s16
  int v15; // r5
  float v16; // s18
  int v17; // s0
  int v18; // s2
  int v19; // r1
  int v20; // r0
  StateBase *v21; // r0
  int v22; // r6
  int *v23; // r8
  int v24; // r10
  float v25; // s16
  int v26; // r6
  float v27; // s0
  StateBase *v28; // r0
  int v29; // r7
  int v30; // r6
  int v31; // r7
  int v32; // s0
  int v33; // r0
  int v34; // r3
  StateBase *v35; // r0
  int v36; // r5
  float v37; // s16
  int v38; // r5
  float v39; // s18
  _DWORD v40[2]; // [sp+8h] [bp-88h] BYREF
  int (**v41)(); // [sp+10h] [bp-80h] BYREF
  TileCheck v42; // [sp+14h] [bp-7Ch] BYREF

  v3 = (_BYTE *)(a1 + 6609);
  v2 = FIELD_U8(a1, 6609);
  v4 = v2 == 0;
  if ( v2 )
    v4 = FIELD_U8(a1, 6610) == 0;
  if ( !v4 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v6 == (*((int (**)(void))ShellEnemy_StateID_slide._._.vtable + 2))() )
    {
      v7 = FIELD_U32(a1, 112);
      *(_DWORD *)&v42.field_0 = FIELD_U32(a1, 108);
      v42.field_4 = v7;
      v42.field_8 = sub_600024C4(a1);
      v8 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 768))(a1, 0);
      EffectWrapper_update((EffectWrapper *)(a1 + 6716), v8, (Vec3 *)&v42, 0, 0);
      v9 = FIELD_U32(a1, 80);
      if ( v9 != 1 )
        v9 = -1;
      sub_60718220(TileMgr_instance, 4, 15, v9);
    }
    result = (unsigned __int8)*v3;
    v11 = result == 0;
    if ( *v3 )
    {
      result = FIELD_U8(a1, 6611);
      v11 = result == 0;
    }
    if ( !v11 )
      return result;
    v12 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v13 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v12, 0x0) + 2))(v12);
    if ( v13 == (*(int (**)(void))(dword_60C8EA94 + 8))() )
    {
      result = a1 + 6556;
      if ( FIELD_U8(a1, 6556) )
        return result;
      *(_BYTE *)result = 1;
    }
    v14 = FIELD_F32(a1, 112);
    v15 = FIELD_U32(a1, 108);
    v16 = *(float *)((*(int (__fastcall **)(int))(*(_DWORD *)a1 + 744))(a1) + 8);
    *(float *)&v17 = sub_600024C4(a1);
    *(float *)&v18 = v14 + v16;
    *(_DWORD *)&v42.field_0 = v15;
    v19 = 0;
LABEL_16:
    v42.field_4 = v18;
    v42.field_8 = v17;
    v20 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 748))(a1, v19);
    return EffectData_create(v20, (Vec3 *)&v42, 0, 0);
  }
  result = FIELD_U32(a1, 2872);
  if ( (result & 1) != 0 )
  {
    if ( FIELD_U8(a1, 6557) )
    {
      FIELD_U8(a1, 6557) = 0;
      return 0;
    }
    if ( (FIELD_U8(a1, 3203) & 0x40) == 0 )
    {
      result = FIELD_U32(a1, 3204) & 0x20 | FIELD_U32(a1, 2872) & 8;
      if ( !result )
      {
        v21 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
        v22 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v21, 0x0) + 2))(v21);
        if ( v22 != (*(int (**)(void))(dword_60C8EA94 + 8))()
          || (result = FIELD_U8(a1, 6556), !FIELD_U8(a1, 6556)) )
        {
          result = FIELD_U32(a1, 6568);
          if ( result == 1 )
          {
            result = a1 + 6576;
            if ( FIELD_F32(a1, 6576) >= (float)(FIELD_F32(a1, 112) + FIELD_F32(a1, 576)) )
              return result;
            v23 = (int *)(a1 + 112);
            v24 = 11;
          }
          else
          {
            if ( result )
              return result;
            v23 = (int *)(a1 + 112);
            v24 = (unsigned __int8)BYTE1(FIELD_U32(a1, 5956));
          }
          sub_6015D0AC(&v42);
          v41 = off_60BD4A6C;
          v42.field_C = (int)&v41;
          v25 = FIELD_F32(a1, 112);
          v26 = FIELD_U32(a1, 108);
          v27 = *(float *)((*(int (__fastcall **)(int))(*(_DWORD *)a1 + 744))(a1) + 8);
          v40[0] = v26;
          *(float *)&v40[1] = v25 + v27;
          if ( sub_6015DD58((int)&v42, 0, (int)v40) )
            v24 = 3;
          v28 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
          v29 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v28, 0x0) + 2))(v28);
          if ( v29 == (*((int (**)(void))ShellEnemy_StateID_slide._._.vtable + 2))() )
          {
            v30 = *v23;
            v31 = FIELD_U32(a1, 108);
            *(float *)&v32 = sub_600024C4(a1);
            *(_DWORD *)&v42.field_0 = v31;
            v42.field_4 = v30;
            v42.field_8 = v32;
            v33 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 768))(a1, v24);
            EffectWrapper_update((EffectWrapper *)(a1 + 6716), v33, (Vec3 *)&v42, 0, 0);
            v34 = FIELD_U32(a1, 80);
            if ( v34 != 1 )
              v34 = -1;
            sub_60718220(TileMgr_instance, 4, 15, v34);
          }
          result = FIELD_U8(a1, 2880);
          if ( (result & 1) == 0 )
          {
            v35 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
            v36 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v35, 0x0) + 2))(v35);
            if ( v36 == (*(int (**)(void))(dword_60C8EA94 + 8))() )
              FIELD_U8(a1, 6556) = 1;
            v37 = FIELD_F32(a1, 112);
            v38 = FIELD_U32(a1, 108);
            v39 = *(float *)((*(int (__fastcall **)(int))(*(_DWORD *)a1 + 744))(a1) + 8);
            *(float *)&v17 = sub_600024C4(a1);
            *(float *)&v18 = v37 + v39;
            *(_DWORD *)&v42.field_0 = v38;
            v19 = v24;
            goto LABEL_16;
          }
        }
      }
    }
  }
  return result;
}
