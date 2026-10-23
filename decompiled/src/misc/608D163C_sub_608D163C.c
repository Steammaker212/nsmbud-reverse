/* sub_608D163C
 * address: 0x608D163C   size: 972   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D163C(int a1, int a2, _DWORD *a3)
{
  int v6; // r5
  int v7; // r9
  int v8; // r0
  int v9; // r7
  int v10; // r6
  int v11; // r8
  int v12; // r1
  int v13; // r12
  unsigned int v14; // r3
  int v15; // r8
  _BYTE *v16; // lr
  int v17; // r2
  int v18; // r0
  int v19; // r3
  int v20; // r1
  int v21; // r5
  int v22; // r1
  bool v23; // cc
  int v24; // r3
  int v25; // r5
  int v26; // r6
  int v27; // r0
  float v28; // s0
  int v29; // r2
  int v30; // r3
  int v31; // r2
  _BYTE *v32; // r1
  int v33; // r3
  unsigned int v34; // r3
  unsigned int v35; // r0
  int v36; // r3
  int v37; // r7
  int v38; // r6
  int v39; // r0
  int v40; // r3
  int v41; // r7
  char *v42; // r0
  int v43; // r5
  char *v44; // r0
  _DWORD *v45; // r0
  int v47; // [sp+0h] [bp-30h]
  char *v48; // [sp+4h] [bp-2Ch]
  int v49; // [sp+8h] [bp-28h]

  v6 = *(_DWORD *)a2;
  v7 = FIELD_U32(a2, 4);
  v8 = FIELD_U32(a2, 16);
  if ( v8 )
  {
    v9 = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
    v10 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a2 + 16) + 4))(FIELD_U32(a2, 16));
  }
  else
  {
    v9 = FIELD_U32(a2, 8);
    v10 = FIELD_U32(a2, 12);
  }
  v11 = FIELD_U8(a2, 20);
  v48 = (char *)sub_608065A0();
  v49 = *((_DWORD *)sub_608065A0() + 315);
  FIELD_U32(a1, 92) = v7;
  FIELD_U32(a1, 96) = v6;
  FIELD_U32(a1, 100) = v10;
  FIELD_U8(a1, 146) = 0;
  v47 = sub_608D0B4C(v6, v11);
  sub_608D0B5C(a1, FIELD_U32(a1, 96), v11, a3);
  v12 = FIELD_U32(a1, 92);
  v13 = FIELD_U32(a1, 96);
  v14 = ((unsigned int)a3 + v47 + 3) & 0xFFFFFFFC;
  v15 = v12 * v13;
  FIELD_U32(a1, 88) = v14;
  v16 = (_BYTE *)(v14 + 4 * v12 * v13);
  if ( v12 * v13 >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      v18 = FIELD_U32(a1, 100);
      *(_DWORD *)(v14 + 4 * v17) = v16;
      v19 = v18 * v9;
      if ( v18 * v9 >= 1 )
      {
        v20 = 0;
        if ( (v19 & 1) != 0 )
        {
          v20 = 1;
          **(_DWORD **)(FIELD_U32(a1, 88) + 4 * v17) = 0;
        }
        if ( v19 != 1 )
        {
          v21 = 4 * v20 + 4;
          v22 = v19 - v20;
          do
          {
            v22 -= 2;
            *(_DWORD *)(*(_DWORD *)(FIELD_U32(a1, 88) + 4 * v17) + v21 - 4) = 0;
            *(_DWORD *)(*(_DWORD *)(FIELD_U32(a1, 88) + 4 * v17) + v21) = 0;
            v21 += 8;
          }
          while ( v22 );
        }
      }
      ++v17;
      v16 += 4 * v19;
      if ( v17 == v15 )
        break;
      v14 = FIELD_U32(a1, 88);
    }
    v12 = FIELD_U32(a1, 92);
    v13 = FIELD_U32(a1, 96);
  }
  if ( v9 < v13 )
    v13 = v9;
  if ( FIELD_U32(a1, 100) < v12 )
    v12 = FIELD_U32(a1, 100);
  v23 = v13 < 1;
  if ( v13 >= 1 )
    v23 = v12 < 1;
  if ( !v23 )
  {
    v24 = 0;
    do
    {
      v25 = 0;
      do
      {
        v26 = v25 + v24 * FIELD_U32(a1, 92);
        v27 = v25 + v24 * FIELD_U32(a1, 100);
        ++v25;
        *(_DWORD *)(*(_DWORD *)(FIELD_U32(a1, 88) + 4 * v26) + 4 * v27) = 1065353216;
      }
      while ( v25 < v12 );
      ++v24;
    }
    while ( v24 < v13 );
  }
  FIELD_U8(a1, 80) = 0;
  FIELD_U8(a1, 82) = 1;
  v28 = FIELD_F32(a1, 68);
  v29 = FIELD_U32(a1, 72);
  v30 = FIELD_U32(a1, 76);
  if ( v30 < v29 )
    v28 = FIELD_F32(a1, 64) + (float)((float)((float)v30 * (float)(v28 - FIELD_F32(a1, 64))) / (float)v29);
  FIELD_F32(a1, 64) = v28;
  FIELD_U32(a1, 84) = v16;
  FIELD_U32(a1, 68) = 1065353216;
  FIELD_U32(a1, 72) = 0;
  FIELD_U32(a1, 76) = 0;
  v31 = FIELD_U32(a1, 96);
  v32 = &v16[v31];
  if ( v31 >= 1 )
  {
    *v16 = FIELD_U8(a2, 21);
    v31 = FIELD_U32(a1, 96);
    if ( v31 >= 2 )
    {
      v33 = 0;
      do
      {
        *(_BYTE *)(FIELD_U32(a1, 84) + v33 + 1) = *(_BYTE *)(a2 + 22 + v33);
        v31 = FIELD_U32(a1, 96);
        v23 = v33 + 2 < v31;
        ++v33;
      }
      while ( v23 );
    }
  }
  v34 = (unsigned int)(v32 + 3) & 0xFFFFFFFC;
  v35 = v34 + 20 * v31;
  FIELD_U32(a1, 56) = v34;
  if ( v31 >= 1 )
  {
    FIELD_U8(v34, 18) = 0;
    FIELD_U16(v34, 16) = 0;
    *(_DWORD *)v34 = 1065353216;
    FIELD_U32(v34, 4) = 1065353216;
    FIELD_U32(v34, 8) = 0;
    FIELD_U32(v34, 12) = 0;
    if ( FIELD_S32(a1, 96) >= 2 )
    {
      v36 = 1;
      v37 = 0;
      do
      {
        ++v36;
        v38 = FIELD_U32(a1, 56) + v37;
        v37 += 20;
        FIELD_U8(v38, 38) = 0;
        FIELD_U16(v38, 36) = 0;
        FIELD_U32(v38, 20) = 1065353216;
        FIELD_U32(v38, 24) = 1065353216;
        FIELD_U32(v38, 28) = 0;
        FIELD_U32(v38, 32) = 0;
      }
      while ( v36 < FIELD_U32(a1, 96) );
    }
  }
  FIELD_U32(a1, 60) = v35;
  if ( FIELD_S32(a1, 92) >= 1 )
  {
    FIELD_U8(v35, 18) = 0;
    FIELD_U16(v35, 16) = 0;
    *(_DWORD *)v35 = 1065353216;
    FIELD_U32(v35, 4) = 1065353216;
    FIELD_U32(v35, 8) = 0;
    FIELD_U32(v35, 12) = 0;
    if ( FIELD_S32(a1, 92) >= 2 )
    {
      v39 = 1;
      v40 = 0;
      do
      {
        ++v39;
        v41 = FIELD_U32(a1, 60) + v40;
        v40 += 20;
        FIELD_U8(v41, 38) = 0;
        FIELD_U16(v41, 36) = 0;
        FIELD_U32(v41, 20) = 1065353216;
        FIELD_U32(v41, 24) = 1065353216;
        FIELD_U32(v41, 28) = 0;
        FIELD_U32(v41, 32) = 0;
      }
      while ( v39 < FIELD_U32(a1, 92) );
    }
  }
  v42 = (char *)sub_608065A0();
  nn__os__LockMutex(v42 + 1408);
  v43 = nn__audio__AcquireSubMix(v48 + 12, a1 + 44, v49, v15, v47);
  v44 = (char *)sub_608065A0();
  nn__os__UnlockMutex(v44 + 1408);
  FIELD_U8(a1, 144) = v43;
  if ( v43 )
  {
    v45 = sub_608065A0();
    sub_608B67F4(v45, (_DWORD *)a1);
  }
  return v43;
}
