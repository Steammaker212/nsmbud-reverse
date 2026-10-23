/* gsys_assign_ref
 * address: 0x6043D388   size: 1844   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall gsys_assign_ref(int a1, int a2, int a3)
{
  void *v5; // r4
  void *v6; // r0
  void *v7; // r0
  unsigned int v8; // r11
  int v9; // r0
  int v10; // r4
  int v11; // r0
  unsigned int v12; // r5
  int v13; // r0
  int result; // r0
  int v15; // r8
  int v16; // r0
  int *v17; // r5
  int v18; // r7
  int v19; // r4
  int v20; // r6
  int v21; // r2
  unsigned __int16 *v22; // r0
  unsigned int v23; // r6
  size_t v24; // r2
  int v25; // r0
  int v26; // r1
  int v27; // r0
  int *v28; // r5
  int v29; // r7
  int v30; // r4
  int v31; // r6
  int v32; // r2
  unsigned int v33; // r6
  size_t v34; // r2
  int v35; // r1
  int v36; // r0
  int v37; // r0
  int v38; // r7
  int v39; // r11
  const char *v40; // r6
  size_t v41; // r5
  int v42; // r0
  int v43; // r1
  int *v44; // r9
  int v45; // r2
  int v46; // r3
  unsigned __int16 *v47; // r0
  size_t v48; // r8
  size_t v49; // r2
  int v50; // r0
  int v51; // r1
  int v52; // r7
  int v53; // r11
  const char *v54; // r6
  size_t v55; // r5
  int v56; // r0
  int v57; // r1
  int *v58; // r9
  int v59; // r2
  int v60; // r3
  size_t v61; // r8
  size_t v62; // r2
  int v63; // r1
  int v64; // [sp+8h] [bp-90h]
  int v65; // [sp+Ch] [bp-8Ch]
  int *v66; // [sp+10h] [bp-88h]
  int *v68; // [sp+14h] [bp-84h]
  char v69[4]; // [sp+18h] [bp-80h] BYREF
  int v70; // [sp+1Ch] [bp-7Ch]
  int v71; // [sp+24h] [bp-74h] BYREF
  unsigned int v72; // [sp+28h] [bp-70h]
  int v73; // [sp+2Ch] [bp-6Ch]
  int v74; // [sp+30h] [bp-68h]
  int v75; // [sp+34h] [bp-64h]
  int v76; // [sp+38h] [bp-60h]
  int v77; // [sp+3Ch] [bp-5Ch]
  int v78; // [sp+40h] [bp-58h]
  int v79; // [sp+44h] [bp-54h]
  int v80; // [sp+48h] [bp-50h]
  int v81; // [sp+4Ch] [bp-4Ch]
  int v82; // [sp+50h] [bp-48h]
  int v83; // [sp+54h] [bp-44h]
  int v84; // [sp+58h] [bp-40h]
  int v85; // [sp+5Ch] [bp-3Ch]
  int v86; // [sp+60h] [bp-38h]
  int v87; // [sp+64h] [bp-34h]
  int v88; // [sp+68h] [bp-30h]
  int v89; // [sp+6Ch] [bp-2Ch]
  int v90; // [sp+70h] [bp-28h]

  v5 = (void *)(a1 + 4);
  if ( FIELD_U32(a1, 124) )
  {
    sub_60873388(a1 + 4, FIELD_U32(dword_60CCFC8C, 24));
    sub_60913CF0(a1 + 116);
  }
  v6 = *(void **)(a1 + 76);
  if ( v6 )
    operator_delete(v6);
  v7 = *(void **)(a1 + 100);
  if ( v7 )
    operator_delete(v7);
  FIELD_U16(a1, 68) = 0;
  FIELD_U32(a1, 64) = 0;
  FIELD_U32(a1, 60) = 0;
  FIELD_U32(a1, 56) = 0;
  FIELD_U32(a1, 52) = 0;
  FIELD_U32(a1, 48) = 0;
  FIELD_U32(a1, 72) = 0;
  FIELD_U32(a1, 76) = 0;
  memset(v5, 0, 41);
  FIELD_U32(a1, 80) = 0;
  FIELD_U32(a1, 84) = 0;
  FIELD_U32(a1, 88) = 0;
  FIELD_U32(a1, 92) = 0;
  FIELD_U32(a1, 96) = 0;
  FIELD_U32(a1, 100) = 0;
  FIELD_U32(a1, 144) = 0;
  v71 = a2;
  v74 = 0;
  v75 = 8;
  v76 = 0;
  v77 = -1;
  v78 = 0;
  v79 = 8;
  v80 = 0;
  v81 = -1;
  v82 = 0;
  v83 = 8;
  v84 = 0;
  v85 = -1;
  v86 = 0;
  v87 = 8;
  v88 = 0;
  v89 = -1;
  v90 = 1;
  v72 = 0;
  v73 = 0;
  sub_60872C5C(&v71);
  v8 = v72;
  v9 = operator_new_8DE2C8(v72, a3, 8);
  sub_60872D78(a1 + 4, &v71, v9, v8);
  v10 = sub_60872F48(a1 + 4, FIELD_U32(dword_60CCFC8C, 24));
  if ( v10 )
  {
    v11 = sub_60872EDC(a1 + 4, FIELD_U32(dword_60CCFC8C, 24));
    sub_60913D88(a1 + 116, v10, a3, v11, 2);
    sub_60913A6C(v69, a1 + 116, 0);
    sub_60913F34(a1 + 116, a1 + 152);
    sub_608732C4(a1 + 4, FIELD_U32(dword_60CCFC8C, 24), a1 + 152, v70, v10);
  }
  FIELD_U32(a1, 144) += v10 + v8;
  v71 = a1 + 4;
  v74 = 0;
  v75 = 8;
  v76 = 0;
  v77 = -1;
  v78 = 0;
  v79 = 8;
  v80 = 0;
  v81 = -1;
  v82 = 0;
  v83 = 8;
  v84 = 0;
  v85 = -1;
  v72 = 0;
  v73 = 0;
  sub_6087371C(&v71);
  v12 = v72;
  v13 = operator_new_8DE2C8(v72, a3, 8);
  sub_608737E4(a1 + 80, &v71, v13, v12);
  FIELD_U32(a1, 144) += v12;
  FIELD_U32(a1, 104) = 1;
  FIELD_U8(a1, 108) = 1;
  result = a2;
  v15 = FIELD_U32(a2, 32);
  if ( !v15 )
    return result;
  v16 = FIELD_U16(v15, 12);
  v17 = (int *)(v15 + 8 + 16 * v16);
  v18 = *v17;
  if ( FIELD_U32(v15, 8) < *v17 )
  {
    v19 = v15 + 8;
    do
    {
      v20 = 0;
      if ( (unsigned int)(v18 >> 3) <= 0xF )
        v20 = ((unsigned __int8)aGsysAssignType[15 - (v18 >> 3)] >> (v18 & 7)) & 1;
      v21 = *(_DWORD *)(v19 + 16 * v16);
      v16 = *(unsigned __int16 *)(v19 + 16 * v16 + 2 * v20 + 4);
      v17 = (int *)(v19 + 16 * v16);
      v18 = *v17;
    }
    while ( v21 < *v17 );
  }
  v22 = (unsigned __int16 *)v17[2];
  v23 = *v22;
  v24 = v23;
  if ( v23 >= 0x10 )
    v24 = 16;
  if ( v24 )
  {
    v25 = memcmp(v22 + 1, "gsys_assign_type", v24);
    v26 = v25;
    if ( !v25 )
      v26 = 1;
    if ( v23 > 0x10 || v25 )
      goto LABEL_26;
  }
  else if ( v23 > 0x10 )
  {
    goto LABEL_27;
  }
  v26 = 0;
  if ( v23 < 0x10 )
    v26 = -1;
LABEL_26:
  if ( v26 )
    goto LABEL_27;
  v36 = (int)v17 - v15 - 24;
  if ( v36 >> 4 == -1 )
    goto LABEL_27;
  v37 = FIELD_U32(a2, 24) + 40 * (v36 >> 4);
  if ( !v37 )
    goto LABEL_27;
  v38 = 0;
  v66 = (int *)(v37 + 8);
  v64 = 1;
  do
  {
    v39 = *v66;
    if ( !*v66 )
      goto LABEL_67;
    v40 = off_60BFAA54[v38];
    v41 = strlen(v40);
    v42 = FIELD_U16(v39, 12);
    v44 = (int *)(v39 + 8 + 16 * v42);
    v43 = *v44;
    if ( FIELD_U32(v39, 8) < *v44 )
    {
      do
      {
        v45 = 0;
        if ( v41 > v43 >> 3 )
          v45 = ((unsigned __int8)v40[v41 + ~(v43 >> 3)] >> (v43 & 7)) & 1;
        v46 = *(_DWORD *)(v39 + 8 + 16 * v42);
        v42 = *(unsigned __int16 *)(v39 + 8 + 16 * v42 + 2 * v45 + 4);
        v44 = (int *)(v39 + 8 + 16 * v42);
        v43 = *v44;
      }
      while ( v46 < *v44 );
    }
    v47 = (unsigned __int16 *)v44[2];
    v48 = *v47;
    v49 = v48;
    if ( v41 < v48 )
      v49 = v41;
    if ( v49 )
    {
      v50 = memcmp(v47 + 1, v40, v49);
      v51 = 1;
      if ( v50 )
        v51 = v50;
      if ( v41 < v48 || v50 )
        goto LABEL_64;
    }
    else if ( v41 < v48 )
    {
      goto LABEL_67;
    }
    v51 = 0;
    if ( v48 < v41 )
      v51 = -1;
LABEL_64:
    if ( !v51 && (int *)((char *)v44 - v39 - 24) != (int *)-16 )
    {
      v64 |= 1 << v38;
      FIELD_U32(a1, 104) = v64;
    }
LABEL_67:
    ++v38;
  }
  while ( v38 != 22 );
  result = a2;
  v15 = FIELD_U32(a2, 32);
  if ( !v15 )
    return result;
LABEL_27:
  v27 = FIELD_U16(v15, 12);
  v28 = (int *)(v15 + 8 + 16 * v27);
  v29 = *v28;
  if ( FIELD_U32(v15, 8) < *v28 )
  {
    v30 = v15 + 8;
    do
    {
      v31 = 0;
      if ( (unsigned int)(v29 >> 3) <= 0x14 )
        v31 = ((unsigned __int8)aGsysAssignVari[20 - (v29 >> 3)] >> (v29 & 7)) & 1;
      v32 = *(_DWORD *)(v30 + 16 * v27);
      v27 = *(unsigned __int16 *)(v30 + 16 * v27 + 2 * v31 + 4);
      v28 = (int *)(v30 + 16 * v27);
      v29 = *v28;
    }
    while ( v32 < *v28 );
  }
  result = v28[2];
  v33 = *(unsigned __int16 *)result;
  v34 = v33;
  if ( v33 >= 0x15 )
    v34 = 21;
  if ( !v34 )
  {
    if ( v33 > 0x15 )
      return result;
    goto LABEL_41;
  }
  result = memcmp((const void *)(result + 2), "gsys_assign_variation", v34);
  v35 = result;
  if ( !result )
    v35 = 1;
  if ( v33 <= 0x15 && !result )
  {
LABEL_41:
    v35 = 0;
    if ( v33 < 0x15 )
      v35 = -1;
  }
  if ( !v35 )
  {
    result = (int)v28 - v15 - 24;
    if ( result >> 4 != -1 )
    {
      result = FIELD_U32(a2, 24) + 40 * (result >> 4);
      if ( result )
      {
        v52 = 0;
        v68 = (int *)(result + 8);
        v65 = 1;
        do
        {
          result = (int)v68;
          v53 = *v68;
          if ( *v68 )
          {
            v54 = off_60BFAA44[v52];
            v55 = strlen(v54);
            v56 = FIELD_U16(v53, 12);
            v58 = (int *)(v53 + 8 + 16 * v56);
            v57 = *v58;
            if ( FIELD_U32(v53, 8) < *v58 )
            {
              do
              {
                v59 = 0;
                if ( v55 > v57 >> 3 )
                  v59 = ((unsigned __int8)v54[v55 + ~(v57 >> 3)] >> (v57 & 7)) & 1;
                v60 = *(_DWORD *)(v53 + 8 + 16 * v56);
                v56 = *(unsigned __int16 *)(v53 + 8 + 16 * v56 + 2 * v59 + 4);
                v58 = (int *)(v53 + 8 + 16 * v56);
                v57 = *v58;
              }
              while ( v60 < *v58 );
            }
            result = v58[2];
            v61 = *(unsigned __int16 *)result;
            v62 = v61;
            if ( v55 < v61 )
              v62 = v55;
            if ( v62 )
            {
              result = memcmp((const void *)(result + 2), v54, v62);
              v63 = 1;
              if ( result )
                v63 = result;
              if ( v55 >= v61 && !result )
              {
LABEL_87:
                v63 = 0;
                if ( v61 < v55 )
                  v63 = -1;
              }
              if ( !v63 )
              {
                result = (int)v58 - v53 - 24;
                if ( result != -16 )
                {
                  result = v65 | (1 << v52);
                  v65 = result;
                  FIELD_U8(a1, 108) = result;
                }
              }
              goto LABEL_92;
            }
            if ( v55 >= v61 )
              goto LABEL_87;
          }
LABEL_92:
          ++v52;
        }
        while ( v52 != 4 );
      }
    }
  }
  return result;
}
