/* sub_6038E580
 * address: 0x6038E580   size: 576   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6038E580(int a1)
{
  int v2; // r5
  float v3; // s0
  float v4; // s0
  int v5; // r2
  int v6; // r1
  int v7; // r0
  int v8; // r1
  float v9; // s0
  int result; // r0
  int v11; // r1
  int v12; // r1
  _DWORD *v13; // r4
  int v14; // t1
  int (__fastcall *v15)(int, int *, float); // r2
  int *v16; // r1
  float v17; // s0
  float v18; // s2

  v2 = a1 + 6300;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6300));
  CollisionActor__handleGravity((CollisionActor *)a1);
  v3 = CollisionActor__handleSpeed((CollisionActor *)a1);
  ((void (__fastcall *)(int, float))loc_6038F68C)(a1, v3);
  v5 = FIELD_U32(a1, 80);
  v6 = FIELD_U32(a1, 160);
  v7 = dword_60C96F04;
  if ( v5 == 1 )
  {
    v7 = -dword_60C96F04;
    v6 -= dword_60C96F0C;
    goto LABEL_7;
  }
  if ( v5 )
  {
LABEL_7:
    if ( v6 > v7 )
      v7 = v6;
    goto LABEL_9;
  }
  v8 = dword_60C96F0C + v6;
  if ( v8 < dword_60C96F04 )
    v7 = v8;
LABEL_9:
  FIELD_U32(a1, 160) = v7;
  v9 = CollisionMgr_process((_BYTE *)(a1 + 648), v4);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
  {
    FIELD_U32(a1, 124) = 0;
    if ( !FIELD_U8(a1, 6352) )
    {
      v15 = *(int (__fastcall **)(int, int *, float))(*(_DWORD *)a1 + 192);
      v16 = &dword_60C96E34;
      return v15(a1, v16, v9);
    }
  }
  if ( sub_60003AE0((StageActor *)a1) == 1 )
    SE_EMY_DOWN_ref_2A7624(a1);
  result = SE_OBJ_CMN_SPLASH_ref_39057C(a1);
  if ( !result )
  {
    result = a1 + 6360;
    v11 = FIELD_U32(a1, 6360);
    if ( v11 >= 1 )
    {
      v12 = v11 - 1;
      *(_DWORD *)result = v12;
      if ( v12 >= 24 )
      {
        v14 = FIELD_U32(a1, 6356);
        v13 = (_DWORD *)(a1 + 6356);
        result = v14;
        if ( v14 >= 1 )
        {
          *v13 = --result;
          if ( !result )
          {
            *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v2 + 20) + 24) = 1065353216;
            return (int)sub_6041838C((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v2 + 20) + 4));
          }
        }
      }
      return result;
    }
    if ( FIELD_U8(a1, 6308) )
    {
      result = dword_60CC6484;
      if ( (float)(FIELD_F32(a1, 112) + 28.0) > FIELD_F32(dword_60CC6484, 124) )
        return result;
      v17 = FIELD_F32(a1, 108);
      v18 = FIELD_F32(dword_60CC6484, 112);
      if ( v17 < v18 )
        return result;
      if ( v17 > (float)(v18 + FIELD_F32(dword_60CC6484, 104)) )
        return result;
      result = FIELD_U8(a1, 2872);
      if ( (result & 1) == 0 )
        return result;
      result = sub_60789DBC(PlayerMgr_instance);
      if ( result < 1 )
        return result;
      v15 = *(int (__fastcall **)(int, int *, float))(*(_DWORD *)a1 + 192);
      v16 = &dword_60C96E54;
    }
    else
    {
      result = FIELD_U8(a1, 2872);
      if ( (result & 1) == 0 )
        return result;
      result = sub_60789DBC(PlayerMgr_instance);
      if ( result < 1 )
        return result;
      v15 = *(int (__fastcall **)(int, int *, float))(*(_DWORD *)a1 + 192);
      v16 = &dword_60C96E54;
    }
    return v15(a1, v16, v9);
  }
  return result;
}
