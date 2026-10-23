/* TRUEVISION_XFILE_ref
 * address: 0x609740C4   size: 1244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall TRUEVISION_XFILE_ref(int a1, int *a2, unsigned int a3, int a4, int a5, int a6, void *heap)
{
  unsigned int v9; // r7
  signed int v10; // r5
  int v11; // r0
  int v12; // r8
  int v13; // r11
  unsigned int v14; // r10
  _BYTE *v15; // r0
  unsigned int v16; // r2
  int v17; // r9
  _BYTE *v18; // r0
  unsigned int v19; // r6
  _DWORD *v20; // r4
  int v21; // r6
  int v22; // r4
  int v23; // r6
  int v24; // r8
  int v25; // r1
  int v26; // r2
  _BYTE *v27; // r4
  int k; // r7
  int v29; // r1
  _BYTE *v30; // r3
  _BYTE *v31; // r6
  signed int v32; // r1
  char v33; // r0
  int v34; // r11
  int v35; // r6
  int v36; // r3
  int v37; // r4
  int v38; // r2
  _BYTE *v39; // r1
  char v40; // r0
  _BYTE *v41; // r1
  int j; // r6
  int v43; // r0
  _BYTE *v44; // r7
  _BYTE *v45; // r4
  signed int v46; // r0
  char v47; // r2
  int v48; // r2
  int i; // r3
  int v50; // r6
  int v51; // r4
  _BYTE *v52; // r1
  char v53; // r0
  unsigned int v55; // [sp+4h] [bp-4Ch]
  int v57; // [sp+Ch] [bp-44h]
  int v58[3]; // [sp+14h] [bp-3Ch] BYREF
  int v59; // [sp+20h] [bp-30h] BYREF
  int v60; // [sp+24h] [bp-2Ch]
  int v61; // [sp+28h] [bp-28h]

  v9 = 32;
  if ( a3 <= 2 )
    v9 = 0x201808u >> (8 * a3);
  v10 = FIELD_U16(a5, 24);
  v55 = v10;
  if ( (unsigned int)v10 <= 1 )
    v10 = 1;
  v11 = sub_609200A0(a5);
  v12 = FIELD_U16(a5, 26);
  if ( v11 > v12 )
    LOWORD(v12) = v11;
  v13 = (unsigned __int16)v12 * v10;
  v57 = (unsigned __int16)v12;
  v14 = v13 * (unsigned __int8)v9;
  a2[1] = (v14 >> 3) + 44;
  v15 = (_BYTE *)(*(int (__fastcall **)(int, unsigned int, int))(*(_DWORD *)a6 + 24))(
                   a6,
                   ((v14 >> 3) + 107) & 0x1FFFFFC0,
                   64);
  *a2 = (int)v15;
  v15[17] = 0;
  v15[16] = 0;
  v15[13] = 0;
  v15[9] = 0;
  v15[5] = 0;
  v15[3] = 0;
  v15[2] = 0;
  v15[1] = 0;
  *v15 = 0;
  v15[12] = 0;
  v15[15] = 0;
  v15[14] = 0;
  v15[8] = 0;
  v15[11] = 0;
  v15[10] = 0;
  v15[4] = 0;
  v15[7] = 0;
  v15[6] = 0;
  v16 = v14 >> 3;
  if ( a3 <= 2 )
    v15[2] = 0x20203u >> (8 * a3);
  *((_WORD *)v15 + 6) = v10;
  *((_WORD *)v15 + 7) = v12;
  v15[16] = v9;
  v15[17] = 8;
  v17 = *a2;
  *(_BYTE *)(v17 + 18 + v16) = 0;
  v18 = (_BYTE *)(v17 + 18 + v16);
  v18[3] = 0;
  v18[2] = 0;
  v18[1] = 0;
  v18[4] = 0;
  v18 += 4;
  v18[3] = 0;
  v18[2] = 0;
  v18[1] = 0;
  strcpy(v18 + 4, "TRUEVISION-XFILE.");
  v19 = FIELD_U32(a5, 40);
  v20 = (_DWORD *)operator_new_8DE25C(0x1Cu, heap, 4);
  sub_60913BB4((int)v20);
  if ( v19 <= 4 * v13 )
    v19 = 4 * v13;
  *v20 = off_60BF9C1C;
  if ( sub_60913E24((int)v20, v19, (int)heap, 0x2000, 2) )
  {
    v21 = 0;
    sub_60913A6C(&v59, (int)v20, 0);
    if ( v59 )
    {
      v22 = dword_60CC73E8(v59);
      v23 = v60;
      v58[0] = v59;
      v58[1] = v60;
      v58[2] = v61;
      sub_60916FEC((_DWORD *)dword_60CCFC8C, v58, a5);
      v24 = v22 + v23;
      v25 = (v9 >> 3) & 7;
      if ( v25 == 1 )
      {
        v34 = v17 + 18;
        if ( v57 )
        {
          if ( a4 )
          {
            v35 = 0;
            v36 = v10 * (v57 - 1);
            do
            {
              v37 = 0;
              if ( (v10 & 1) != 0 )
              {
                v37 = 1;
                *(_BYTE *)(v34 + v35 * v10) = *(_BYTE *)(v24 + 4 * (v57 - 1 - v35) * v10);
              }
              if ( v55 >= 2 )
              {
                v38 = v17 + v37;
                v39 = (_BYTE *)(v24 + 4 * (v37 + v36));
                do
                {
                  v37 += 2;
                  FIELD_U8(v38, 18) = *v39;
                  v40 = v39[4];
                  v39 += 8;
                  FIELD_U8(v38, 19) = v40;
                  v38 += 2;
                }
                while ( v37 < v10 );
              }
              ++v35;
              v36 -= v10;
              v17 += v10;
            }
            while ( v57 > v35 );
          }
          else
          {
            v48 = 0;
            for ( i = 0; i < v57; ++i )
            {
              v50 = 0;
              if ( (v10 & 1) != 0 )
              {
                v50 = 1;
                *(_BYTE *)(v34 + i * v10) = *(_BYTE *)(v24 + 4 * i * v10);
              }
              if ( v55 >= 2 )
              {
                v51 = v17 + v50;
                v52 = (_BYTE *)(v24 + 4 * (v50 + v48));
                do
                {
                  v50 += 2;
                  FIELD_U8(v51, 18) = *v52;
                  v53 = v52[4];
                  v52 += 8;
                  FIELD_U8(v51, 19) = v53;
                  v51 += 2;
                }
                while ( v50 < v10 );
              }
              v48 += v10;
              v17 += v10;
            }
          }
        }
      }
      else if ( v25 == 3 )
      {
        if ( v57 )
        {
          v41 = (_BYTE *)(v17 + 20);
          for ( j = 0; j < v57; ++j )
          {
            v43 = j;
            v44 = v41;
            if ( a4 )
              v43 = v57 - 1 - j;
            v45 = (_BYTE *)(v24 + 2 + 4 * v10 * v43);
            v46 = 0;
            do
            {
              ++v46;
              *(v44 - 2) = *v45;
              *(v44 - 1) = *(v45 - 1);
              v47 = *(v45 - 2);
              v45 += 4;
              *v44 = v47;
              v44 += 3;
            }
            while ( v46 < v10 );
            v41 += 3 * v10;
          }
        }
      }
      else if ( v25 == 4 && v57 )
      {
        v26 = 4 * v10;
        v27 = (_BYTE *)(v17 + 21);
        for ( k = 0; k < v57; ++k )
        {
          v29 = k;
          v30 = v27;
          if ( a4 )
            v29 = v57 - 1 - k;
          v31 = (_BYTE *)(v24 + 1 + v26 * v29);
          v32 = 0;
          do
          {
            ++v32;
            *(v30 - 3) = v31[1];
            *(v30 - 2) = *v31;
            *(v30 - 1) = *(v31 - 1);
            v33 = v31[2];
            v31 += 4;
            *v30 = v33;
            v30 += 4;
          }
          while ( v32 < v10 );
          v27 += v26;
        }
      }
      sub_60913ABC((int)&v59);
      return 1;
    }
  }
  else
  {
    v21 = 0;
    v59 = 0;
    v60 = 0;
    v61 = 0;
  }
  return v21;
}
