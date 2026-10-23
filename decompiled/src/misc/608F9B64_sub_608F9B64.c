/* sub_608F9B64
 * address: 0x608F9B64   size: 2400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F9B64(int a1, int a2, int a3)
{
  int v3; // r4
  int v6; // r9
  char *v7; // r5
  char *v8; // r6
  signed int v9; // r7
  bool v10; // cc
  int v11; // r4
  char *v12; // r7
  int v13; // r9
  signed int v14; // r5
  int v15; // r0
  char *v16; // r7
  int v17; // r4
  signed int v18; // r5
  int v19; // r0
  char *v20; // r7
  int v21; // r4
  int v22; // r0
  char *v23; // r0
  signed int v24; // r5
  int v25; // r0
  char *v26; // r7
  int v27; // r4
  signed int v28; // r5
  int v29; // r0
  int v30; // r5
  int v31; // r5
  int v32; // t1
  const char *v33; // r2
  char *v34; // r7
  int v35; // r4
  const char *v36; // r2
  char *v37; // r0
  signed int v38; // r5
  const char *v39; // r2
  char *v40; // r7
  int v41; // r4
  signed int v42; // r5
  int v43; // r0
  int v44; // r0
  char *v45; // r7
  int v46; // r4
  int v47; // r0
  char *v48; // r0
  signed int v49; // r5
  int v50; // r0
  char *v51; // r5
  int v52; // r4
  int v53; // r0
  int v54; // r0
  int result; // r0
  int v56; // [sp+0h] [bp-C0h]
  _DWORD *v57; // [sp+4h] [bp-BCh]
  int (**v58)(); // [sp+8h] [bp-B8h] BYREF
  char *v59; // [sp+Ch] [bp-B4h]
  int (**v60)(); // [sp+10h] [bp-B0h] BYREF
  char *v61; // [sp+14h] [bp-ACh]
  int v62; // [sp+18h] [bp-A8h]
  int v63; // [sp+1Ch] [bp-A4h] BYREF

  v3 = a1;
  v6 = 0;
  if ( (FIELD_U8(a1, 120) & 1) != 0 )
  {
    v6 = a1 + 84;
    sead__CriticalSection__lock(a1 + 84);
  }
  v58 = &sead__SafeStringBase__vtable;
  v59 = &byte_60ABC94D;
  v61 = (char *)&v63;
  v60 = &BufferedSafeStringBase_char_vtable_probably;
  v62 = 128;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v60);
  v60 = &off_60C5C94C;
  v7 = v61;
  ((void (__fastcall *)(int (***)()))off_60BC0244)(&v58);
  v8 = v59;
  v56 = a2;
  v57 = (_DWORD *)v3;
  if ( v7 != v59 )
  {
    ((void (__fastcall *)(int (***)()))v58[3])(&v58);
    v9 = 0;
    while ( v59[v9] )
    {
      if ( !v59[v9 + 1] )
      {
        ++v9;
        break;
      }
      if ( !v59[v9 + 2] )
      {
        v9 += 2;
        break;
      }
      v10 = v9 + 2 <= 0x7FFFF;
      v9 += 3;
      if ( !v10 )
      {
        v9 = 0;
        break;
      }
    }
    if ( v9 >= v62 )
      v9 = v62 - 1;
    qmemcpy(v7, v8, v9);
    v7[v9] = 0;
    a2 = v56;
  }
  v60 = &off_60BD95A8;
  if ( a3 > 0 )
  {
    v11 = v6;
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v60);
    v12 = v61;
    v13 = 0;
    while ( v61[v13] )
    {
      if ( !v61[v13 + 1] )
      {
        ++v13;
        break;
      }
      if ( !v61[v13 + 2] )
      {
        v13 += 2;
        break;
      }
      v10 = v13 + 2 <= 0x7FFFF;
      v13 += 3;
      if ( !v10 )
      {
        v13 = 0;
        break;
      }
    }
    v14 = a3;
    if ( v62 - v13 <= a3 )
      v14 = v62 - v13 - 1;
    if ( v14 >= 1 )
      memset(&v61[v13], 32, v14);
    v15 = v14 + v13;
    v6 = v11;
    v12[v15] = 0;
    a2 = v56;
    v3 = (int)v57;
  }
  (*(void (__fastcall **)(int))(FIELD_U32(v3, 16) + 12))(v3 + 16);
  sub_608FDE40((int)&v60, "- name: \"%s\"\n", *(const char **)(v3 + 20));
  sub_609056D4(a2, &v60);
  *v61 = 0;
  if ( a3 >= 1 )
  {
    ((void (__fastcall *)(int (***)()))v60[3])(&v60);
    v16 = v61;
    v17 = 0;
    while ( v61[v17] )
    {
      if ( !v61[v17 + 1] )
      {
        ++v17;
        break;
      }
      if ( !v61[v17 + 2] )
      {
        v17 += 2;
        break;
      }
      v10 = v17 + 2 <= 0x7FFFF;
      v17 += 3;
      if ( !v10 )
      {
        v17 = 0;
        break;
      }
    }
    v18 = a3;
    if ( v62 - v17 <= a3 )
      v18 = v62 - v17 - 1;
    if ( v18 >= 1 )
      memset(&v61[v17], 32, v18);
    v16[v18 + v17] = 0;
    a2 = v56;
    v3 = (int)v57;
  }
  v19 = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 48))(v3);
  sub_608FDE40((int)&v60, "  start_address: 0x%08X\n", v19);
  sub_609056D4(a2, &v60);
  *v61 = 0;
  if ( a3 < 1 )
  {
    v22 = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 52))(v3);
    sub_608FDE40((int)&v60, "  end_address: 0x%08X\n", v22);
    sub_609056D4(a2, &v60);
    v23 = v61;
  }
  else
  {
    ((void (__fastcall *)(int (***)()))v60[3])(&v60);
    v20 = v61;
    v21 = 0;
    while ( v61[v21] )
    {
      if ( !v61[v21 + 1] )
      {
        ++v21;
        break;
      }
      if ( !v61[v21 + 2] )
      {
        v21 += 2;
        break;
      }
      v10 = v21 + 2 <= 0x7FFFF;
      v21 += 3;
      if ( !v10 )
      {
        v21 = 0;
        break;
      }
    }
    v24 = a3;
    if ( v62 - v21 <= a3 )
      v24 = v62 - v21 - 1;
    if ( v24 >= 1 )
      memset(&v61[v21], 32, v24);
    v20[v24 + v21] = 0;
    v25 = (*(int (__fastcall **)(_DWORD *))(*v57 + 52))(v57);
    sub_608FDE40((int)&v60, "  end_address: 0x%08X\n", v25);
    sub_609056D4(v56, &v60);
    *v61 = 0;
    ((void (__fastcall *)(int (***)()))v60[3])(&v60);
    v26 = v61;
    v27 = 0;
    while ( v61[v27] )
    {
      if ( !v61[v27 + 1] )
      {
        ++v27;
        break;
      }
      if ( !v61[v27 + 2] )
      {
        v27 += 2;
        break;
      }
      v10 = v27 + 2 <= 0x7FFFF;
      v27 += 3;
      if ( !v10 )
      {
        v27 = 0;
        break;
      }
    }
    v28 = a3;
    if ( v62 - v27 <= a3 )
      v28 = v62 - v27 - 1;
    if ( v28 >= 1 )
      memset(&v61[v27], 32, v28);
    v29 = v28 + v27;
    v3 = (int)v57;
    v23 = &v26[v29];
    a2 = v56;
  }
  *v23 = 0;
  v30 = FIELD_U32(v3, 36);
  if ( v30 )
  {
    v32 = FIELD_U32(v30, 16);
    v31 = v30 + 16;
    (*(void (__fastcall **)(int))(v32 + 12))(v31);
    v33 = *(const char **)(v31 + 4);
  }
  else
  {
    v33 = "--";
  }
  sub_608FDE40((int)&v60, "  parent: %s\n", v33);
  sub_609056D4(a2, &v60);
  *v61 = 0;
  if ( a3 < 1 )
  {
    v36 = "Reverse";
    if ( FIELD_U32(v3, 80) == 1 )
      v36 = "Forward";
    sub_608FDE40((int)&v60, "  direction: %s\n", v36);
    sub_609056D4(a2, &v60);
    v37 = v61;
  }
  else
  {
    ((void (__fastcall *)(int (***)()))v60[3])(&v60);
    v34 = v61;
    v35 = 0;
    while ( v61[v35] )
    {
      if ( !v61[v35 + 1] )
      {
        ++v35;
        break;
      }
      if ( !v61[v35 + 2] )
      {
        v35 += 2;
        break;
      }
      v10 = v35 + 2 <= 0x7FFFF;
      v35 += 3;
      if ( !v10 )
      {
        v35 = 0;
        break;
      }
    }
    v38 = a3;
    if ( v62 - v35 <= a3 )
      v38 = v62 - v35 - 1;
    if ( v38 >= 1 )
      memset(&v61[v35], 32, v38);
    v34[v38 + v35] = 0;
    v39 = "Reverse";
    if ( v57[20] == 1 )
      v39 = "Forward";
    sub_608FDE40((int)&v60, "  direction: %s\n", v39);
    sub_609056D4(v56, &v60);
    *v61 = 0;
    ((void (__fastcall *)(int (***)()))v60[3])(&v60);
    v40 = v61;
    v41 = 0;
    while ( v61[v41] )
    {
      if ( !v61[v41 + 1] )
      {
        ++v41;
        break;
      }
      if ( !v61[v41 + 2] )
      {
        v41 += 2;
        break;
      }
      v10 = v41 + 2 <= 0x7FFFF;
      v41 += 3;
      if ( !v10 )
      {
        v41 = 0;
        break;
      }
    }
    v42 = a3;
    if ( v62 - v41 <= a3 )
      v42 = v62 - v41 - 1;
    if ( v42 >= 1 )
      memset(&v61[v41], 32, v42);
    v43 = v42 + v41;
    v3 = (int)v57;
    v37 = &v40[v43];
    a2 = v56;
  }
  *v37 = 0;
  v44 = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 56))(v3);
  sub_608FDE40((int)&v60, "  size: %u\n", v44);
  sub_609056D4(a2, &v60);
  *v61 = 0;
  if ( a3 < 1 )
  {
    v47 = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 60))(v3);
    sub_608FDE40((int)&v60, "  free_size: %u\n", v47);
    sub_609056D4(a2, &v60);
    v48 = v61;
  }
  else
  {
    ((void (__fastcall *)(int (***)()))v60[3])(&v60);
    v45 = v61;
    v46 = 0;
    while ( v61[v46] )
    {
      if ( !v61[v46 + 1] )
      {
        ++v46;
        break;
      }
      if ( !v61[v46 + 2] )
      {
        v46 += 2;
        break;
      }
      v10 = v46 + 2 <= 0x7FFFF;
      v46 += 3;
      if ( !v10 )
      {
        v46 = 0;
        break;
      }
    }
    v49 = a3;
    if ( v62 - v46 <= a3 )
      v49 = v62 - v46 - 1;
    if ( v49 >= 1 )
      memset(&v61[v46], 32, v49);
    v45[v49 + v46] = 0;
    v50 = (*(int (__fastcall **)(_DWORD *))(*v57 + 60))(v57);
    sub_608FDE40((int)&v60, "  free_size: %u\n", v50);
    a2 = v56;
    sub_609056D4(v56, &v60);
    *v61 = 0;
    ((void (__fastcall *)(int (***)()))v60[3])(&v60);
    v51 = v61;
    v52 = 0;
    while ( v61[v52] )
    {
      if ( !v61[v52 + 1] )
      {
        ++v52;
        break;
      }
      if ( !v61[v52 + 2] )
      {
        v52 += 2;
        break;
      }
      v10 = v52 + 2 <= 0x7FFFF;
      v52 += 3;
      if ( !v10 )
      {
        v52 = 0;
        break;
      }
    }
    if ( v62 - v52 <= a3 )
      a3 = v62 - v52 - 1;
    if ( a3 >= 1 )
      memset(&v61[v52], 32, a3);
    v53 = a3 + v52;
    v3 = (int)v57;
    v48 = &v51[v53];
  }
  *v48 = 0;
  v54 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v3 + 64))(v3, 4);
  sub_608FDE40((int)&v60, "  max_allocatable_size: %u\n", v54);
  result = sub_609056D4(a2, &v60);
  if ( v6 )
    return sead__CriticalSection__unlock(v6);
  return result;
}
