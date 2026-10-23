/* sub_60436FEC
 * address: 0x60436FEC   size: 956   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60436FEC(_DWORD *a1, _DWORD *a2, int a3, int a4, int a5, void *a6)
{
  void *heap; // r8
  int v10; // r1
  int v11; // r11
  int v12; // r10
  int v13; // r0
  int *v14; // r4
  int v15; // r7
  int v16; // r2
  int v17; // r4
  int v18; // r6
  unsigned __int16 *v19; // r0
  unsigned int v20; // r7
  size_t v21; // r2
  int v22; // r0
  int v23; // r1
  bool v24; // zf
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int (__fastcall *v28)(_DWORD *, int (***)()); // r2
  int (__fastcall *v29)(_DWORD *, int (***)()); // r2
  int (__fastcall *v30)(_DWORD *, int (***)()); // r2
  int (__fastcall *v31)(_DWORD *, int (***)()); // r2
  int (__fastcall *v32)(_DWORD *, int (***)()); // r2
  int (__fastcall *v33)(_DWORD *, int (***)()); // r2
  int v34; // r10
  int v35; // r8
  int v36; // r0
  int v37; // r6
  int *v38; // r7
  int v39; // r2
  int v40; // r7
  int v41; // r4
  unsigned __int16 *v42; // r0
  unsigned int v43; // r6
  size_t v44; // r2
  int v45; // r0
  int v46; // r1
  int v47; // r0
  int (**v49)(); // [sp+1Ch] [bp-2Ch] BYREF
  const char *v50; // [sp+20h] [bp-28h]

  heap = a6;
  if ( !a6 )
    heap = (void *)sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
  a1[288] = a3;
  v10 = -1;
  v11 = FIELD_U32(a3, 68);
  v12 = *(_DWORD *)(FIELD_U32(v11, 20) + 48);
  if ( !v12 )
    goto LABEL_22;
  v13 = FIELD_U16(v12, 12);
  v14 = (int *)(v12 + 8 + 16 * v13);
  v15 = *v14;
  if ( FIELD_U32(v12, 8) < *v14 )
  {
    v16 = v12 + 8;
    do
    {
      v17 = 0;
      if ( (unsigned int)(v15 >> 3) <= 2 )
        v17 = ((unsigned __int8)aMii[2 - (v15 >> 3)] >> (v15 & 7)) & 1;
      v18 = *(_DWORD *)(v16 + 16 * v13);
      v13 = *(unsigned __int16 *)(v16 + 16 * v13 + 2 * v17 + 4);
      v14 = (int *)(v16 + 16 * v13);
      v15 = *v14;
    }
    while ( v18 < *v14 );
  }
  v19 = (unsigned __int16 *)v14[2];
  v20 = *v19;
  v21 = v20;
  if ( v20 >= 3 )
    v21 = 3;
  if ( v21 )
  {
    v22 = memcmp(v19 + 1, "Mii", v21);
    v23 = v22;
    if ( !v22 )
      v23 = 1;
    if ( v20 > 3 || v22 )
      goto LABEL_20;
    goto LABEL_18;
  }
  v10 = -1;
  if ( v20 <= 3 )
  {
LABEL_18:
    v23 = 0;
    if ( v20 < 3 )
      v23 = -1;
LABEL_20:
    v24 = v23 == 0;
    v10 = -1;
    if ( v24 )
      v10 = ((int)v14 - v12 - 24) >> 4;
  }
LABEL_22:
  v25 = sub_6043AF90(v11, v10);
  sub_60432054(a1, v25, FIELD_U32(v11, 28), 1, 0, 0, 0, 0, 0, 0, heap);
  v26 = operator_new_8DE25C(0x5B0u, heap, 4);
  v27 = sub_6042CDB8(v26);
  a1[287] = v27;
  sub_6042CEF8(v27);
  v28 = *(int (__fastcall **)(_DWORD *, int (***)()))(*a1 + 84);
  v49 = &sead__SafeStringBase__vtable;
  v50 = "face";
  a1[281] = v28(a1, &v49);
  v29 = *(int (__fastcall **)(_DWORD *, int (***)()))(*a1 + 84);
  v49 = &sead__SafeStringBase__vtable;
  v50 = "glass";
  a1[282] = v29(a1, &v49);
  v30 = *(int (__fastcall **)(_DWORD *, int (***)()))(*a1 + 84);
  v49 = &sead__SafeStringBase__vtable;
  v50 = "hair_hat";
  a1[283] = v30(a1, &v49);
  v31 = *(int (__fastcall **)(_DWORD *, int (***)()))(*a1 + 84);
  v49 = &sead__SafeStringBase__vtable;
  v50 = "hair_normal";
  a1[284] = v31(a1, &v49);
  v32 = *(int (__fastcall **)(_DWORD *, int (***)()))(*a1 + 84);
  v49 = &sead__SafeStringBase__vtable;
  v50 = "nose_flatten";
  a1[285] = v32(a1, &v49);
  v33 = *(int (__fastcall **)(_DWORD *, int (***)()))(*a1 + 84);
  v49 = &sead__SafeStringBase__vtable;
  v50 = "nose_normal";
  a1[286] = v33(a1, &v49);
  v34 = a2[25];
  a1[254] = v34;
  v35 = *(_DWORD *)(a1[10] + 72);
  if ( !v35 )
    goto LABEL_37;
  v36 = FIELD_U16(v35, 12);
  v38 = (int *)(v35 + 8 + 16 * v36);
  v37 = *v38;
  if ( FIELD_U32(v35, 8) < *v38 )
  {
    v39 = v35 + 8;
    do
    {
      v40 = 0;
      if ( (unsigned int)(v37 >> 3) <= 6 )
        v40 = ((unsigned __int8)aMtMask[6 - (v37 >> 3)] >> (v37 & 7)) & 1;
      v41 = *(_DWORD *)(v39 + 16 * v36);
      v36 = *(unsigned __int16 *)(v39 + 16 * v36 + 2 * v40 + 4);
      v38 = (int *)(v39 + 16 * v36);
      v37 = *v38;
    }
    while ( v41 < *v38 );
  }
  v42 = (unsigned __int16 *)v38[2];
  v43 = *v42;
  v44 = v43;
  if ( v43 >= 7 )
    v44 = 7;
  if ( v44 )
  {
    v45 = memcmp(v42 + 1, "mt_mask", v44);
    v46 = v45;
    if ( !v45 )
      v46 = 1;
    if ( v43 > 7 || v45 )
      goto LABEL_40;
    goto LABEL_38;
  }
  if ( v43 > 7 )
  {
LABEL_37:
    v47 = -1;
    goto LABEL_42;
  }
LABEL_38:
  v46 = 0;
  if ( v43 < 7 )
    v46 = -1;
LABEL_40:
  v47 = -1;
  if ( !v46 )
    v47 = ((int)v38 - v35 - 24) >> 4;
LABEL_42:
  a1[279] = v47;
  a1[280] = sub_608FBBD0(v34, a1[255]) - 1;
  qmemcpy(a1 + 188, a2, 0x5Cu);
  return 1;
}
