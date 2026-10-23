/* sub_60436B70
 * address: 0x60436B70   size: 1096   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60436B70(_DWORD *a1, _DWORD *a2, unsigned int a3, unsigned int a4, void *a5)
{
  void *heap; // r10
  int v10; // r1
  int v11; // r1
  int v12; // r0
  int v13; // r1
  int v14; // r9
  int v15; // r11
  int v16; // r0
  int v17; // r4
  int *v18; // r6
  int v19; // r2
  int v20; // r6
  int v21; // r7
  unsigned __int16 *v22; // r0
  unsigned int v23; // r4
  size_t v24; // r2
  int v25; // r0
  int v26; // r1
  bool v27; // zf
  int v28; // r0
  int v29; // r0
  int v30; // r0
  int (__fastcall *v31)(_DWORD *, int (***)()); // r2
  int (__fastcall *v32)(_DWORD *, int (***)()); // r2
  int (__fastcall *v33)(_DWORD *, int (***)()); // r2
  int (__fastcall *v34)(_DWORD *, int (***)()); // r2
  int (__fastcall *v35)(_DWORD *, int (***)()); // r2
  int (__fastcall *v36)(_DWORD *, int (***)()); // r2
  int v37; // r10
  int v38; // r9
  int v39; // r0
  int v40; // r6
  int *v41; // r7
  int v42; // r2
  int v43; // r7
  int v44; // r4
  unsigned __int16 *v45; // r0
  unsigned int v46; // r6
  size_t v47; // r2
  int v48; // r0
  int v49; // r1
  int v50; // r0
  int (**v52)(); // [sp+20h] [bp-30h] BYREF
  const char *v53; // [sp+24h] [bp-2Ch]
  int v54; // [sp+28h] [bp-28h]

  heap = a5;
  if ( !a5 )
    heap = (void *)sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
  if ( a4 > 0x35 || a3 != 4 )
    goto LABEL_8;
  v54 = 4;
  v10 = FIELD_U32(dword_60C9C0FC, 960);
  if ( FIELD_U32(dword_60C9C0FC, 956) > a4 )
    v10 += 72 * a4;
  v11 = FIELD_U32(v10, 4);
  if ( !v11 )
LABEL_8:
    v11 = sub_6042AA40((_DWORD *)dword_60C9C0FC, (int)a2, a3, a4);
  v12 = 0;
  if ( *(_DWORD *)v11 <= 1u && !FIELD_U8(v11, 189) )
    v12 = FIELD_U32(v11, 4);
  a1[288] = v12;
  v13 = -1;
  v14 = FIELD_U32(v12, 68);
  v15 = *(_DWORD *)(FIELD_U32(v14, 20) + 48);
  if ( !v15 )
    goto LABEL_31;
  v16 = FIELD_U16(v15, 12);
  v18 = (int *)(v15 + 8 + 16 * v16);
  v17 = *v18;
  if ( FIELD_U32(v15, 8) < *v18 )
  {
    v19 = v15 + 8;
    do
    {
      v20 = 0;
      if ( (unsigned int)(v17 >> 3) <= 2 )
        v20 = ((unsigned __int8)aMii[2 - (v17 >> 3)] >> (v17 & 7)) & 1;
      v21 = *(_DWORD *)(v19 + 16 * v16);
      v16 = *(unsigned __int16 *)(v19 + 16 * v16 + 2 * v20 + 4);
      v18 = (int *)(v19 + 16 * v16);
      v17 = *v18;
    }
    while ( v21 < *v18 );
  }
  v22 = (unsigned __int16 *)v18[2];
  v23 = *v22;
  v24 = v23;
  if ( v23 >= 3 )
    v24 = 3;
  if ( v24 )
  {
    v25 = memcmp(v22 + 1, "Mii", v24);
    v26 = v25;
    if ( !v25 )
      v26 = 1;
    if ( v23 > 3 || v25 )
      goto LABEL_29;
    goto LABEL_27;
  }
  v13 = -1;
  if ( v23 <= 3 )
  {
LABEL_27:
    v26 = 0;
    if ( v23 < 3 )
      v26 = -1;
LABEL_29:
    v27 = v26 == 0;
    v13 = -1;
    if ( v27 )
      v13 = ((int)v18 - v15 - 24) >> 4;
  }
LABEL_31:
  v28 = sub_6043AF90(v14, v13);
  sub_60432054(a1, v28, FIELD_U32(v14, 28), 1, 0, 0, 0, 0, 0, 0, heap);
  v29 = operator_new_8DE25C(0x5B0u, heap, 4);
  v30 = sub_6042CDB8(v29);
  a1[287] = v30;
  sub_6042CEF8(v30);
  v31 = *(int (__fastcall **)(_DWORD *, int (***)()))(*a1 + 84);
  v52 = &sead__SafeStringBase__vtable;
  v53 = "face";
  a1[281] = v31(a1, &v52);
  v32 = *(int (__fastcall **)(_DWORD *, int (***)()))(*a1 + 84);
  v52 = &sead__SafeStringBase__vtable;
  v53 = "glass";
  a1[282] = v32(a1, &v52);
  v33 = *(int (__fastcall **)(_DWORD *, int (***)()))(*a1 + 84);
  v52 = &sead__SafeStringBase__vtable;
  v53 = "hair_hat";
  a1[283] = v33(a1, &v52);
  v34 = *(int (__fastcall **)(_DWORD *, int (***)()))(*a1 + 84);
  v52 = &sead__SafeStringBase__vtable;
  v53 = "hair_normal";
  a1[284] = v34(a1, &v52);
  v35 = *(int (__fastcall **)(_DWORD *, int (***)()))(*a1 + 84);
  v52 = &sead__SafeStringBase__vtable;
  v53 = "nose_flatten";
  a1[285] = v35(a1, &v52);
  v36 = *(int (__fastcall **)(_DWORD *, int (***)()))(*a1 + 84);
  v52 = &sead__SafeStringBase__vtable;
  v53 = "nose_normal";
  a1[286] = v36(a1, &v52);
  v37 = a2[25];
  a1[254] = v37;
  v38 = *(_DWORD *)(a1[10] + 72);
  if ( !v38 )
    goto LABEL_46;
  v39 = FIELD_U16(v38, 12);
  v41 = (int *)(v38 + 8 + 16 * v39);
  v40 = *v41;
  if ( FIELD_U32(v38, 8) < *v41 )
  {
    v42 = v38 + 8;
    do
    {
      v43 = 0;
      if ( (unsigned int)(v40 >> 3) <= 6 )
        v43 = ((unsigned __int8)aMtMask[6 - (v40 >> 3)] >> (v40 & 7)) & 1;
      v44 = *(_DWORD *)(v42 + 16 * v39);
      v39 = *(unsigned __int16 *)(v42 + 16 * v39 + 2 * v43 + 4);
      v41 = (int *)(v42 + 16 * v39);
      v40 = *v41;
    }
    while ( v44 < *v41 );
  }
  v45 = (unsigned __int16 *)v41[2];
  v46 = *v45;
  v47 = v46;
  if ( v46 >= 7 )
    v47 = 7;
  if ( v47 )
  {
    v48 = memcmp(v45 + 1, "mt_mask", v47);
    v49 = v48;
    if ( !v48 )
      v49 = 1;
    if ( v46 > 7 || v48 )
      goto LABEL_49;
    goto LABEL_47;
  }
  if ( v46 > 7 )
  {
LABEL_46:
    v50 = -1;
    goto LABEL_51;
  }
LABEL_47:
  v49 = 0;
  if ( v46 < 7 )
    v49 = -1;
LABEL_49:
  v50 = -1;
  if ( !v49 )
    v50 = ((int)v41 - v38 - 24) >> 4;
LABEL_51:
  a1[279] = v50;
  a1[280] = sub_608FBBD0(v37, a1[255]) - 1;
  qmemcpy(a1 + 188, a2, 0x5Cu);
  return 1;
}
