/* sub_60225C88
 * address: 0x60225C88   size: 2308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned __int16 *__fastcall sub_60225C88(int a1, const char **a2)
{
  _DWORD *Resource; // r11
  int v5; // r4
  unsigned __int16 *result; // r0
  int v7; // r8
  const char *v8; // r7
  size_t v9; // r6
  int v10; // r0
  int v11; // r3
  int *v12; // r4
  int v13; // r2
  int v14; // r5
  int v15; // r1
  size_t v16; // r5
  size_t v17; // r2
  int v18; // r1
  int v19; // r5
  void *Model; // r6
  ModelWrapper *v21; // r8
  ModelWrapper *v22; // r0
  char *v23; // r0
  float *v24; // r0
  float v25; // r2
  float v26; // r3
  float v27; // r4
  float v28; // r5
  float v29; // r6
  float v30; // r7
  float v31; // r3
  float v32; // r4
  float v33; // r5
  float v34; // r6
  float v35; // r7
  char *v36; // r0
  int i; // r2
  int v38; // r0
  _DWORD *v39; // r6
  int v40; // r0
  int v41; // r7
  char *v42; // r6
  const char *v43; // r5
  const char *v44; // r0
  signed int v45; // r7
  bool v46; // cc
  signed int v47; // r0
  char *v48; // r0
  _DWORD *v49; // r0
  int v50; // r1
  char *v51; // r0
  int v52; // r3
  int v53; // r0
  int v54; // r1
  void *v55; // r7
  int j; // r1
  int k; // r1
  int (__fastcall *v58)(void *, int (***)()); // r2
  int v59; // r5
  int m; // r5
  char *v61; // r1
  int v62; // r2
  unsigned int v63; // r0
  int v64; // r2
  int v65; // [sp+1Ch] [bp-8Ch]
  int (**v66)(); // [sp+24h] [bp-84h] BYREF
  char *v67; // [sp+28h] [bp-80h]
  int v68; // [sp+2Ch] [bp-7Ch]
  float v69[11]; // [sp+50h] [bp-58h] BYREF
  float v70; // [sp+7Ch] [bp-2Ch]

  Resource = (_DWORD *)LoadResource(ResourceMgrRelated_instance, (_DWORD *)(a1 + 1792));
  v5 = Resource[5];
  result = (unsigned __int16 *)(*((int (__fastcall **)(const char **))*a2 + 3))(a2);
  v7 = FIELD_U32(v5, 48);
  if ( !v7 )
    return result;
  v8 = a2[1];
  if ( v8 )
    v9 = strlen(a2[1]);
  else
    v9 = 0;
  v10 = FIELD_U16(v7, 12);
  v12 = (int *)(v7 + 8 + 16 * v10);
  v11 = *v12;
  if ( FIELD_U32(v7, 8) < *v12 )
  {
    v13 = v7 + 8;
    do
    {
      v14 = 0;
      if ( v9 > v11 >> 3 )
        v14 = ((unsigned __int8)v8[v9 + ~(v11 >> 3)] >> (v11 & 7)) & 1;
      v15 = *(_DWORD *)(v13 + 16 * v10);
      v10 = *(unsigned __int16 *)(v13 + 16 * v10 + 2 * v14 + 4);
      v12 = (int *)(v13 + 16 * v10);
      v11 = *v12;
    }
    while ( v15 < *v12 );
  }
  result = (unsigned __int16 *)v12[2];
  v16 = *result;
  v17 = v16;
  if ( v9 < v16 )
    v17 = v9;
  if ( !v17 )
  {
    if ( v9 < v16 )
      return result;
    goto LABEL_19;
  }
  result = (unsigned __int16 *)memcmp(result + 1, v8, v17);
  v18 = (int)result;
  if ( !result )
    v18 = 1;
  if ( v9 >= v16 && !result )
  {
LABEL_19:
    v18 = 0;
    if ( v16 < v9 )
      v18 = -1;
  }
  if ( v18 )
    return result;
  result = (unsigned __int16 *)((char *)v12 - v7 - 24);
  if ( (int)result < 0 )
    return result;
  v19 = 0;
  Model = (void *)Resource_getModel(Resource, (sead__SafeString *)a2, 6, 4, 0, 4, 0, 0, 1, 0);
  v21 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v22 = ModelWrapper_ctor(v21, Model, 4, 0, 4, 0, 0);
  ModelWrapper_setup(v22, (int)Resource, 0, 0);
  *((_DWORD *)FIELD_U32(v21, 0x0) + 79) |= 8u;
  (*((void (__fastcall **)(const char **))*a2 + 3))(a2);
  (*((void (__fastcall **)(const char **))*a2 + 3))(a2);
  v23 = (char *)a2[1];
  if ( v23 == "RFj02W6J0" )
  {
LABEL_28:
    *((_DWORD *)FIELD_U32(v21, 0x0) + 9) = 3;
  }
  else
  {
    do
    {
      if ( v23[v19] != aRfj02w6j0[v19] )
        break;
      if ( !v23[v19] )
        goto LABEL_28;
      ++v19;
    }
    while ( v19 < 524289 );
  }
  v24 = (float *)(*(int (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 8) + 64))(**(_DWORD **)(a1 + 8));
  v25 = *v24;
  v26 = v24[1];
  v27 = v24[2];
  v28 = v24[3];
  v29 = v24[4];
  v30 = v24[5];
  v24 += 6;
  v69[0] = v25;
  v69[1] = v26;
  v69[2] = v27;
  v69[3] = v28;
  v69[4] = v29;
  v69[5] = v30;
  v31 = v24[1];
  v32 = v24[2];
  v33 = v24[3];
  v34 = v24[4];
  v35 = v24[5];
  v69[6] = *v24;
  v69[7] = v31;
  v69[8] = v32;
  v69[9] = v33;
  v69[10] = v34;
  v70 = v35;
  (*((void (__fastcall **)(const char **))*a2 + 3))(a2);
  (*((void (__fastcall **)(const char **))*a2 + 3))(a2);
  v36 = (char *)a2[1];
  if ( v36 == "RW5J4W5J2" )
  {
LABEL_35:
    v70 = v70 + -1.0;
  }
  else
  {
    for ( i = 0; i < 524289; ++i )
    {
      if ( v36[i] != aRw5j4w5j2[i] )
        break;
      if ( !v36[i] )
        goto LABEL_35;
    }
  }
  (*(void (__fastcall **)(void *, float *))(*(_DWORD *)FIELD_U32(v21, 0x0) + 60))(FIELD_U32(v21, 0x0), v69);
  ModelWrapper_updateModel(v21);
  v38 = FIELD_U32(a1, 696);
  if ( v38 < FIELD_U32(a1, 700) )
  {
    *(_DWORD *)(FIELD_U32(a1, 704) + 4 * v38) = v21;
    ++FIELD_U32(a1, 696);
  }
  v39 = (_DWORD *)operator_new(0x18u);
  v39[1] = v39 + 3;
  *v39 = &BufferedSafeStringBase_char_vtable_probably;
  v39[2] = 10;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)v39);
  *(_BYTE *)v39[1] = 0;
  *v39 = &off_60BD4F50;
  v40 = FIELD_U32(a1, 564);
  if ( v40 < FIELD_U32(a1, 568) )
  {
    *(_DWORD *)(FIELD_U32(a1, 572) + 4 * v40) = v39;
    v40 = FIELD_U32(a1, 564) + 1;
    FIELD_U32(a1, 564) = v40;
  }
  if ( v40 )
    v41 = *(_DWORD *)(FIELD_U32(a1, 572) + 4 * v40 - 4);
  else
    v41 = 0;
  v42 = *(char **)(v41 + 4);
  (*((void (__fastcall **)(const char **))*a2 + 3))(a2);
  v43 = a2[1];
  if ( v42 != v43 )
  {
    v65 = v41;
    (*((void (__fastcall **)(const char **))*a2 + 3))(a2);
    v44 = a2[1];
    v45 = 0;
    while ( v44[v45] )
    {
      if ( !v44[v45 + 1] )
      {
        ++v45;
        break;
      }
      if ( !v44[v45 + 2] )
      {
        v45 += 2;
        break;
      }
      v46 = v45 + 2 <= 0x7FFFF;
      v45 += 3;
      if ( !v46 )
      {
        v45 = 0;
        break;
      }
    }
    v47 = FIELD_U32(v65, 8);
    if ( v45 >= v47 )
      v45 = v47 - 1;
    qmemcpy(v42, v43, v45);
    v42[v45] = 0;
  }
  if ( sub_602265DC(Resource, a2) >= 0 )
  {
    (*((void (__fastcall **)(const char **))*a2 + 3))(a2);
    sub_60224B54((_DWORD *)a1, (int)v21, (int *)a2[1], -1);
  }
  if ( sub_6043AE64(Resource, a2) >= 0 )
  {
    (*((void (__fastcall **)(const char **))*a2 + 3))(a2);
    v48 = (char *)a2[1];
    v66 = &sead__SafeStringBase__vtable;
    v67 = v48;
    v49 = sub_6022EB7C();
    if ( v49 )
    {
      v50 = FIELD_U32(a1, 28);
      if ( v50 < FIELD_U32(a1, 32) )
      {
        *(_DWORD *)(FIELD_U32(a1, 36) + 4 * v50) = v49;
        ++FIELD_U32(a1, 28);
      }
      ++FIELD_U32(a1, 1776);
    }
  }
  if ( sub_6043AED0(Resource, a2) >= 0 )
  {
    (*((void (__fastcall **)(const char **))*a2 + 3))(a2);
    v51 = (char *)a2[1];
    v52 = 0;
    if ( *(ModelWrapper **)(a1 + 8) == v21 )
      v52 = FIELD_U32(a1, 1780) + 5;
    v66 = &sead__SafeStringBase__vtable;
    v67 = v51;
    v53 = sub_6022EC58(a1, v21, &v66, v52);
    if ( v53 )
    {
      v54 = FIELD_U32(a1, 28);
      if ( v54 < FIELD_U32(a1, 32) )
      {
        *(_DWORD *)(FIELD_U32(a1, 36) + 4 * v54) = v53;
        ++FIELD_U32(a1, 28);
      }
      ++FIELD_U32(a1, 1780);
    }
  }
  if ( FIELD_U32(a1, 1764) != 2 )
    goto LABEL_84;
  v55 = FIELD_U32(v21, 0x0);
  (*(void (__fastcall **)(int (***)(), void *))(*(_DWORD *)FIELD_U32(v21, 0x0) + 160))(&v66, FIELD_U32(v21, 0x0));
  ((void (__fastcall *)(int (***)()))v66[3])(&v66);
  ((void (__fastcall *)(int (***)()))v66[3])(&v66);
  if ( v67 == "RW3T0W3G0" )
  {
LABEL_81:
    v58 = *(int (__fastcall **)(void *, int (***)()))(*(_DWORD *)v55 + 84);
    v66 = &sead__SafeStringBase__vtable;
    v67 = "top31";
    FIELD_U32(a1, 772) = v58(v55, &v66);
    v59 = 0;
  }
  else
  {
    for ( j = 0; j < 524289; ++j )
    {
      if ( v67[j] != aRw3t0w3g0[j] )
        break;
      if ( !v67[j] )
        goto LABEL_81;
    }
    (*(void (__fastcall **)(int (***)(), void *))(*(_DWORD *)v55 + 160))(&v66, v55);
    ((void (__fastcall *)(int (***)()))v66[3])(&v66);
    ((void (__fastcall *)(int (***)()))v66[3])(&v66);
    if ( v67 != "RW3J1W3M0" )
    {
      for ( k = 0; k < 524289; ++k )
      {
        if ( v67[k] != aRw3j1w3m0[k] )
          break;
        if ( !v67[k] )
          goto LABEL_82;
      }
      goto LABEL_84;
    }
LABEL_82:
    v59 = 1;
    sub_6017D524(&v66, "top1%d", 1);
    FIELD_U32(a1, 776) = (*(int (__fastcall **)(void *, int (***)()))(*(_DWORD *)v55 + 84))(v55, &v66);
    sub_6017D524(&v66, "top1%d", 2);
    FIELD_U32(a1, 780) = (*(int (__fastcall **)(void *, int (***)()))(*(_DWORD *)v55 + 84))(v55, &v66);
    sub_6017D524(&v66, "top1%d", 3);
    FIELD_U32(a1, 784) = (*(int (__fastcall **)(void *, int (***)()))(*(_DWORD *)v55 + 84))(v55, &v66);
  }
  *(_DWORD *)(a1 + 4 * v59 + 1652) = *FIELD_U32(v21, 0xC);
LABEL_84:
  for ( m = 0; m != 8; ++m )
  {
    (*((void (__fastcall **)(const char **))*a2 + 3))(a2);
    sub_6017D524(&v66, "mt%s", a2[1]);
    ((void (__fastcall *)(int (***)()))v66[3])(&v66);
    v61 = v67;
    v62 = 0;
    while ( v67[v62] )
    {
      if ( !v67[v62 + 1] )
      {
        ++v62;
        break;
      }
      if ( !v67[v62 + 2] )
      {
        v62 += 2;
        break;
      }
      v46 = v62 + 2 <= 0x7FFFF;
      v62 += 3;
      if ( !v46 )
      {
        v62 = 0;
        break;
      }
    }
    if ( v62 < v68 - 1 )
    {
      v67[v62] = m + 97;
      v61[v62 + 1] = 0;
    }
    result = (unsigned __int16 *)(*(int (__fastcall **)(void *, int (***)()))(*(_DWORD *)FIELD_U32(v21, 0x0) + 124))(
                                   FIELD_U32(v21, 0x0),
                                   &v66);
    if ( (int)result >= 0 )
    {
      v63 = sub_60223B9C((_DWORD *)a1, &v66);
      v64 = 0;
      if ( FIELD_U32(a1, 296) > v63 )
        v64 = *(_DWORD *)(FIELD_U32(a1, 304) + 4 * v63);
      result = (unsigned __int16 *)sub_60224A04((_DWORD *)a1, (int)v21, v64);
    }
  }
  return result;
}
