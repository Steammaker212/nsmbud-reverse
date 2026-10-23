/* sub_6078DDAC
 * address: 0x6078DDAC   size: 976   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6078DDAC(int a1)
{
  int v2; // r5
  int result; // r0
  int v4; // r8
  int v5; // r7
  float v6; // s6
  int v7; // r0
  bool v8; // zf
  int v9; // r0
  bool v10; // zf
  int v11; // r6
  float v12; // r9
  float v13; // r4
  int v14; // r8
  int v15; // r6
  int v16; // t1
  int v17; // r8
  int v18; // r2
  unsigned __int8 *v19; // r10
  size_t v20; // r6
  float v21; // r6
  int v22; // r0
  int v23; // r1
  int *v24; // r9
  int v25; // r2
  int v26; // r3
  unsigned __int16 *v27; // r0
  size_t v28; // r4
  size_t v29; // r2
  int v30; // r0
  int v31; // r1
  int v32; // r0
  float v33; // s24
  float v34; // s20
  float v35; // s16
  float v36; // s16
  float v37; // s20
  float v38; // s18
  float v39; // s24
  float v40; // s22
  float v41; // s26
  float v42; // s16
  float v43; // s17
  float v44; // s0
  float v45; // s22
  float v46; // s19
  float v47; // s18
  float v48; // s0
  float v49; // s2
  float v50; // s2
  float v51; // s6
  float v52; // s4
  float v53; // s12
  float v54; // s14
  float v55; // s3
  float v56; // s1
  float v57; // s2
  float v58; // s0
  float v59; // s5
  int v60; // [sp+4h] [bp-B4h]
  float v61; // [sp+8h] [bp-B0h]
  float v62; // [sp+Ch] [bp-ACh]
  float v63; // [sp+10h] [bp-A8h]
  _DWORD v64[3]; // [sp+14h] [bp-A4h] BYREF
  float v65[3]; // [sp+20h] [bp-98h] BYREF
  float v66; // [sp+2Ch] [bp-8Ch]
  float v67; // [sp+30h] [bp-88h]
  float v68; // [sp+34h] [bp-84h]
  float v69; // [sp+38h] [bp-80h]
  float v70; // [sp+3Ch] [bp-7Ch]
  float v71; // [sp+40h] [bp-78h]
  float v72; // [sp+44h] [bp-74h]
  float v73; // [sp+48h] [bp-70h]
  float v74; // [sp+4Ch] [bp-6Ch]

  v2 = **(_DWORD **)(a1 + 24);
  result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 92))(v2);
  v4 = result;
  if ( result >= 1 )
  {
    v5 = 0;
    v60 = result;
    while ( 1 )
    {
      (*(void (__fastcall **)(int, int, float *, _DWORD *))(*(_DWORD *)v2 + 100))(v2, v5, v65, v64);
      if ( v5 != FIELD_U32(a1, 312) )
        break;
      v6 = FIELD_F32(a1, 516);
      v66 = v66 * v6;
      v70 = v70 * v6;
      v74 = v74 * v6;
LABEL_42:
      result = (*(int (__fastcall **)(int, int, float *, _DWORD *))(*(_DWORD *)v2 + 96))(v2, v5++, v65, v64);
      if ( v5 == v4 )
        return result;
    }
    v7 = FIELD_U32(a1, 352);
    v8 = v5 == v7;
    if ( v5 != v7 )
      v8 = v5 == FIELD_U32(a1, 364);
    if ( !v8 )
      goto LABEL_42;
    v9 = FIELD_U32(a1, 300);
    v10 = v9 == 3;
    if ( v9 == 3 )
      v10 = (FIELD_U8(a1, 202) & 0x80) == 0;
    if ( !v10 )
      goto LABEL_42;
    v11 = FIELD_U32(a1, 288);
    v12 = v66;
    v13 = v74;
    v14 = *(_DWORD *)(FIELD_U32(a1, 16) + 20);
    v16 = FIELD_U32(v11, 40);
    v15 = v11 + 40;
    v61 = v70;
    (*(void (__fastcall **)(int))(v16 + 12))(v15);
    v17 = FIELD_U32(v14, 48);
    v18 = -1;
    v63 = v12;
    v62 = v13;
    if ( v17 )
    {
      v19 = *(unsigned __int8 **)(v15 + 4);
      if ( v19 )
        v20 = strlen(*(const char **)(v15 + 4));
      else
        v20 = 0;
      v22 = FIELD_U16(v17, 12);
      v24 = (int *)(v17 + 8 + 16 * v22);
      v23 = *v24;
      if ( FIELD_U32(v17, 8) < *v24 )
      {
        do
        {
          v25 = 0;
          if ( v20 > v23 >> 3 )
            v25 = (v19[v20 + ~(v23 >> 3)] >> (v23 & 7)) & 1;
          v26 = *(_DWORD *)(v17 + 8 + 16 * v22);
          v22 = *(unsigned __int16 *)(v17 + 8 + 16 * v22 + 2 * v25 + 4);
          v24 = (int *)(v17 + 8 + 16 * v22);
          v23 = *v24;
        }
        while ( v26 < *v24 );
      }
      v27 = (unsigned __int16 *)v24[2];
      v28 = *v27;
      v29 = v28;
      if ( v20 < v28 )
        v29 = v20;
      if ( v29 )
      {
        v30 = memcmp(v27 + 1, v19, v29);
        v31 = 1;
        if ( v30 )
          v31 = v30;
        if ( v20 < v28 )
        {
          v18 = -1;
          goto LABEL_36;
        }
        v18 = -1;
        if ( v30 )
        {
LABEL_36:
          v21 = v61;
          if ( !v31 )
            v18 = ((int)v24 - v17 - 24) >> 4;
          goto LABEL_38;
        }
LABEL_32:
        v31 = 0;
        if ( v28 < v20 )
          v31 = -1;
        goto LABEL_36;
      }
      v18 = -1;
      if ( v20 >= v28 )
        goto LABEL_32;
      v21 = v61;
    }
    else
    {
      v21 = v61;
    }
LABEL_38:
    v32 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(FIELD_U32(a1, 16) + 20) + 40) + 120 * v18 + 32) + 24)
        + 96 * v5;
    v33 = FIELD_F32(v32, 68);
    v34 = FIELD_F32(v32, 72);
    v35 = FIELD_F32(v32, 76);
    if ( (FIELD_U8(v32, 53) & 0x70) != 0 )
    {
      v36 = v35 * 0.5;
      v37 = v34 * 0.5;
      v38 = cosf(v36);
      v39 = v33 * 0.5;
      v40 = cosf(v37);
      v41 = cosf(v39);
      v42 = sinf(v36);
      v43 = v40 * v42;
      v44 = sinf(v37);
      v45 = v38 * v40;
      v46 = v42 * v44;
      v47 = v38 * v44;
      v48 = sinf(v39);
      v35 = (float)(v41 * v43) - (float)(v47 * v48);
      v34 = (float)(v43 * v48) + (float)(v41 * v47);
      v33 = (float)(v45 * v48) - (float)(v41 * v46);
      v49 = (float)(v46 * v48) + (float)(v45 * v41);
    }
    else
    {
      v49 = FIELD_F32(v32, 80);
    }
    v50 = v49 + v49;
    v4 = v60;
    v51 = v34 * (float)(v34 + v34);
    v52 = v35 * (float)(v35 + v35);
    v53 = v35 * v50;
    v54 = v34 * (float)(v33 + v33);
    v55 = v50 * v34;
    v56 = v35 * (float)(v33 + v33);
    v57 = v50 * v33;
    v58 = v35 * (float)(v34 + v34);
    v65[0] = (float)(1.0 - v51) - v52;
    v65[1] = v54 - v53;
    v59 = 1.0 - (float)(v33 * (float)(v33 + v33));
    v65[2] = v55 + v56;
    v67 = v53 + v54;
    v68 = v59 - v52;
    v69 = v58 - v57;
    v71 = v56 - v55;
    v72 = v58 + v57;
    v73 = v59 - v51;
    v66 = v63;
    v70 = v21;
    v74 = v62;
    v64[0] = 1065353216;
    v64[1] = 1065353216;
    v64[2] = 1065353216;
    goto LABEL_42;
  }
  return result;
}
