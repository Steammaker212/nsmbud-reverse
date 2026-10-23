/* sub_60887A00
 * address: 0x60887A00   size: 1188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60887A00(int a1, unsigned __int8 *a2, int *a3)
{
  int v4; // r0
  int v5; // r0
  unsigned __int8 *v6; // r1
  int v7; // r3
  bool v8; // zf
  int v9; // r3
  bool v10; // zf
  unsigned __int8 *v11; // r7
  int v12; // r0
  int v13; // r4
  int v14; // r6
  int v15; // r0
  int v16; // r4
  int v17; // r0
  int v18; // r0
  int v19; // r1
  bool v20; // zf
  int v21; // r0
  int result; // r0
  int v23; // r11
  int v24; // r10
  int v25; // r2
  _DWORD *v26; // r0
  unsigned __int8 *v27; // r1
  int v28; // r0
  int v29; // r1
  int v30; // r2
  int v31; // r3
  bool v32; // zf
  int v33; // r3
  int v34; // r0
  unsigned __int8 *v35; // r6
  int v36; // r0
  bool v37; // zf
  int v38; // r9
  int v39; // r5
  int v40; // r0
  int v41; // r10
  int v42; // r11
  unsigned __int8 *v43; // r0
  int v44; // r0
  int v45; // r1
  int v46; // r2
  int v47; // r0
  bool v48; // zf
  int v49; // [sp+4h] [bp-44h]
  int v50; // [sp+8h] [bp-40h]
  int v51; // [sp+Ch] [bp-3Ch]
  _DWORD *v52; // [sp+10h] [bp-38h]
  int v53; // [sp+14h] [bp-34h]
  int v54; // [sp+18h] [bp-30h]

  a2[24] = 1;
  v4 = *((_DWORD *)a2 + 2) + *(_DWORD *)(*((_DWORD *)a2 + 2) + 20);
  *((_DWORD *)a2 + 3) = v4;
  FIELD_U32(a1, 44) += FIELD_U32(v4, 80);
  v5 = 0;
  v6 = *((unsigned __int8 **)a2 + 2);
  v7 = *((_DWORD *)v6 + 2);
  v8 = v7 == -1;
  if ( v7 != -1 )
  {
    v6 += v7;
    v8 = v6 == 0;
  }
  if ( !v8 )
  {
    v5 = 0;
    do
    {
      v9 = *((_DWORD *)v6 + 3);
      if ( (*v6 | (v6[1] << 8) | (v6[2] << 16) | (v6[3] << 24)) == 0x52544D45 )
        ++v5;
      v10 = v9 == -1;
      if ( v9 != -1 )
      {
        v6 += v9;
        v10 = v6 == 0;
      }
    }
    while ( !v10 );
  }
  v11 = a2;
  *(_DWORD *)a2 = v5;
  v12 = *(_DWORD *)(*((_DWORD *)a2 + 3) + 80);
  *((_DWORD *)a2 + 1) = v12;
  v13 = 720 * v12 + 32;
  v14 = (*(int (__fastcall **)(_DWORD, int, int))(**(_DWORD **)(a1 + 948) + 8))(FIELD_U32(a1, 948), v13, 128);
  FIELD_U32(a1, 952) += v13;
  ++FIELD_U32(a1, 956);
  *((_DWORD *)a2 + 5) = v14;
  v15 = *((_DWORD *)a2 + 1);
  if ( v15 )
  {
    v16 = 720 * v15;
    v17 = v14;
    do
    {
      v16 -= 720;
      v17 = sub_6089DB50(v17) + 720;
    }
    while ( v16 );
  }
  *((_DWORD *)a2 + 4) = v14;
  v18 = *((_DWORD *)a2 + 2);
  v19 = FIELD_U32(v18, 8);
  v20 = v19 == -1;
  if ( v19 != -1 )
  {
    v11 = (unsigned __int8 *)(v18 + v19);
    v20 = v18 + v19 == 0;
  }
  if ( v20 )
  {
LABEL_21:
    a2[26] = 0;
    a2[25] = 0;
    return 0;
  }
  else
  {
    while ( (*v11 | (v11[1] << 8) | (v11[2] << 16) | (v11[3] << 24)) != 0x52544D45 )
    {
      v21 = *((_DWORD *)v11 + 3);
      v11 += v21;
      if ( v21 == -1 )
        v11 = 0;
      if ( !v11 )
        goto LABEL_21;
    }
    result = (int)a2;
    a2[26] = 0;
    a2[25] = 0;
    if ( v11 )
    {
      v23 = 0;
      v24 = 0;
      v25 = 0;
      while ( 1 )
      {
        v26 = (_DWORD *)(v14 + 720 * v24);
        v26[38] = 0;
        if ( v25 )
          FIELD_U32(v25, 152) = v26;
        v26[2] = v23;
        v27 = &v11[*((_DWORD *)v11 + 5)];
        v26[3] = v27;
        v26[4] = v27 + 80;
        v53 = v14 + 720 * v24;
        ((void (*)(void))sub_6089FC9C)();
        v28 = a3[1];
        v29 = -v28;
        v30 = ((v28 + 1871) & -v28) + *a3;
        *a3 = v30;
        if ( FIELD_U32(v53, 544) )
        {
          v30 += (v28 + FIELD_U32(v53, 548) - 1) & v29;
          *a3 = v30;
        }
        v31 = FIELD_U32(v53, 580);
        v32 = v31 == 0;
        if ( v31 )
          v30 += (v28 + 127) & v29;
        v33 = v53 + 12;
        if ( !v32 )
          *a3 = v30;
        if ( FIELD_U8(v53, 3) )
          *a3 = v30 + ((v28 + 287) & v29);
        FIELD_U32(a1, 100) += *((_DWORD *)v11 + 1);
        v34 = *(_DWORD *)v33;
        if ( *(_BYTE *)(*(_DWORD *)v33 + 2216) )
        {
          a2[26] = 1;
          v34 = *(_DWORD *)v33;
        }
        if ( !FIELD_U8(v34, 2032) )
          a2[25] = 1;
        v35 = (unsigned __int8 *)(v53 + 84);
        memset((void *)(v53 + 84), 0, 68);
        v36 = *((_DWORD *)v11 + 2);
        v37 = v36 == -1;
        if ( v36 != -1 )
        {
          v52 = (_DWORD *)(v53 + 84);
          v35 = &v11[v36];
          v37 = &v11[v36] == 0;
        }
        if ( v37 )
        {
          ++v24;
        }
        else
        {
          v49 = v24 + 1;
          v50 = v23;
          v51 = a1;
          v38 = 0;
          v39 = v53 + 88;
          v40 = 720 * v24;
          v41 = 0;
          v54 = v40;
          do
          {
            v42 = *((_DWORD *)a2 + 4) + v54 + v38;
            FIELD_U32(v42, 728) = v41;
            v43 = &v35[*((_DWORD *)v35 + 5)];
            FIELD_U32(v42, 732) = v43;
            FIELD_U32(v42, 736) = v43 + 80;
            sub_6089FC9C(v42 + 720, v35);
            v44 = a3[1];
            v45 = -v44;
            v46 = ((v44 + 1871) & -v44) + *a3;
            *a3 = v46;
            if ( FIELD_U32(v42, 1264) )
            {
              v46 += (v44 + FIELD_U32(v42, 1268) - 1) & v45;
              *a3 = v46;
            }
            if ( FIELD_U32(v42, 1300) )
            {
              v46 += (v44 + 127) & v45;
              *a3 = v46;
            }
            if ( FIELD_U8(v42, 723) )
              *a3 = v46 + ((v44 + 287) & v45);
            FIELD_U8(v42, 724) = 1;
            if ( *(_BYTE *)(FIELD_U32(v42, 732) + 2216) )
              a2[26] = 1;
            *(_DWORD *)(v39 + 4 * v41) = v42 + 720;
            FIELD_U32(v42, 872) = 0;
            memset(*(_DWORD *)(v39 + 4 * v41) + 88, 0, 64);
            v47 = *((_DWORD *)v35 + 3);
            v38 += 720;
            ++v41;
            v35 += v47;
            if ( v47 == -1 )
              v35 = 0;
          }
          while ( v35 );
          *v52 = v41;
          a1 = v51;
          v23 = v50;
          v24 = v49 + v41;
        }
        result = *((_DWORD *)v11 + 3);
        v48 = result == -1;
        if ( result != -1 )
        {
          v11 += result;
          v48 = v11 == 0;
        }
        if ( v48 )
          break;
        ++v23;
        while ( 1 )
        {
          result = *v11 | (v11[1] << 8) | (v11[2] << 16) | (v11[3] << 24);
          if ( result == 1381256517 )
            break;
          result = *((_DWORD *)v11 + 3);
          v11 += result;
          if ( result == -1 )
            v11 = 0;
          if ( !v11 )
            return result;
        }
        if ( !v11 )
          break;
        v25 = v53;
        v14 = *((_DWORD *)a2 + 4);
      }
    }
  }
  return result;
}
