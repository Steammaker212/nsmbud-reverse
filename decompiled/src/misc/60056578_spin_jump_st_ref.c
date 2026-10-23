/* spin_jump_st_ref
 * address: 0x60056578   size: 1580   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall spin_jump_st_ref(int a1)
{
  int v2; // r7
  int v3; // s16
  float result; // s0
  _DWORD *v5; // r10
  _DWORD *v6; // r8
  int v7; // r5
  int v8; // r5
  int v9; // r5
  int v10; // r2
  unsigned int v11; // r1
  _DWORD *v12; // r1
  int v13; // r5
  int v14; // r8
  int v15; // r5
  int v16; // r5
  int v17; // r1
  unsigned int v18; // r0
  int *v19; // r1
  unsigned int v20; // r0
  int v21; // r0
  int v22; // r2
  int v23; // r5
  int v24; // r5
  int v25; // r1
  unsigned int v26; // r0
  int v27; // r0
  int v28; // r2
  unsigned int v29; // r1
  _DWORD v30[4]; // [sp+0h] [bp-58h] BYREF
  _DWORD v31[18]; // [sp+10h] [bp-48h] BYREF

  v2 = a1 + 7204;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7204));
  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v3 = FIELD_U32(a1, 124);
  CollisionMgr_process((_BYTE *)(a1 + 648));
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    FIELD_U32(a1, 124) = 0;
  v5 = (_DWORD *)(a1 + 8512);
  switch ( FIELD_U32(a1, 8512) )
  {
    case 0:
      v6 = (_DWORD *)(a1 + 6096);
      v7 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
      if ( v7 == (*(int (**)(void))(dword_60C80980 + 8))()
        || (v8 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v6 + 8))(*v6),
            v8 == (*(int (**)(void))(dword_60C809A4 + 8))()) )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1276))(a1);
        sub_6004E178(a1);
      }
      if ( FIELD_U16(a1, 6276) )
        goto LABEL_42;
      if ( FIELD_S32(a1, 8420) >= 1 )
      {
        v31[6] = &sead__SafeStringBase__vtable;
        v31[7] = "wait";
        sub_60051780(a1);
        FIELD_U16(a1, 6276) = FIELD_U32(a1, 8420);
        *v5 = 1;
        goto LABEL_42;
      }
      v23 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v6 + 8))(*v6);
      if ( v23 != (*(int (**)(void))(dword_60C80980 + 8))() )
      {
        v24 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v6 + 8))(*v6);
        if ( v24 != (*(int (**)(void))(dword_60C809A4 + 8))() )
        {
          v31[2] = &sead__SafeStringBase__vtable;
          v31[3] = "spin_jump_st";
          goto LABEL_55;
        }
      }
      v25 = *(_DWORD *)(*(_DWORD *)v2 + 12);
      v26 = *(_DWORD *)(*(_DWORD *)v2 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v26 )
        v25 += 4 * v26;
      if ( (*(_BYTE *)(*(_DWORD *)v25 + 28) & 4) != 0 )
      {
        v31[4] = &sead__SafeStringBase__vtable;
        v31[5] = "spin_jump_st2";
LABEL_55:
        sub_60051780(a1);
        v28 = *(_DWORD *)(*(_DWORD *)v2 + 12);
        v29 = *(_DWORD *)(*(_DWORD *)v2 + 68);
        if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v29 )
          v28 += 4 * v29;
        *(_DWORD *)(*(_DWORD *)v28 + 24) = FIELD_U32(a1, 8476);
        v12 = v31;
        v31[0] = &sead__SafeStringBase__vtable;
        v31[1] = "spin_jump_st";
        goto LABEL_17;
      }
LABEL_42:
      v27 = FIELD_U32(a1, 2872);
      if ( (v27 & 0x440000) != 0 && (v27 & 0x10000000) == 0 || (v27 & 0x880000) != 0 && (v27 & 0x20000000) == 0 )
      {
        result = FIELD_F32(a1, 120);
        if ( *v5 == 3 )
        {
          if ( result != 0.0 && (v27 & 1) == 0 )
            (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1320))(a1);
          FIELD_U32(a1, 120) = 0;
          FIELD_U32(a1, 124) = v3;
          FIELD_U32(a1, 128) = 0;
        }
        else
        {
          FIELD_F32(a1, 120) = result * -0.5;
          result = -FIELD_F32(a1, 132);
          FIELD_F32(a1, 132) = result;
        }
      }
      return result;
    case 1:
      v9 = FIELD_U32(a1, 80);
      if ( v9 != StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108)) && sub_600525EC((_DWORD *)a1) )
        FIELD_U32(a1, 80) ^= 1u;
      if ( !FIELD_U16(a1, 6276) )
      {
        v30[2] = &sead__SafeStringBase__vtable;
        v30[3] = "spin_jump_st";
        sub_60051780(a1);
        v10 = *(_DWORD *)(*(_DWORD *)v2 + 12);
        v11 = *(_DWORD *)(*(_DWORD *)v2 + 68);
        if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v11 )
          v10 += 4 * v11;
        *(_DWORD *)(*(_DWORD *)v10 + 24) = FIELD_U32(a1, 8476);
        v30[0] = &sead__SafeStringBase__vtable;
        v30[1] = "spin_jump_st";
        v12 = v30;
LABEL_17:
        sub_60051794(a1, (int)v12, 0);
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1188))(a1);
        FIELD_U8(a1, 8628) = 1;
        *v5 = 2;
      }
      goto LABEL_42;
    case 2:
      v13 = FIELD_U32(a1, 80);
      v14 = 1;
      if ( v13 != StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108)) )
      {
        v14 = 0;
        if ( sub_600525EC((_DWORD *)a1) )
        {
          v14 = 1;
          FIELD_U32(a1, 80) ^= 1u;
        }
      }
      v15 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
      if ( v15 == (*(int (**)(void))(dword_60C80980 + 8))()
        || (v16 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096)),
            v16 == (*(int (**)(void))(dword_60C809A4 + 8))()) )
      {
        v17 = *(_DWORD *)(*(_DWORD *)v2 + 12);
        v18 = *(_DWORD *)(*(_DWORD *)v2 + 68);
        if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v18 )
          v17 += 4 * v18;
        if ( *(float *)(*(_DWORD *)v17 + 20) < 8.0 )
          (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1276))(a1);
      }
      v19 = *(int **)(*(_DWORD *)v2 + 12);
      v20 = *(_DWORD *)(*(_DWORD *)v2 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v20 )
        v19 += v20;
      v21 = *v19;
      result = FIELD_F32(a1, 8464);
      if ( *(float *)(*v19 + 20) >= result )
      {
        if ( v14 )
        {
          FIELD_U32(v21, 24) = FIELD_U32(a1, 8476);
          v22 = FIELD_U32(a1, 8436);
          v3 = FIELD_U32(a1, 8444);
          FIELD_U32(a1, 120) = v22;
          FIELD_U32(a1, 124) = v3;
          FIELD_U32(a1, 128) = 0;
          if ( FIELD_U32(a1, 80) == 1 )
          {
            v22 ^= 0x80000000;
            FIELD_U32(a1, 120) = v22;
          }
          FIELD_U32(a1, 132) = v22;
          FIELD_U32(a1, 136) = -1065353216;
          FIELD_U32(a1, 140) = 0;
          FIELD_U32(a1, 104) = 0;
          FIELD_U32(a1, 100) = FIELD_U32(a1, 8440);
          (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1192))(a1);
          *v5 = 3;
        }
        else
        {
          FIELD_U32(v21, 24) = 0;
        }
      }
      goto LABEL_42;
    case 3:
      FIELD_U32(a1, 160) += FIELD_U32(a1, 8456);
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1152))(a1);
      if ( (FIELD_U8(a1, 2872) & 1) == 0 )
        goto LABEL_42;
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C809EC);
      return result;
    default:
      goto LABEL_42;
  }
}
