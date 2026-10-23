/* sub_6083BDB8
 * address: 0x6083BDB8   size: 1312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6083BDB8(int a1, int a2, int a3, const char *a4)
{
  int v4; // r6
  int v7; // r0
  int v8; // r11
  int v9; // r4
  int v10; // r5
  int v11; // r8
  int v12; // r0
  int v13; // r10
  int v14; // r0
  int v15; // r7
  int v16; // r8
  int v17; // r0
  int v18; // r4
  _DWORD *v19; // r6
  int v20; // r5
  int v21; // r8
  int v22; // r9
  char *v23; // r1
  int v24; // r0
  int v25; // r2
  int v26; // r10
  int v27; // r1
  int v28; // r4
  int v29; // r6
  int v30; // r8
  _DWORD *v31; // r7
  int v32; // r1
  int v33; // r7
  int v34; // r6
  int v35; // r9
  int v36; // r8
  int v37; // r4
  int v38; // r0
  int v39; // r7
  int v40; // r0
  int v41; // r4
  int v42; // r6
  int v43; // r0
  int v44; // r7
  int v45; // r0
  int v46; // r4
  int v47; // r6
  int v48; // r1
  int v49; // r7
  int v50; // r6
  int v51; // r9
  int v52; // r8
  int v53; // r4
  size_t v55; // r6
  int v56; // r0
  int v57; // r3
  int *v58; // r7
  int v59; // r2
  int v60; // r7
  int v61; // r4
  unsigned __int16 *v62; // r0
  size_t v63; // r4
  size_t v64; // r2
  int v65; // r0
  int v66; // r1
  int v67; // r0

  v4 = FIELD_U32(a1, 216);
  if ( v4 )
  {
    v7 = FIELD_U32(v4, 376);
    v8 = FIELD_U32(v4, 264);
    v9 = FIELD_U32(v7, 4);
    v10 = FIELD_U32(v7, 104);
    v11 = sub_6083AC24(a2);
    v12 = v8 + v9;
    v13 = v8 + v9 + v10;
    switch ( a3 )
    {
      case 0:
        v14 = FIELD_U32(v4, 376);
        v15 = FIELD_U32(v14, 60);
        if ( v15 < 1 )
          goto LABEL_63;
        v16 = 1 << v11;
        v17 = v9 + FIELD_U32(v14, 64);
        v18 = 0;
        v19 = (_DWORD *)(v8 + v17 + 52);
        while ( (*v19 & v16) == 0 || strncmp(a4, (const char *)(v13 + *(v19 - 13)), *(v19 - 12)) || (int)*(v19 - 1) < 0 )
        {
          ++v18;
          v19 += 23;
          if ( v18 >= v15 )
            goto LABEL_63;
        }
        v20 = *(v19 - 1);
        break;
      case 1:
        v27 = FIELD_U32(v4, 376);
        v28 = FIELD_U32(v27, 68);
        if ( v28 < 1 )
          goto LABEL_63;
        v29 = 0;
        v30 = 1 << v11;
        v31 = (_DWORD *)(v12 + FIELD_U32(v27, 72));
        while ( (v31[14] & v30) == 0 || strncmp(a4, (const char *)(v13 + *v31), v31[1]) || (int)v31[12] < 0 )
        {
          ++v29;
          v31 += 23;
          if ( v29 >= v28 )
            goto LABEL_63;
        }
        v20 = v31[12];
        break;
      case 2:
        v32 = FIELD_U32(v4, 376);
        v33 = FIELD_U32(v32, 52);
        if ( v33 < 1 )
          goto LABEL_63;
        v34 = 0;
        v35 = 1 << v11;
        v36 = 4 * v11;
        v37 = v12 + FIELD_U32(v32, 56);
        while ( FIELD_U8(v37, 100)
             || (FIELD_U32(v37, 68) & v35) == 0
             || strncmp(a4, (const char *)(v13 + *(_DWORD *)v37), FIELD_U32(v37, 4))
             || *(int *)(v36 + v37 + 72) < 0 )
        {
          ++v34;
          v37 += 164;
          if ( v34 >= v33 )
            goto LABEL_63;
        }
        v20 = *(_DWORD *)(v36 + v37 + 72);
        break;
      case 3:
        v38 = FIELD_U32(v4, 376);
        v39 = FIELD_U32(v38, 44);
        if ( v39 < 1 )
          goto LABEL_63;
        v40 = v9 + FIELD_U32(v38, 48);
        v41 = 0;
        v42 = v8 + v40 + 52;
        while ( (*(_DWORD *)(v42 - 4) & (1 << v11)) == 0
             || strncmp(a4, (const char *)(v13 + *(_DWORD *)(v42 - 52)), *(_DWORD *)(v42 - 48))
             || *(int *)(v42 + 4 * v11) < 0 )
        {
          ++v41;
          v42 += 108;
          if ( v41 >= v39 )
            goto LABEL_63;
        }
        v20 = *(_DWORD *)(v42 + 4 * v11);
        break;
      case 4:
        v43 = FIELD_U32(v4, 376);
        v44 = FIELD_U32(v43, 76);
        if ( v44 < 1 )
          goto LABEL_63;
        v45 = v9 + FIELD_U32(v43, 80);
        v46 = 0;
        v47 = v8 + v45 + 48;
        while ( (FIELD_U32(v47, 24) & (1 << v11)) == 0
             || strncmp(a4, (const char *)(v13 + *(_DWORD *)(v47 - 48)), *(_DWORD *)(v47 - 44))
             || *(int *)(v47 + 4 * v11) < 0 )
        {
          ++v46;
          v47 += 108;
          if ( v46 >= v44 )
            goto LABEL_63;
        }
        v20 = *(_DWORD *)(v47 + 4 * v11);
        break;
      case 5:
        v48 = FIELD_U32(v4, 376);
        v49 = FIELD_U32(v48, 52);
        if ( v49 < 1 )
          goto LABEL_63;
        v50 = 0;
        v51 = 1 << v11;
        v52 = 4 * v11;
        v53 = v12 + FIELD_U32(v48, 56);
        while ( FIELD_U8(v53, 100)
             || (FIELD_U32(v53, 68) & v51) == 0
             || strncmp(a4, (const char *)(v13 + *(_DWORD *)v53), FIELD_U32(v53, 4))
             || *(int *)(v52 + v53 + 72) < 0 )
        {
          ++v50;
          v53 += 164;
          if ( v50 >= v49 )
            goto LABEL_63;
        }
        v20 = *(_DWORD *)(v52 + v53 + 72);
        break;
      default:
LABEL_63:
        v20 = -1;
        break;
    }
    return v20;
  }
  v20 = -1;
  v21 = *(_DWORD *)(FIELD_U32(a1, 208) + dword_60B0E42C[a2]);
  if ( !v21 )
    return v20;
  if ( a3 > 5 )
  {
    v24 = FIELD_U32(v21, 88);
    if ( !v24 )
      return v20;
    v25 = 4 * a3 - 24;
    v23 = (char *)&unk_60AF22D0 + v25;
    v22 = *(_DWORD *)(v24 + *(_DWORD *)((char *)&unk_60AF22C8 + v25));
    goto LABEL_17;
  }
  v22 = *(_DWORD *)(v21 + dword_60B0E444[a3]);
  if ( a3 )
  {
    v23 = (char *)&unk_60B0E45C + 4 * a3;
    v24 = v21;
LABEL_17:
    v26 = *(_DWORD *)(v24 + *(_DWORD *)v23);
    if ( !v22 )
      return v20;
    goto LABEL_66;
  }
  v26 = 0;
  if ( !v22 )
    return v20;
LABEL_66:
  if ( a4 )
    v55 = strlen(a4);
  else
    v55 = 0;
  v56 = FIELD_U16(v22, 12);
  v58 = (int *)(v22 + 8 + 16 * v56);
  v57 = *v58;
  if ( FIELD_U32(v22, 8) < *v58 )
  {
    v59 = v22 + 8;
    do
    {
      v60 = 0;
      if ( v55 > v57 >> 3 )
        v60 = ((unsigned __int8)a4[v55 + ~(v57 >> 3)] >> (v57 & 7)) & 1;
      v61 = *(_DWORD *)(v59 + 16 * v56);
      v56 = *(unsigned __int16 *)(v59 + 16 * v56 + 2 * v60 + 4);
      v58 = (int *)(v59 + 16 * v56);
      v57 = *v58;
    }
    while ( v61 < *v58 );
  }
  v62 = (unsigned __int16 *)v58[2];
  v63 = *v62;
  v64 = v63;
  if ( v55 < v63 )
    v64 = v55;
  if ( v64 )
  {
    v65 = memcmp(v62 + 1, a4, v64);
    v66 = v65;
    if ( !v65 )
      v66 = 1;
    if ( v55 < v63 || v65 )
      goto LABEL_85;
  }
  else if ( v55 < v63 )
  {
    return v20;
  }
  v66 = 0;
  if ( v63 < v55 )
    v66 = -1;
LABEL_85:
  if ( !v66 )
  {
    v67 = (int)v58 - v22 - 24;
    if ( v67 >= -15 )
      return *(_DWORD *)(FIELD_U32(v21, 56) + 4 * (v26 + (v67 >> 4)));
  }
  return v20;
}
