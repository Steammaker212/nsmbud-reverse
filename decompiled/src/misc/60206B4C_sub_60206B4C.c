/* sub_60206B4C
 * address: 0x60206B4C   size: 876   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60206B4C(int a1)
{
  int v2; // r5
  StateBase *v3; // r1
  float v4; // r0
  _DWORD *v5; // r5
  int v6; // r1
  float v7; // r0
  int v8; // r1
  _DWORD *v9; // r0
  int v10; // r1
  _DWORD *v11; // r0
  int v12; // r1
  _DWORD *v13; // r0
  int v14; // r1
  int result; // r0
  float v16; // r1
  float v17; // r2
  _DWORD *v18; // r0
  int v19; // r1
  _DWORD v20[2]; // [sp+Ch] [bp-34h] BYREF
  int v21; // [sp+14h] [bp-2Ch] BYREF
  int v22; // [sp+18h] [bp-28h]
  int v23; // [sp+1Ch] [bp-24h]
  Vec3 v24; // [sp+20h] [bp-20h] BYREF
  int v25; // [sp+2Ch] [bp-14h]

  v2 = dword_60C8996C;
  v25 = sub_6019112C(dword_60C8996C);
  if ( FIELD_U8(v2, 1384) )
  {
    switch ( v25 )
    {
      case 317:
        if ( FIELD_U32(a1, 240) == 6 )
          v3 = (StateBase *)&dword_60C8C798;
        else
          v3 = (StateBase *)&unk_60C8C774;
        StateMgr__changeState((StateMgr *)(a1 + 296), v3);
        FIELD_U32(a1, 352) = 40;
        break;
      case 318:
        v4 = FIELD_F32(a1, 84);
        v24.z = FIELD_F32(a1, 88);
        v24.y = v4;
        v5 = (_DWORD *)(a1 + 80);
        v24.x = FIELD_F32(a1, 80);
        v24.y = v4 + -100.0;
        ((void (__fastcall *)(int, Vec3 *, int, int, float, float, float, int, int *))loc_60185F9C)(
          a1,
          &v24,
          6,
          15,
          5.0,
          FIELD_F32(a1, 344),
          0.1,
          15,
          &dword_60B3B974);
        if ( FIELD_U32(a1, 240) == 6 )
        {
          v6 = 161;
        }
        else
        {
          v9 = *(_DWORD **)(a1 + 268);
          v10 = FIELD_U32(a1, 272);
          v21 = (int)&sead__SafeStringBase__vtable;
          v22 = (int)"jumpA";
          sub_60421938(v9, v10, (int)&v21);
          v6 = 156;
        }
        sub_601E4C88((_DWORD *)dword_60C8B13C, v6, (_DWORD *)(a1 + 80));
        v11 = (_DWORD *)dword_60C8B13C;
        v12 = 141;
        goto LABEL_16;
      case 319:
        v7 = FIELD_F32(a1, 84);
        v24.z = FIELD_F32(a1, 88);
        v24.y = v7;
        v5 = (_DWORD *)(a1 + 80);
        v24.x = FIELD_F32(a1, 80);
        v24.y = v7 + 100.0;
        ((void (__fastcall *)(int, Vec3 *, _DWORD, int, float, float, float, int, int *))loc_60185F9C)(
          a1,
          &v24,
          0,
          15,
          10.0,
          0.1,
          FIELD_F32(a1, 344),
          15,
          &dword_60B3B974);
        if ( FIELD_U32(a1, 240) == 6 )
        {
          v8 = 162;
        }
        else
        {
          v13 = *(_DWORD **)(a1 + 268);
          v14 = FIELD_U32(a1, 272);
          v21 = (int)&sead__SafeStringBase__vtable;
          v22 = (int)"jumpA";
          sub_60421938(v13, v14, (int)&v21);
          v8 = 157;
        }
        sub_601E4C88((_DWORD *)dword_60C8B13C, v8, (_DWORD *)(a1 + 80));
        v11 = (_DWORD *)dword_60C8B13C;
        v12 = 142;
LABEL_16:
        sub_601E4C88(v11, v12, v5);
        break;
      case 320:
        StateMgr__changeState((StateMgr *)(a1 + 296), (StateBase *)&unk_60C8C69C);
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
        break;
      default:
        break;
    }
  }
  switch ( v25 )
  {
    case 315:
      StateMgr__changeState((StateMgr *)(a1 + 296), (StateBase *)&unk_60C8C6C0);
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    case 317:
      result = FIELD_U32(a1, 352) - 1;
      FIELD_U32(a1, 352) = result;
      if ( !result )
        return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
      return result;
    case 318:
      result = sub_601860F8(a1);
      if ( result != 1 )
        return result;
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    case 319:
      result = sub_601860F8(a1);
      if ( result != 1 )
        return result;
      v16 = FIELD_F32(a1, 84);
      v17 = FIELD_F32(a1, 88);
      v24.x = FIELD_F32(a1, 80);
      v24.y = v16;
      v24.z = v17;
      v21 = 1065353216;
      v22 = 1065353216;
      v23 = 1065353216;
      EffectData_create(1125, &v24, 0, (int)&v21);
      v18 = *(_DWORD **)(a1 + 268);
      v19 = FIELD_U32(a1, 272);
      v20[0] = &sead__SafeStringBase__vtable;
      v20[1] = "wait";
      sub_60421938(v18, v19, (int)v20);
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    default:
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  }
}
