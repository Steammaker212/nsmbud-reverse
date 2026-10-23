/* CS_W8a_DarkCloud_ref
 * address: 0x60215B9C   size: 1836   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall CS_W8a_DarkCloud_ref(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  _DWORD *v4; // r5
  void *v5; // r0
  void *v6; // r8
  void *Model; // r6
  ModelWrapper *v8; // r7
  ModelWrapper *v9; // r0
  _DWORD *v10; // r0
  void *v11; // r6
  ModelWrapper *v12; // r7
  ModelWrapper *v13; // r0
  void *v14; // r6
  ModelWrapper *v15; // r7
  ModelWrapper *v16; // r0
  void *v17; // r6
  ModelWrapper *v18; // r7
  ModelWrapper *v19; // r0
  int (__fastcall ***v20)(void *, int *); // r5
  char v21; // r12
  void *v22; // r6
  ModelWrapper *v23; // r7
  ModelWrapper *v24; // r0
  unsigned int v25; // r0
  unsigned int v26; // r1
  unsigned int v27; // r2
  int v28; // s2
  float *v29; // r7
  int v30; // s0
  float *v31; // r2
  float *v32; // r1
  float v33; // s14
  float v34; // s0
  float v35; // s2
  float v36; // s10
  float v37; // s5
  float v38; // s6
  float v39; // s1
  float v40; // s13
  float v41; // s9
  _DWORD *v42; // r0
  _DWORD *v43; // r0
  sead__SafeString identifier; // [sp+18h] [bp-60h] BYREF
  float v46; // [sp+20h] [bp-58h]
  int v47; // [sp+24h] [bp-54h]
  float v48; // [sp+28h] [bp-50h]
  float v49; // [sp+2Ch] [bp-4Ch]
  float v50; // [sp+30h] [bp-48h]
  int v51; // [sp+34h] [bp-44h]
  float v52; // [sp+38h] [bp-40h]
  float v53; // [sp+3Ch] [bp-3Ch]
  float v54; // [sp+40h] [bp-38h]
  int v55; // [sp+44h] [bp-34h]

  v2 = sub_601E9B10(dword_60C8B144);
  if ( v2 == 53 )
  {
    v3 = 1;
  }
  else
  {
    if ( v2 != 54 )
    {
      identifier.vtable = *(void **)(dword_60CC6D78 + 124);
      if ( (int)identifier.vtable < 4 )
      {
        v4 = a1 + 70;
        if ( identifier.vtable == (void *)3 )
        {
          *v4 = 2;
          goto LABEL_6;
        }
      }
      else
      {
        v4 = a1 + 70;
        if ( (FIELD_U8(dword_60CC6D78, 521) & 1) == 0 )
        {
          *v4 = 4;
          goto LABEL_6;
        }
      }
      *v4 = 0;
      return 2;
    }
    v3 = 3;
  }
  a1[70] = v3;
  v4 = a1 + 70;
LABEL_6:
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "CS_W8a";
  v5 = (void *)LoadResource(ResourceMgrRelated_instance, &identifier);
  v6 = v5;
  switch ( *v4 )
  {
    case 1:
      identifier.vtable = &sead__SafeStringBase__vtable;
      identifier.cstr = "CS_W8a_DarkCloud_Demo1";
      Model = (void *)Resource_getModel(v5, &identifier, 6, 1, 0, 2, 0, 0, 1, 0);
      v8 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
      v9 = ModelWrapper_ctor(v8, Model, 1, 0, 2, 0, 0);
      ModelWrapper_setup(v9, (int)v6, 0, 0);
      a1[68] = v8;
      a1[69] = 0;
      v10 = (_DWORD *)dword_60C89E00;
      goto LABEL_20;
    case 2:
      sub_60427048(dword_60C9BBD4);
      identifier.vtable = &sead__SafeStringBase__vtable;
      identifier.cstr = "CS_W8a_DarkCloud_Demo1";
      v11 = (void *)Resource_getModel(v6, &identifier, 6, 1, 0, 2, 0, 0, 1, 0);
      v12 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
      v13 = ModelWrapper_ctor(v12, v11, 1, 0, 2, 0, 0);
      ModelWrapper_setup(v13, (int)v6, 0, 0);
      a1[67] = v12;
      a1[69] = v12;
      CS_W8a_DarkCloud_ref_2(a1, 2);
      v10 = (_DWORD *)dword_60C89E00;
      goto LABEL_20;
    case 3:
      sub_60427048(dword_60C9BBD4);
      identifier.vtable = &sead__SafeStringBase__vtable;
      identifier.cstr = "CS_W8a_DarkCloud";
      v14 = (void *)Resource_getModel(v6, &identifier, 6, 1, 0, 2, 0, 0, 1, 0);
      v15 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
      v16 = ModelWrapper_ctor(v15, v14, 1, 0, 2, 0, 0);
      ModelWrapper_setup(v16, (int)v6, 0, 0);
      a1[67] = v15;
      a1[69] = v15;
      CS_W8a_DarkCloud_ref_2(a1, 0);
      identifier.vtable = &sead__SafeStringBase__vtable;
      identifier.cstr = "CS_W8a_DarkCloud_Demo2";
      v17 = (void *)Resource_getModel(v6, &identifier, 6, 1, 0, 2, 0, 0, 1, 0);
      v18 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
      v19 = ModelWrapper_ctor(v18, v17, 1, 0, 2, 0, 0);
      ModelWrapper_setup(v19, (int)v6, 0, 0);
      a1[68] = v18;
      v20 = (int (__fastcall ***)(void *, int *))FIELD_U32(v18, 0x0);
      if ( ((unsigned int)&dword_60C80400 & ~(1612799852 << v21) & 1) == 0 && _cxa_guard_acquire(&dword_60C80400) )
      {
        dword_60C803FC = (int)&off_60BC3228;
        _cxa_guard_release(&dword_60C80400);
      }
      if ( v20 && (**v20)(v20, &dword_60C803FC) == 1 )
        v20[87] = (int (__fastcall **)(void *, int *))((unsigned int)v20[87] & 0xFFFFFFFB);
      a1[69] = a1[68];
      CS_W8a_DarkCloud_ref_2(a1, 3);
      v10 = (_DWORD *)dword_60C89E00;
      goto LABEL_20;
    case 4:
      FIELD_U8(dword_60C89E00, 160) = 0;
      sub_60427048(dword_60C9BBD4);
      identifier.vtable = &sead__SafeStringBase__vtable;
      identifier.cstr = "CS_W8a_DarkCloud";
      v22 = (void *)Resource_getModel(v6, &identifier, 6, 1, 0, 2, 0, 0, 1, 0);
      v23 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
      v24 = ModelWrapper_ctor(v23, v22, 1, 0, 2, 0, 0);
      ModelWrapper_setup(v24, (int)v6, 0, 0);
      a1[67] = v23;
      a1[69] = v23;
      CS_W8a_DarkCloud_ref_2(a1, 0);
      v10 = (_DWORD *)dword_60C89E00;
LABEL_20:
      sub_601A177C(v10);
      break;
    default:
      break;
  }
  a1[53] = 1165623296;
  v25 = a1[44];
  v26 = a1[45];
  v27 = a1[46];
  v28 = v26 & 0xFFFFFF;
  v29 = (float *)((char *)sinLutTable + ((v26 >> 20) & 0xFF0));
  v30 = v27 & 0xFFFFFF;
  v31 = (float *)((char *)sinLutTable + ((v27 >> 20) & 0xFF0));
  v32 = (float *)((char *)sinLutTable + ((v25 >> 20) & 0xFF0));
  v33 = (float)(v25 & 0xFFFFFF);
  v34 = (float)(unsigned int)v30 * 0.000000059605;
  v35 = (float)(unsigned int)v28 * 0.000000059605;
  v36 = v31[2] + (float)(v34 * v31[3]);
  v37 = v29[2] + (float)(v35 * v29[3]);
  v38 = *v31 + (float)(v34 * v31[1]);
  v39 = *v29 + (float)(v35 * v29[1]);
  v40 = v32[2] + (float)((float)(v33 * 0.000000059605) * v32[3]);
  v41 = *v32 + (float)((float)(v33 * 0.000000059605) * v32[1]);
  *(float *)&identifier.vtable = v37 * v36;
  v48 = v37 * v38;
  v52 = -v39;
  *(float *)&identifier.cstr = (float)((float)(v41 * v39) * v36) - (float)(v40 * v38);
  v49 = (float)(v40 * v36) + (float)((float)(v41 * v39) * v38);
  v53 = v41 * v37;
  v46 = (float)(v39 * (float)(v40 * v36)) + (float)(v41 * v38);
  v50 = (float)(v39 * (float)(v40 * v38)) - (float)(v41 * v36);
  v54 = v40 * v37;
  v47 = a1[20];
  v51 = a1[21];
  v55 = a1[22];
  v42 = (_DWORD *)a1[67];
  if ( v42 )
  {
    (*(void (__fastcall **)(_DWORD, sead__SafeString *))(*(_DWORD *)*v42 + 60))(*v42, &identifier);
    *(_DWORD *)(*(_DWORD *)a1[67] + 36) = 2;
  }
  v43 = (_DWORD *)a1[68];
  if ( v43 )
  {
    (*(void (__fastcall **)(_DWORD, sead__SafeString *))(*(_DWORD *)*v43 + 60))(*v43, &identifier);
    *(_DWORD *)(*(_DWORD *)a1[68] + 36) = 2;
  }
  return 1;
}
