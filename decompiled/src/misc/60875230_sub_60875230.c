/* sub_60875230
 * address: 0x60875230   size: 684   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60875230(int *a1, int *a2, int a3, unsigned int a4)
{
  int result; // r0
  char v6; // r0
  int v7; // r3
  int v8; // r6
  int v9; // r0
  int *v10; // r10
  void **v11; // r4
  _DWORD **v12; // lr
  int v13; // r0
  int v14; // r0
  int v15; // r5
  int v16; // r0
  bool v17; // zf
  int v18; // r8
  int v19; // r7
  int v20; // r0
  int v21; // r2
  int *v22; // r5
  int v23; // r1
  int v24; // r4
  unsigned __int16 *v25; // r0
  int v26; // r2
  int v27; // r6
  int v28; // r0
  __int64 v29; // d17
  int v30; // r0
  _DWORD *v31; // r0
  int v32; // r1
  int v33; // r2
  int v34; // r3
  _DWORD *v35; // r5
  int v36; // r6
  int v37; // r2
  int v38; // r3
  int v39; // r6
  int v40; // r0
  int v41; // r2
  int v42; // r1
  int v43; // r2
  void **v44; // [sp+0h] [bp-28h]

  result = 0;
  if ( a2[6] && a2[5] <= a4 )
  {
    v6 = *((_BYTE *)a2 + 8);
    v7 = *a2;
    v8 = 0;
    *a1 = *a2;
    a1[1] = 0;
    *((_BYTE *)a1 + 8) = v6;
    *((_BYTE *)a1 + 9) = *((_BYTE *)a2 + 12);
    if ( !*((_BYTE *)a2 + 12) )
      v6 = 1;
    *((_BYTE *)a1 + 10) = v6;
    *((_BYTE *)a1 + 11) = a2[1];
    if ( a3 )
    {
      v9 = a2[11];
      v10 = a1 + 8;
      v11 = (void **)(a1 + 7);
      v12 = (_DWORD **)(a1 + 6);
      if ( v9 )
        v9 = a3 + a2[14];
      a1[5] = v9;
      v13 = a2[15];
      if ( v13 )
        v13 = a3 + a2[18];
      a1[6] = v13;
      v14 = a2[19];
      if ( v14 )
        v14 = a3 + a2[22];
      a1[7] = v14;
      v15 = a2[23];
      if ( v15 )
        v15 = a3 + a2[26];
      a1[8] = v15;
      v16 = a2[7];
      if ( v16 )
        v16 = a3 + a2[10];
      a1[9] = v16;
      if ( a2[27] )
        v8 = a3 + a2[30];
    }
    else
    {
      v15 = 0;
      v8 = 0;
      a1[6] = 0;
      v12 = (_DWORD **)(a1 + 6);
      a1[9] = 0;
      a1[5] = 0;
      a1[8] = 0;
      v10 = a1 + 8;
      a1[7] = 0;
      v11 = (void **)(a1 + 7);
    }
    a1[10] = v8;
    v17 = v15 == 0;
    a1[11] = (a2[4] + 7) & 0xFFFFFFF8;
    a1[12] = 0;
    a1[13] = a3;
    a1[3] = 0;
    a1[4] = 0;
    if ( v15 )
      v17 = FIELD_U8(v7, 103) == 0;
    if ( !v17 )
    {
      v18 = 1;
      v19 = 0;
      v44 = v11;
      while ( 1 )
      {
        v20 = FIELD_U32(v7, 32);
        v21 = 0;
        v22 = (int *)(v15 + 32 * ((2 * v19) | 1));
        v23 = 2 * v19;
        if ( (v19 & 1) == 0 )
          v21 = FIELD_U16(v20, 52);
        if ( v19 )
        {
          v24 = (__PAIR64__(v18, v19 & 1) - 1) >> 32;
          v25 = (unsigned __int16 *)(v20 + 56 * ((v19 & 1) == 0) + 108);
          do
          {
            v24 -= 2;
            v26 = *(v25 - 28) + v21;
            v27 = *v25;
            v25 += 56;
            v21 = v27 + v26;
          }
          while ( v24 );
        }
        v28 = FIELD_U32(v7, 64) + 24 * (v21 + v19);
        v29 = FIELD_U32(v28, 8);
        *(_QWORD *)v22 = *(_QWORD *)v28;
        *((_QWORD *)v22 + 1) = v29;
        v30 = *(_DWORD *)(*(_DWORD *)(*a1 + 72) + 4 * v19++);
        v22[4] = v30;
        v31 = (_DWORD *)(*v10 + 32 * v23);
        v32 = *v22;
        v33 = v22[1];
        v34 = v22[2];
        v36 = v22[3];
        v35 = v22 + 4;
        *v31 = v32;
        v31[1] = v33;
        v31[2] = v34;
        v31[3] = v36;
        v31 += 4;
        v37 = v35[1];
        v38 = v35[2];
        v39 = v35[3];
        *v31 = *v35;
        v31[1] = v37;
        v31[2] = v38;
        v31[3] = v39;
        v7 = *a1;
        if ( v19 >= *(unsigned __int8 *)(*a1 + 103) )
          break;
        v15 = *v10;
        ++v18;
      }
      v11 = v44;
    }
    v40 = FIELD_U8(v7, 104);
    if ( FIELD_U8(v7, 104) )
    {
      v41 = 0;
      if ( (v40 & 1) != 0 )
      {
        **v12 = 0;
        v41 = 1;
      }
      if ( v40 != 1 )
      {
        v42 = 4 * v41 + 4;
        v43 = v40 - v41;
        do
        {
          v43 -= 2;
          *(_DWORD *)((char *)*v12 + v42 - 4) = 0;
          *(_DWORD *)((char *)*v12 + v42) = 0;
          v42 += 8;
        }
        while ( v43 );
      }
    }
    memset(*v11, 0, ((unsigned int)(v40 + 31) >> 3) & 0x3C);
    a1[1] &= ~2u;
    return 1;
  }
  return result;
}
