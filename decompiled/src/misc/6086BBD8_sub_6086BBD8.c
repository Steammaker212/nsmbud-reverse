/* sub_6086BBD8
 * address: 0x6086BBD8   size: 812   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6086BBD8(int result, int a2, int a3, int a4)
{
  _DWORD *v5; // r9
  int v7; // r8
  int v8; // r1
  int v9; // r10
  int v10; // r7
  unsigned __int16 *v11; // r1
  int v12; // r3
  int v13; // r0
  int v14; // r5
  int v15; // r3
  unsigned int v16; // r6
  int v17; // r12
  int v18; // r5
  int v19; // lr
  unsigned int v20; // r9
  int *v21; // r12
  unsigned int v22; // r6
  int v23; // r3
  int v24; // r2
  int v25; // r0
  int v26; // r3
  _DWORD *v27; // r2
  int v28; // r7
  int v29; // r6
  int v30; // r8
  int v31; // r10
  unsigned __int16 *v32; // r5
  int v33; // r1
  int v34; // lr
  int v35; // r0
  int (__fastcall *v36)(int); // r12
  int v37; // r2
  int *v38; // r3
  int v39; // r9
  int (__fastcall *v40)(int); // r2
  int v41; // r3
  bool v42; // zf
  int v43; // r0
  int v44; // r0
  int v45; // r2
  int v46; // lr
  int v47; // r2
  int *v48; // r3
  int v49; // r9
  int v50; // r12
  int v51; // r3
  bool v52; // zf
  int v53; // r2
  int v54; // r2
  int v55; // [sp+4h] [bp-34h]
  int v56; // [sp+Ch] [bp-2Ch]
  _DWORD *v57; // [sp+10h] [bp-28h]

  v5 = (_DWORD *)result;
  v7 = FIELD_U16(a3, 50);
  v8 = FIELD_U32(result, 48);
  v57 = (_DWORD *)result;
  if ( FIELD_U16(a3, 50) )
  {
    v9 = 0;
    v10 = a4;
    v56 = v8 + 4 * FIELD_U16(a3, 40);
    v11 = *(unsigned __int16 **)(a3 + 8);
    v55 = a4;
    do
    {
      result = v5[23] + 2 * v10;
      v12 = *(unsigned __int16 *)result;
      if ( v12 != 0xFFFF )
      {
        v13 = *(_DWORD *)(*(_DWORD *)a2 + 88);
        v14 = v13 + 32 * v12;
        if ( FIELD_S32(v14, 20) >= 0 )
        {
          *(_DWORD *)(FIELD_U32(a2, 8) + 4 * ((unsigned __int16)v12 >> 5)) |= 1 << (v12 & 0x1F);
          FIELD_U8(a2, 28) |= 1u;
          v13 = *(_DWORD *)(*(_DWORD *)a2 + 88);
        }
        v15 = FIELD_U16(v14, 24);
        if ( *(int *)(v13 + 32 * v15 + 20) >= 0 )
        {
          *(_DWORD *)(FIELD_U32(a2, 8) + 4 * ((unsigned __int16)v15 >> 5)) |= 1 << (v15 & 0x1F);
          FIELD_U8(a2, 28) |= 1u;
        }
        v16 = v11[4];
        v17 = v11[6];
        v18 = FIELD_U32(a2, 44) + FIELD_U16(v14, 18);
        result = v11[5];
        if ( v16 < result + v16 + v17 )
        {
          v19 = result + v17;
          --result;
          v20 = v11[4];
          if ( (v19 & 1) != 0 )
          {
            *(_DWORD *)(v18 + *(_DWORD *)(FIELD_U32(a3, 24) + 48 * v16 + 20)) = *(_DWORD *)(v56 + 4 * v16);
            v20 = v16 + 1;
          }
          if ( result + v17 )
          {
            v21 = (int *)(v56 + 4 + 4 * v20);
            v22 = v19 + v16 - v20;
            v23 = 48 * v20;
            do
            {
              v22 -= 2;
              *(_DWORD *)(v18 + *(_DWORD *)(FIELD_U32(a3, 24) + v23 + 20)) = *(v21 - 1);
              v24 = *v21;
              v21 += 2;
              v25 = FIELD_U32(a3, 24) + v23;
              v23 += 96;
              result = FIELD_U32(v25, 68);
              *(_DWORD *)(v18 + result) = v24;
            }
            while ( v22 );
          }
        }
        v5 = v57;
        if ( v11[8] )
        {
          result = v11[7];
          v26 = v11[8] + result;
          do
          {
            v27 = (_DWORD *)(FIELD_U32(a3, 32) + 8 * result++);
            *(_DWORD *)(v18 + *v27) = v27[1];
          }
          while ( result < v26 );
        }
      }
      ++v9;
      ++v10;
      v11 += 12;
    }
    while ( v9 != v7 );
    v8 = v5[12];
    a4 = v7 + v55;
  }
  v28 = FIELD_U16(a3, 52);
  if ( FIELD_U16(a3, 52) )
  {
    v29 = 2 * a4;
    v30 = 0;
    v31 = v8 + 4 * FIELD_U16(a3, 42);
    v32 = (unsigned __int16 *)(FIELD_U32(a3, 16) + 8);
    do
    {
      result = v5[23] + v29;
      v33 = *(unsigned __int16 *)result;
      if ( v33 != 0xFFFF )
      {
        if ( *v32 == 0xFFFF )
        {
          v34 = v5[24];
          v35 = FIELD_U32(a2, 48);
          v36 = *(int (__fastcall **)(int))(v35 + 4 * v33);
          v37 = *(_DWORD *)(FIELD_U32(a3, 32) + 8 * v32[1] + 4);
          v38 = (int *)(v5[25] + 8 * v37);
          v39 = *v38;
          v40 = *(int (__fastcall **)(int))(v34 + 4 * v37);
          v41 = v38[1];
          *(_DWORD *)(v35 + 4 * v33) = v40;
          v42 = v36 == v40;
          v43 = FIELD_U32(a2, 52);
          *(_DWORD *)(v43 + 8 * v33) = v39;
          result = v43 + 8 * v33;
          FIELD_U32(result, 4) = v41;
          if ( v36 != v40 )
          {
            v40 = *(int (__fastcall **)(int))(a2 + 68);
            v42 = v40 == 0;
          }
          if ( !v42 )
            result = v40(a2);
        }
        else
        {
          v44 = *(_DWORD *)(v31 + 4 * v30);
          if ( v44 < 0 )
          {
            v44 = 0;
          }
          else
          {
            v45 = *(unsigned __int16 *)(v5[17] + 118);
            if ( v45 <= v44 )
              v44 = v45 - 1;
          }
          v46 = v5[24];
          v47 = FIELD_U32(a2, 48);
          v48 = (int *)(v5[25] + 8 * v44);
          v49 = *v48;
          result = *(_DWORD *)(v46 + 4 * v44);
          v50 = *(_DWORD *)(v47 + 4 * v33);
          v51 = v48[1];
          *(_DWORD *)(v47 + 4 * v33) = result;
          v52 = v50 == result;
          v53 = FIELD_U32(a2, 52);
          *(_DWORD *)(v53 + 8 * v33) = v49;
          v54 = v53 + 8 * v33;
          FIELD_U32(v54, 4) = v51;
          if ( v50 != result )
          {
            v54 = FIELD_U32(a2, 68);
            v52 = v54 == 0;
          }
          if ( !v52 )
            result = ((int (__fastcall *)(int))v54)(a2);
          ++v30;
        }
        v5 = v57;
      }
      v32 += 8;
      --v28;
      v29 += 2;
    }
    while ( v28 );
  }
  return result;
}
