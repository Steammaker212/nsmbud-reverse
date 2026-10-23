/* sub_6010D5CC
 * address: 0x6010D5CC   size: 1424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6010D5CC(int a1)
{
  int **v2; // r7
  int v3; // r0
  int (__fastcall *v4)(int, _DWORD *); // r2
  int v5; // r0
  int v6; // r0
  int (__fastcall *v7)(int, _DWORD *); // r2
  int v8; // r0
  unsigned int v9; // r5
  _WORD *v10; // r6
  unsigned int v11; // r5
  int v12; // r5
  int v13; // r5
  char v14; // r12
  unsigned int v15; // r7
  int v16; // r1
  __int16 v17; // r2
  int v18; // r5
  float v19; // s0
  float v20; // s2
  int v21; // r0
  unsigned int v22; // r7
  unsigned int v23; // r1
  unsigned int *v24; // r6
  int v25; // r5
  char v26; // r12
  int *v27; // r5
  int v28; // r1
  int v29; // r5
  char v30; // r12
  int v31; // r0
  int v32; // r1
  _DWORD v33[2]; // [sp+4h] [bp-64h] BYREF
  _DWORD v34[3]; // [sp+Ch] [bp-5Ch] BYREF
  float v35; // [sp+18h] [bp-50h]
  Vec3 v36[3]; // [sp+3Ch] [bp-2Ch] BYREF

  v2 = (int **)(a1 + 7096);
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 && FIELD_F32(a1, 120) != 0.0 )
  {
    v3 = **v2;
    v4 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v3 + 84);
    v34[0] = &sead__SafeStringBase__vtable;
    v34[1] = "ankle_r1";
    v5 = v4(v3, v34);
    (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)**v2 + 108))(**v2, v5, v34);
    v36[0].x = v35;
    v36[0].y = FIELD_F32(a1, 112);
    v36[0].z = 4500.0;
    EffectWrapper_update((EffectWrapper *)(a1 + 8276), 1029, v36, 0, 0);
    v6 = **v2;
    v7 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v6 + 84);
    v33[0] = &sead__SafeStringBase__vtable;
    v33[1] = "ankle_l1";
    v8 = v7(v6, v33);
    (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)**v2 + 108))(**v2, v8, v34);
    v36[0].x = v35;
    v36[0].y = FIELD_F32(a1, 112);
    v36[0].z = 4500.0;
    EffectWrapper_update((EffectWrapper *)(a1 + 8172), 1029, v36, 0, 0);
  }
  v10 = (_WORD *)(a1 + 6276);
  v9 = FIELD_U16(a1, 6276);
  if ( v9 > (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1076))(a1) - 14 )
    ((void (__fastcall *)(int, _DWORD))loc_6010C040)(a1, 0);
  v11 = (unsigned __int16)*v10;
  if ( v11 < (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1076))(a1) - 14 )
    sub_6010C1FC(a1, 0);
  v12 = (unsigned __int16)*v10;
  if ( v12 == (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1076))(a1) - 32 )
  {
    v13 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 8120));
    if ( ((unsigned int)&dword_60C7B364 & ~(1611716564 << v14) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( v13 && (**(int (__fastcall ***)(int, int *))v13)(v13, &StageActor_RTTI) == 1 )
      FIELD_U32(v13, 116) = 1153269760;
    FIELD_U32(a1, 8120) = 0;
  }
  v15 = (unsigned __int16)*v10;
  v18 = 1;
  if ( v15 < (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1076))(a1) - 32 )
  {
    FIELD_U32(a1, 7124) = sub_600B2FD4(a1, v16, v17);
    v18 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1036))(a1);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1040))(a1);
  }
  v19 = FIELD_F32(a1, 108);
  v20 = FIELD_F32(dword_60CC6484, 116);
  if ( v19 > (float)((float)(v20 + FIELD_F32(a1, 7488)) + -1.0)
    || (v21 = 0, v19 < (float)((float)(v20 + FIELD_F32(a1, 7492)) + 1.0)) )
  {
    if ( (FIELD_U8(a1, 2872) & 1) == 0 )
    {
LABEL_23:
      FIELD_F32(a1, 108) = v19 - FIELD_F32(a1, 120);
      FIELD_U32(a1, 120) = 0;
      if ( FIELD_U8(a1, 8136) )
      {
        v24 = (unsigned int *)(a1 + 8120);
      }
      else
      {
        v24 = (unsigned int *)(a1 + 8120);
        v29 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 8120));
        if ( ((unsigned int)&dword_60C7B364 & ~(1611717304 << v30) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
        {
          StageActor_RTTI = (int)&off_60BC0098;
          _cxa_guard_release(&dword_60C7B364);
        }
        if ( v29 && (**(int (__fastcall ***)(int, int *))v29)(v29, &StageActor_RTTI) == 1 )
        {
          v31 = FIELD_U32(v29, 80);
          FIELD_U8(a1, 8136) = 1;
          v32 = -1073741824;
          if ( !v31 )
            v32 = 0x40000000;
          FIELD_U32(v29, 160) = v32;
        }
      }
      v25 = ActorMgrRelated_getById(ActorMgr__instance + 27168, *v24);
      if ( ((unsigned int)&dword_60C7B364 & ~(1611717008 << v26) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( v25 )
      {
        if ( (**(int (__fastcall ***)(int, int *))v25)(v25, &StageActor_RTTI) == 1 )
          FIELD_U32(v25, 116) = 1153269760;
      }
      *v24 = 0;
      FIELD_U32(a1, 7180) = 0;
      sub_6010AEDC(a1);
      return;
    }
    v22 = (unsigned __int16)*v10;
    v23 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1076))(a1) - 32;
    v21 = 1;
    if ( v22 < v23 )
    {
      v19 = FIELD_F32(a1, 108);
      goto LABEL_23;
    }
  }
  if ( v18 && !*v10 )
  {
    v27 = (int *)(a1 + 7180);
    v28 = FIELD_U32(a1, 7180) - 1;
    FIELD_U32(a1, 7180) = v28;
    if ( v21 == 1 )
    {
      *v27 = 0;
      v19 = sub_6010AEDC(a1);
      v28 = *v27;
    }
    if ( v28 < 1 )
      (*(void (__fastcall **)(int, int *, float))(*(_DWORD *)a1 + 192))(a1, &dword_60C832D8, v19);
    else
      (*(void (__fastcall **)(int, float))(*(_DWORD *)a1 + 1464))(a1, v19);
  }
}
