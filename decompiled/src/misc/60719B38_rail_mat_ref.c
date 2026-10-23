/* rail_mat_ref
 * address: 0x60719B38   size: 888   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall rail_mat_ref(int a1, int r1_0, int a3, int a4, unsigned int a5)
{
  int v6; // r1
  int v7; // r2
  unsigned int v8; // r7
  int v9; // s6
  float v10; // r2
  int v11; // r3
  int *v12; // r7
  float v13; // s0
  float v14; // s2
  int *v15; // r0
  int v16; // r1
  void *v17; // r0
  char *v18; // r1
  int Model2; // r0
  int v20; // r4
  int v21; // r6
  int v22; // r5
  int v23; // r1
  int v24; // r4
  char *v25; // r6
  int v26; // r0
  int v27; // r0
  int v28; // r4
  int v29; // r5
  int v30; // r0
  int (__fastcall *v31)(int, sead__SafeString *); // r2
  int v32; // r0
  void (__fastcall ***v33)(_DWORD, int, int *, sead__SafeString *, char *); // r0
  int v34; // r0
  int v35; // r1
  int v36; // r2
  sead__SafeString a2; // [sp+18h] [bp-48h] BYREF
  int v39; // [sp+20h] [bp-40h]
  int v40; // [sp+24h] [bp-3Ch]
  int v41; // [sp+28h] [bp-38h]
  int v42; // [sp+2Ch] [bp-34h]
  int v43; // [sp+30h] [bp-30h]
  int v44; // [sp+34h] [bp-2Ch]
  int v45; // [sp+38h] [bp-28h]
  int v46; // [sp+3Ch] [bp-24h]
  int v47; // [sp+40h] [bp-20h]
  int v48; // [sp+44h] [bp-1Ch]

  *(_WORD *)a1 = r1_0;
  v6 = 7 * r1_0;
  FIELD_U8(a1, 6) = a5;
  v7 = a3 + ((unsigned int)FIELD_F32(dword_60CC6484, 24) >> 4);
  v8 = (unsigned int)(float)-FIELD_F32(dword_60CC6484, 36);
  FIELD_U16(a1, 2) = v7;
  v9 = 16 * v7;
  v10 = 0.0;
  v11 = a4 + (v8 >> 4);
  FIELD_U16(a1, 4) = v11;
  v12 = &dword_60CBD260[v6];
  v13 = *((float *)v12 + 2) - (float)(unsigned int)(16 * v11);
  v14 = (float)(unsigned int)v9 + *((float *)v12 + 1);
  if ( a5 <= 2 )
    v10 = flt_60B09E48[a5] + *(float *)&dword_60CBD260[v6 + 3];
  FIELD_F32(a1, 12) = v14;
  FIELD_F32(a1, 16) = v13;
  FIELD_F32(a1, 20) = v10;
  v15 = &dword_60CBD260[v6];
  FIELD_F32(a1, 24) = v14 - (float)(*((float *)v15 + 4) * 0.5);
  FIELD_F32(a1, 28) = v13 - (float)(*((float *)v15 + 5) * 0.5);
  FIELD_F32(a1, 36) = v14 + (float)(*((float *)v15 + 4) * 0.5);
  FIELD_F32(a1, 40) = v13 + (float)(*((float *)v15 + 5) * 0.5);
  v16 = v15[6];
  FIELD_U32(a1, 52) = v16;
  if ( v16 == 26 )
  {
    v17 = *(void **)(dword_60CBD25C + 56);
    a2.vtable = &sead__SafeStringBase__vtable;
    v18 = "obj_chikuwa_block";
  }
  else
  {
    v17 = *(void **)(dword_60CBD25C + 60);
    a2.vtable = &sead__SafeStringBase__vtable;
    v18 = off_60C21CB4[v16];
  }
  a2.cstr = v18;
  Model2 = Resource_getModel2(v17, &a2, 0, 0, 0, 0, 0, 0, 0);
  FIELD_U32(a1, 48) = Model2;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)Model2 + 68))(Model2, &dword_60B3B98C);
  if ( FIELD_U32(a1, 52) != 26 )
  {
    v20 = FIELD_U32(dword_60CBD25C, 52);
    v21 = FIELD_U32(dword_60CBD25C, 64);
    v22 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 48) + 120))(FIELD_U32(a1, 48));
    if ( v22 >= 1 )
    {
      v23 = 5 * v20;
      v24 = 0;
      v25 = (char *)*(&off_60C21D20 + v21) + 8 * v23;
      do
      {
        v26 = (*(int (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 48) + 132))(FIELD_U32(a1, 48), v24);
        (*(void (__fastcall **)(int, _DWORD, char *))(*(_DWORD *)v26 + 12))(v26, 0, v25);
        v27 = (*(int (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 48) + 132))(FIELD_U32(a1, 48), v24);
        (*(void (__fastcall **)(int, int, char *))(*(_DWORD *)v27 + 12))(v27, 1, v25 + 16);
        ++v24;
      }
      while ( v22 != v24 );
    }
    v28 = FIELD_U32(dword_60CBD25C, 52);
    v29 = FIELD_U32(dword_60CBD25C, 64);
    v30 = FIELD_U32(a1, 48);
    v31 = *(int (__fastcall **)(int, sead__SafeString *))(*(_DWORD *)v30 + 124);
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "rail_mat";
    v32 = v31(v30, &a2);
    v33 = (void (__fastcall ***)(_DWORD, int, int *, sead__SafeString *, char *))(*(int (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 48) + 132))(
                                                                                   FIELD_U32(a1, 48),
                                                                                   v32);
    a2.vtable = 0;
    (**v33)(v33, 3, &dword_60B3B954, &a2, (char *)*(&off_60C21D20 + v29) + 40 * v28 + 32);
  }
  v34 = FIELD_U32(a1, 12);
  v35 = FIELD_U32(a1, 16);
  v36 = FIELD_U32(a1, 20);
  a2.vtable = (void *)1065353216;
  a2.cstr = 0;
  v39 = 0;
  v41 = 0;
  v42 = 1065353216;
  v43 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 1065353216;
  v40 = v34;
  v44 = v35;
  v48 = v36;
  (*(void (__fastcall **)(_DWORD, sead__SafeString *))(**(_DWORD **)(a1 + 48) + 60))(FIELD_U32(a1, 48), &a2);
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 48) + 52))(FIELD_U32(a1, 48));
  return (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 48) + 56))(FIELD_U32(a1, 48));
}
