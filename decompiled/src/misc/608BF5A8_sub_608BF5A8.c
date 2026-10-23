/* sub_608BF5A8
 * address: 0x608BF5A8   size: 1060   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608BF5A8(int a1, int a2, int *a3, int a4, int a5, int a6, int a7)
{
  int v7; // r5
  int *v8; // lr
  int v9; // r6
  int v10; // r1
  int v11; // r0
  _DWORD *v12; // r3
  _DWORD *v13; // r1
  _WORD *v14; // r8
  int v15; // r10
  int v16; // r9
  int v17; // r4
  int v18; // r3
  int v19; // r7
  __int16 v20; // r5
  int v21; // r6
  _DWORD *v22; // r2
  int v23; // r6
  int v24; // r0
  int v25; // r2
  char v26; // r3
  _DWORD *v27; // r1
  int v28; // r1
  int v29; // r5
  _DWORD *v30; // r4
  _WORD *v31; // r10
  int v32; // r4
  int v33; // r9
  int v34; // r2
  int v35; // r7
  int v36; // r12
  int v37; // r3
  __int16 v38; // lr
  int v39; // r2
  int v40; // r5
  int *v41; // r2
  _DWORD *v42; // r0
  bool v43; // zf
  int v44; // r0
  int v47; // [sp+4h] [bp-34h]
  _DWORD *v48; // [sp+8h] [bp-30h]
  _DWORD *v49; // [sp+Ch] [bp-2Ch]

  v7 = a1;
  v8 = a3;
  v9 = 0;
  if ( FIELD_U8(a1, 176) )
  {
    if ( a2 )
    {
      if ( FIELD_U16(a1, 240) == a4 )
      {
        if ( !FIELD_U8(a1, 181) )
        {
          if ( FIELD_U8(a1, 177) )
          {
            v24 = FIELD_U32(a1, 212);
            if ( v24 >= 1 )
            {
              v25 = 0;
              v26 = 0;
              v27 = (_DWORD *)(v7 + 1060);
              do
              {
                if ( *v27 )
                {
                  if ( *v27 != 3 )
                    goto LABEL_5;
                  v26 = 1;
                }
                ++v25;
                v27 += 9;
              }
              while ( v25 < v24 );
              if ( (v26 & 1) != 0 )
              {
                FIELD_U8(v7, 183) = 1;
                FIELD_U8(v7, 184) = 1;
                FIELD_U8(v7, 181) = 1;
                if ( FIELD_U8(v7, 180) != 1 )
                {
                  v28 = FIELD_U32(v7, 996);
                  if ( v28 >= 1 )
                  {
                    v29 = 0;
                    v30 = (_DWORD *)(a1 + 1028);
                    do
                    {
                      if ( *v30 )
                      {
                        sub_608C9520(*v30, 1);
                        v8 = a3;
                        v28 = FIELD_U32(a1, 996);
                      }
                      ++v29;
                      v30 += 832;
                    }
                    while ( v29 < v28 );
                  }
                  v7 = a1;
                  FIELD_U8(a1, 180) = 1;
                }
              }
            }
          }
        }
LABEL_5:
        v10 = a5;
        if ( v8[1] )
        {
          v11 = FIELD_U32(v7, 996);
          if ( v11 > 0 )
          {
            v12 = (_DWORD *)(v7 + 292);
            v13 = (_DWORD *)(v7 + 292);
            if ( !a5 )
              v13 = v8 + 4;
            v49 = v13;
            if ( a5 )
            {
              v14 = (_WORD *)v8 + 11;
              v15 = v7 + 2240;
              v16 = 0;
              v17 = 0;
              do
              {
                v47 = FIELD_U32(v7, 980) + v11 * a6 * FIELD_U32(v7, 292) + v16;
                v18 = v15 + 36 * *v8;
                v19 = 0;
                if ( *((_BYTE *)v8 + 20) )
                {
                  v20 = v14[1];
                  v21 = *v8 << 6;
                  *(_WORD *)(v15 + v21) = *v14;
                  v19 = v15 + v21;
                  FIELD_U16(v19, 2) = v20;
                  v7 = a1;
                  FIELD_U16(v19, 4) = v14[2];
                }
                v22 = (_DWORD *)(v18 - 1208);
                v23 = v18 - 2240;
                v22[7] = 0;
                v22[8] = 0;
                FIELD_U8(v23, 1056) = 0;
                FIELD_U32(v23, 1036) = 0;
                FIELD_U32(v23, 1040) = 0;
                FIELD_U32(v23, 1044) = 0;
                FIELD_U32(v23, 1048) = 0;
                FIELD_U32(v23, 1052) = 0;
                *v22 = v47;
                *(_DWORD *)(v18 - 1204) = *v49;
                v22[2] = v8[1];
                v22[3] = v8[3];
                v22[4] = v19;
                sub_608C2514(v15 - 1216, v18 - 1208, *((unsigned __int8 *)v8 + 124));
                v8 = a3;
                ++v17;
                v14 += 3;
                v15 += 3328;
                v16 += a7;
                v11 = FIELD_U32(v7, 996);
              }
              while ( v17 < v11 );
            }
            else
            {
              v31 = (_WORD *)v8 + 11;
              v32 = v7 + 2240;
              v33 = 0;
              v48 = (_DWORD *)(v7 + 292);
              do
              {
                v34 = *v8;
                v35 = 0;
                v36 = *(_DWORD *)(v32 - 1216) + (*v12 + 2304) * *v8;
                v37 = v32 + 36 * *v8;
                if ( *((_BYTE *)v8 + 20) )
                {
                  v38 = v31[1];
                  v39 = v34 << 6;
                  *(_WORD *)(v32 + v39) = *v31;
                  v35 = v32 + v39;
                  FIELD_U16(v35, 2) = v38;
                  v8 = a3;
                  FIELD_U16(v35, 4) = v31[2];
                }
                v40 = v37 - 2240;
                v41 = (int *)(v37 - 1208);
                v41[7] = 0;
                v41[8] = 0;
                FIELD_U8(v40, 1056) = 0;
                FIELD_U32(v40, 1036) = 0;
                FIELD_U32(v40, 1040) = 0;
                FIELD_U32(v40, 1044) = 0;
                FIELD_U32(v40, 1048) = 0;
                FIELD_U32(v40, 1052) = 0;
                *v41 = v36;
                *(_DWORD *)(v37 - 1204) = *v49;
                v41[2] = v8[1];
                v41[3] = v8[3];
                v41[4] = v35;
                sub_608C2514(v32 - 1216, v37 - 1208, *((unsigned __int8 *)v8 + 124));
                v7 = a1;
                v8 = a3;
                v12 = v48;
                ++v33;
                v31 += 3;
                v32 += 3328;
              }
              while ( v33 < FIELD_U32(a1, 996) );
            }
          }
          v42 = (_DWORD *)(v7 + 12 * *v8);
          v42[13793] = v8[2];
          v42[13794] = v8[1];
          v42[13795] = v8[30];
          v10 = a5;
        }
        v9 = 1;
        if ( *((_BYTE *)v8 + 124) )
          FIELD_U8(v7, 182) = 1;
        v43 = FIELD_U8(v7, 177) == 0;
        if ( !FIELD_U8(v7, 177) )
          v43 = v10 == 0;
        if ( v43 )
        {
          v44 = FIELD_U32(v7, 196) - 1;
          FIELD_U32(v7, 196) = v44;
          if ( !v44 || FIELD_U8(v7, 182) )
          {
            v9 = 1;
            FIELD_U8(v7, 177) = 1;
          }
        }
      }
    }
    else
    {
      FIELD_U8(a1, 39) = 1;
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 20))(a1);
    }
  }
  return v9;
}
