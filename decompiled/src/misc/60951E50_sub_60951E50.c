/* sub_60951E50
 * address: 0x60951E50   size: 776   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int **__fastcall sub_60951E50(int **a1, int *a2)
{
  int **v2; // r10
  int v3; // r0
  int v4; // r7
  int v5; // r8
  int v6; // r2
  int v7; // r4
  int v8; // r0
  int v9; // r9
  _BYTE *v10; // r5
  _BYTE *v11; // r11
  unsigned int v12; // r2
  unsigned int v13; // r7
  unsigned int i; // r4
  int *v15; // r0
  int v16; // r9
  unsigned int v17; // r6
  _BYTE *v18; // r1
  int v19; // r0
  bool v20; // cc
  unsigned int v21; // r0
  int v22; // r10
  _WORD *v23; // r11
  _BYTE *v24; // r4
  int v25; // r0
  signed int v26; // r0
  int **v28; // [sp+0h] [bp-30h]
  _BYTE *v29; // [sp+8h] [bp-28h]

  v2 = a1;
  *a1 = a2;
  if ( a2 )
  {
    v3 = a2[2];
    v4 = v3 & 1;
    if ( (v3 & 1) != 0 )
    {
      if ( (v3 & 2) != 0 )
        return v2;
      v5 = 0;
    }
    else
    {
      sub_6091AE30(0, a2, 0x30u);
      a2 = *v2;
      v5 = (*((unsigned __int8 *)*v2 + 8) >> 1) & 1;
    }
    v6 = a2[7];
    v7 = a2[8];
    v8 = a2[9];
    v9 = a2[10];
    v10 = (char *)&a2[3 * a2[6] + 12 + 2 * v6 + 2 * v7] + a2[5] + v8;
    v11 = &v10[v9];
    if ( !v4 )
    {
      v12 = 8 * v6 + 12 * a2[6] + 8 * v7 + v8;
      if ( v12 )
      {
        sub_6091AE30(0, (int *)((char *)a2 + a2[5] + 48), v12);
        a2 = *v2;
      }
      v13 = a2[11];
      if ( v13 )
      {
        for ( i = 0; i < v13; i += *(_DWORD *)&v11[i] )
          sub_6091AE30(0, (int *)&v11[i], 4u);
        a2 = *v2;
      }
      a2[2] |= 1u;
    }
    if ( !v5 )
    {
      v15 = *v2;
      if ( (*v2)[10] )
      {
        if ( v9 >= 1 )
        {
          v29 = &v10[v9];
          v28 = v2;
          do
          {
            v16 = 0;
            v17 = 3;
            while ( 1 )
            {
              v18 = &v10[v17];
              v19 = v16 + 1;
              if ( !v10[v17 - 3] )
              {
                v17 = v16 + 1;
                if ( v16 < 1 )
                  goto LABEL_42;
                goto LABEL_29;
              }
              if ( !*(v18 - 2) )
              {
                v17 = v16 + 2;
                ++v16;
                if ( v19 < 1 )
                  goto LABEL_42;
                goto LABEL_29;
              }
              if ( !*(v18 - 1) )
                break;
              v16 += 3;
              v20 = (int)(v17 - 1) <= 0x7FFFF;
              v17 += 3;
              if ( !v20 )
              {
                v16 = 0;
                goto LABEL_42;
              }
            }
            v16 = v17 - 1;
            if ( (int)(v17 - 1) < 1 )
              goto LABEL_42;
LABEL_29:
            v21 = 2 * v17;
            if ( 2 * v17 < v17 )
              v21 = -1;
            v22 = FIELD_U32(dword_60CD0B50, 20);
            v23 = (_WORD *)operator_new_8DE2C8(v21, v22, 4);
            v24 = (_BYTE *)operator_new_8DE2C8(2 * v17, v22, 4);
            sub_60901524(v23, v17, v10, -1);
            sub_60901AE8((int)v24, 2 * v17, v23, -1);
            v25 = 0;
            while ( v24[v25] )
            {
              if ( !v24[v25 + 1] )
              {
                ++v25;
                break;
              }
              if ( !v24[v25 + 2] )
              {
                v25 += 2;
                break;
              }
              v20 = v25 + 2 <= 0x7FFFF;
              v25 += 3;
              if ( !v20 )
              {
                v25 = 0;
                break;
              }
            }
            v26 = v25 + 1;
            if ( v26 < (int)v17 )
              v17 = v26;
            qmemcpy(v10, v24, v17);
            (*(void (__fastcall **)(int, _WORD *))(*(_DWORD *)v22 + 28))(v22, v23);
            (*(void (__fastcall **)(int, _BYTE *))(*(_DWORD *)v22 + 28))(v22, v24);
LABEL_42:
            v10 += (v16 + 4) & 0xFFFFFFFC;
          }
          while ( v10 < v29 );
          v2 = v28;
          v15 = *v28;
        }
        v15[2] |= 2u;
      }
    }
  }
  return v2;
}
