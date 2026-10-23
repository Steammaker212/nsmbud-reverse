/* sub_603778B4
 * address: 0x603778B4   size: 616   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_603778B4(int a1, unsigned int a2, unsigned __int8 **a3)
{
  unsigned int v4; // r4
  signed int v5; // r6
  int v6; // r7
  signed int *v7; // r9
  unsigned int v8; // r0
  _DWORD *v9; // r0
  int v10; // r1
  _DWORD *v11; // r2
  _DWORD *v12; // r0
  signed int result; // r0
  int v14; // r3
  unsigned __int8 *v15; // lr
  unsigned __int8 *v16; // r1
  char v17; // r2
  float v18; // s0
  float v19; // s2
  unsigned int v20; // r4
  int v21; // lr
  int v22; // r12
  unsigned int v23; // r8
  unsigned __int8 v24; // r4
  int v25; // r6
  int v26; // r5
  char v27; // r7
  float *v28; // r3
  unsigned __int8 *v29; // r7
  char v30; // r10
  int v31; // r12
  unsigned __int8 *v32; // r5
  float v33; // s0
  float v34; // s2
  float v35; // s2
  unsigned int v36; // r1
  int v37; // r11
  int v38; // r8
  unsigned int v39; // r9
  unsigned __int8 v40; // r6
  int v41; // r4
  int v42; // r2
  char v43; // r1
  int v44; // r6

  v4 = a2;
  v5 = (signed int)a3[1];
  if ( a2 >= 0xA )
    a2 = 0;
  v6 = a1 + 8 * a2;
  v7 = (signed int *)(v6 + 16);
  if ( v5 >= 1 )
  {
    v8 = 44 * v5 + 8;
    if ( v8 < 44 * v5 )
      v8 = -1;
    if ( !is_mul_ok(0x2Cu, v5) )
      v8 = -1;
    v9 = (_DWORD *)sub_608DE334(v8, 0, 4);
    if ( v9 )
    {
      v10 = 44 * v5;
      *v9 = 44;
      v9[1] = v5;
      v11 = v9 + 12;
      v12 = v9 + 2;
      do
      {
        *v11 = 0;
        v11 += 11;
        v10 -= 44;
      }
      while ( v10 );
      *v7 = v5;
      FIELD_U32(v6, 20) = v12;
    }
  }
  result = *v7;
  if ( *v7 )
  {
    v14 = FIELD_U32(v6, 20);
    v15 = *a3;
    if ( v4 )
    {
      v16 = v15 + 14;
      v17 = 0;
      do
      {
        v18 = (float)*((__int16 *)v16 - 7);
        v19 = -(float)*((__int16 *)v16 - 6);
        FIELD_F32(v14, 16) = v18;
        FIELD_F32(v14, 20) = v19;
        v20 = v16[4];
        v21 = v16[2];
        v22 = v16[3];
        v23 = v20 >> 4;
        v24 = v20 & 0xF;
        if ( (v17 & 1) != 0 )
        {
          v25 = 7;
          v26 = 6;
          v17 = 0;
          v27 = 0;
        }
        else
        {
          v25 = *((unsigned __int16 *)v16 - 1);
          v26 = *(unsigned __int16 *)v16;
          v27 = 0;
          v17 = 0;
          if ( v25 == 6 )
          {
            v17 = 1;
            v26 = 7;
          }
          else
          {
            v27 = 1;
          }
        }
        *(_DWORD *)v14 = v25;
        --result;
        v16 += 20;
        FIELD_U32(v14, 4) = v21 | (v24 << 16);
        FIELD_U32(v14, 12) = v22 | ((unsigned __int8)v23 << 16);
        FIELD_U32(v14, 8) = v26;
        FIELD_U8(v14, 24) = v27;
        FIELD_F32(v14, 28) = v18;
        FIELD_F32(v14, 32) = v19;
        FIELD_U8(v14, 36) = v27;
        v14 += 44;
      }
      while ( result );
    }
    else
    {
      v28 = (float *)(v14 + 36);
      v29 = v15 + 14;
      v30 = 0;
      v31 = (int)&v15[20 * v5 - 20];
      do
      {
        v32 = v29 - 14;
        v33 = (float)*((__int16 *)v29 - 7);
        v34 = (float)*((__int16 *)v29 - 6);
        *(v28 - 5) = v33;
        v35 = -v34;
        *(v28 - 4) = v35;
        v36 = v29[4];
        v37 = v29[2];
        v38 = v29[3];
        v39 = v36 >> 4;
        v40 = v36 & 0xF;
        if ( (v30 & 1) != 0 )
        {
          v41 = 7;
          v42 = 6;
          v30 = 0;
          v43 = 0;
        }
        else
        {
          v41 = *((unsigned __int16 *)v29 - 1);
          v42 = *(unsigned __int16 *)v29;
          v43 = 0;
          v30 = 0;
          if ( v41 == 6 )
          {
            v30 = 1;
            v42 = 7;
          }
          else
          {
            v43 = 1;
          }
        }
        v29 += 20;
        *((_DWORD *)v28 - 8) = v37 | (v40 << 16);
        v44 = v41;
        if ( v32 == (unsigned __int8 *)v31 )
          v44 = 3;
        if ( v32 == v15 )
        {
          v44 = v41;
          v42 = 4;
        }
        *((_DWORD *)v28 - 9) = v44;
        --result;
        *((_DWORD *)v28 - 6) = v38 | ((unsigned __int8)v39 << 16);
        *((_DWORD *)v28 - 7) = v42;
        *((_BYTE *)v28 - 12) = v43;
        *(v28 - 2) = v33;
        *(v28 - 1) = v35;
        *(_BYTE *)v28 = v43;
        v28 += 11;
      }
      while ( result );
    }
  }
  return result;
}
