/* sub_6041DD00
 * address: 0x6041DD00   size: 1260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6041DD00(_DWORD *a1, int a2, int a3, int a4)
{
  int v6; // r9
  int v7; // r8
  int v8; // r10
  int v9; // r0
  int *v10; // r5
  int v11; // r7
  int v12; // r4
  int v13; // r6
  int v14; // r2
  unsigned __int16 *v15; // r0
  unsigned int v16; // r7
  size_t v17; // r2
  int v18; // r0
  int v19; // r1
  int v20; // r0
  int v21; // r4
  _DWORD *v22; // r5
  int v23; // r0
  int v24; // r2
  unsigned int v25; // r3
  int v26; // r1
  _DWORD *v27; // r7
  int v29; // r6
  int v30; // r8
  void *v31; // r0
  void *v32; // r5
  unsigned int v33; // r10
  _DWORD *v34; // r7
  int v35; // r0
  _DWORD *v36; // r5
  _DWORD *v37; // r0
  int v38; // r6
  int v39; // r0
  int i; // r1
  int v41; // r3
  bool v42; // nf
  int v43; // r4
  int v44; // r0
  int v45; // r1
  int *v46; // r5
  int v47; // r2
  int v48; // r3
  unsigned __int16 *v49; // r0
  unsigned int v50; // r6
  size_t v51; // r2
  int v52; // r0
  int v53; // r1
  int v54; // r0
  int v55; // r0
  _QWORD *v56; // r1
  _DWORD *v59; // [sp+18h] [bp-A0h]
  int v61; // [sp+28h] [bp-90h]
  int v62; // [sp+2Ch] [bp-8Ch]
  _DWORD *v63; // [sp+30h] [bp-88h] BYREF
  _DWORD v64[2]; // [sp+34h] [bp-84h] BYREF
  int (**v65)(); // [sp+3Ch] [bp-7Ch] BYREF
  int v66; // [sp+40h] [bp-78h]

  v59 = a1 + 35;
  v61 = dword_60C9BAF4;
  sub_6086EDE8(a2, sub_6041E21C);
  v6 = FIELD_U32(a2, 48);
  v7 = FIELD_U32(a2, 40);
  v8 = 0;
  if ( !v6 )
    goto LABEL_21;
  v9 = FIELD_U16(v6, 12);
  v10 = (int *)(v6 + 8 + 16 * v9);
  v11 = *v10;
  if ( FIELD_U32(v6, 8) < *v10 )
  {
    v12 = v6 + 8;
    do
    {
      v13 = 0;
      if ( (unsigned int)(v11 >> 3) <= 2 )
        v13 = ((unsigned __int8)aMii[2 - (v11 >> 3)] >> (v11 & 7)) & 1;
      v14 = *(_DWORD *)(v12 + 16 * v9);
      v9 = *(unsigned __int16 *)(v12 + 16 * v9 + 2 * v13 + 4);
      v10 = (int *)(v12 + 16 * v9);
      v11 = *v10;
    }
    while ( v14 < *v10 );
  }
  v15 = (unsigned __int16 *)v10[2];
  v16 = *v15;
  v17 = v16;
  if ( v16 >= 3 )
    v17 = 3;
  if ( v17 )
  {
    v18 = memcmp(v15 + 1, "Mii", v17);
    v19 = v18;
    if ( !v18 )
      v19 = 1;
    if ( v16 > 3 || v18 )
      goto LABEL_18;
  }
  else if ( v16 > 3 )
  {
    goto LABEL_21;
  }
  v19 = 0;
  if ( v16 < 3 )
    v19 = -1;
LABEL_18:
  if ( !v19 )
  {
    v20 = (int)v10 - v6 - 24;
    v8 = v7 + 120 * (v20 >> 4);
    if ( v20 >> 4 == -1 )
      v8 = 0;
  }
LABEL_21:
  if ( v8 )
    v7 = v8;
  v21 = FIELD_U16(v7, 106);
  if ( FIELD_U16(v7, 106) )
  {
    v22 = a1 + 1155;
    v23 = sub_608DE334(4 * v21, a4, 4);
    v24 = 32;
    v25 = 0;
    if ( v23 )
    {
      *v22 = v21;
      a1[1156] = v23;
    }
    v26 = 0;
    do
    {
      v27 = (_DWORD *)a1[1156];
      if ( *v22 > v25++ )
        v27 = (_DWORD *)((char *)v27 + v26);
      v26 += 4;
      v29 = *(_DWORD *)(FIELD_U32(v7, 48) + v24);
      v24 += 112;
      *v27 = FIELD_U32(v29, 16);
    }
    while ( v21 != v25 );
  }
  v62 = v7;
  v30 = FIELD_U16(v7, 108);
  if ( v30 )
  {
    v31 = (void *)sub_608DE334(8 * v30, a4, 4);
    v32 = v31;
    if ( v31 )
    {
      memset(v31, 255, 8 * v30);
      a1[1157] = v30;
      a1[1158] = v32;
    }
    v33 = 0;
    while ( 1 )
    {
      v34 = (_DWORD *)(FIELD_U32(v62, 64) + 184 * v33);
      v35 = v34[4];
      v65 = &sead__SafeStringBase__vtable;
      v66 = v35 + 2;
      v36 = *(_DWORD **)(v61 + 832);
      if ( !v36 )
        goto LABEL_67;
      sead__SafeStringBase__assureTerminationImpl_const();
LABEL_40:
      ((void (__fastcall *)(int (***)()))v65[3])(&v65);
      v38 = v66;
      (*(void (__fastcall **)(_DWORD *))(v36[4] + 12))(v36 + 4);
      v39 = v36[5];
      if ( v38 != v39 )
      {
        for ( i = 0; i < 0x80000; ++i )
        {
          v41 = *(unsigned __int8 *)(v66 + i);
          v42 = v41 - *(unsigned __int8 *)(v39 + i) < 0;
          if ( v41 != *(unsigned __int8 *)(v39 + i) )
          {
            v37 = v36 + 2;
            if ( v42 )
              v37 = v36 + 1;
            v36 = (_DWORD *)*v37;
            if ( *v37 )
            {
              ((void (__fastcall *)(int (***)()))v65[3])(&v65);
              goto LABEL_40;
            }
            goto LABEL_67;
          }
          if ( !*(_BYTE *)(v66 + i) )
            break;
        }
        if ( !v36 )
          goto LABEL_67;
      }
      v43 = v34[20];
      if ( !v43 )
        goto LABEL_67;
      v44 = FIELD_U16(v43, 12);
      v46 = (int *)(v43 + 8 + 16 * v44);
      v45 = *v46;
      if ( FIELD_U32(v43, 8) < *v46 )
      {
        do
        {
          v47 = 0;
          if ( (unsigned int)(v45 >> 3) <= 2 )
            v47 = ((unsigned __int8)aA0_0[2 - (v45 >> 3)] >> (v45 & 7)) & 1;
          v48 = *(_DWORD *)(v43 + 8 + 16 * v44);
          v44 = *(unsigned __int16 *)(v43 + 8 + 16 * v44 + 2 * v47 + 4);
          v46 = (int *)(v43 + 8 + 16 * v44);
          v45 = *v46;
        }
        while ( v48 < *v46 );
      }
      v49 = (unsigned __int16 *)v46[2];
      v50 = *v49;
      v51 = v50;
      if ( v50 >= 3 )
        v51 = 3;
      if ( v51 )
        break;
      if ( v50 <= 3 )
        goto LABEL_60;
LABEL_67:
      if ( ++v33 == v30 )
        goto LABEL_68;
    }
    v52 = memcmp(v49 + 1, "_a0", v51);
    v53 = 1;
    if ( v52 )
      v53 = v52;
    if ( v50 <= 3 && !v52 )
    {
LABEL_60:
      v53 = 0;
      if ( v50 < 3 )
        v53 = -1;
    }
    if ( !v53 )
    {
      v54 = (int)v46 - v43 - 24;
      if ( v54 >> 4 != -1 )
      {
        v55 = v54 >> 4;
        v56 = (_QWORD *)a1[1158];
        if ( a1[1157] > v33 )
          v56 += v33;
        *v56 = *(_QWORD *)(v34[36] + 8 * v55);
        *(_QWORD *)(v34[36] + 8 * v55) = FIELD_U64(v61, 184);
      }
    }
    goto LABEL_67;
  }
LABEL_68:
  v64[0] = a1;
  v64[1] = nn__mii__CharInfoAccessor__ctor(&v65, a3);
  v63 = a1;
  sub_60998758(v62, v59, sub_6041E408, v64, sub_6041EAB4, &v63);
  a1[1154] = v62;
  return 4616;
}
