/* sub_603A9110
 * address: 0x603A9110   size: 1184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_603A9110(int a1)
{
  int Area; // r5
  int v3; // r4
  int v4; // r6
  unsigned int v5; // r3
  int v6; // s0
  int v7; // r0
  int v8; // r10
  int v9; // r11
  int v10; // r4
  unsigned int v11; // r5
  __int16 *v12; // r1
  int v13; // r2
  int v14; // r7
  unsigned int v15; // r2
  int v16; // r3
  int v17; // r7
  unsigned int v18; // r7
  _BYTE *v19; // r0
  char v20; // r2
  bool v21; // zf
  int v22; // r0
  int v23; // r0
  _DWORD *v24; // r0
  int v25; // r7
  int v26; // r2
  __int16 *v27; // r3
  int v28; // r1
  int v29; // r3
  int v30; // r12
  int v31; // r5
  int v32; // r4
  char v33; // r3
  int v34; // r2
  int v35; // r8
  int v36; // lr
  int v37; // r5
  int v38; // r12
  int v39; // r1
  int v40; // r5
  int v41; // r1
  int v42; // r5
  int v43; // r4
  int v44; // r1
  int v45; // r3
  int v46; // r4
  int v47; // r2
  int v48; // r1
  int v49; // r5
  int v50; // r4
  int v51; // r1
  int v52; // r2
  int v53; // r4
  int v54; // r5
  int v55; // r1
  unsigned int result; // r0
  unsigned int v57; // [sp+0h] [bp-30h]
  _DWORD *v58; // [sp+4h] [bp-2Ch]
  int v59; // [sp+8h] [bp-28h]

  Area = Level_getArea(Level_instance, FIELD_U8(LevelInfo_instance, 18));
  v3 = sub_60727908(Area, (FIELD_U32(a1, 20) >> 4) & 0x1F);
  v4 = sub_60727950(Area, (FIELD_U32(a1, 20) >> 4) & 0x1F);
  v5 = 0;
  v6 = (int)FIELD_F32(a1, 23572);
  v59 = v3;
  v7 = FIELD_U16(v3, 4);
  v8 = v6;
  v9 = (unsigned __int8)(FIELD_U32(a1, 20) >> 12);
  if ( v9 < v7 - 1 )
  {
    v5 = 0;
    v10 = (unsigned __int8)(FIELD_U32(a1, 20) >> 12);
    v11 = FIELD_U32(a1, 23616);
    v12 = (__int16 *)(v4 + 20 * v9 + 22);
    do
    {
      if ( v10 == v11 && FIELD_U8(a1, 23612) )
      {
        FIELD_U32(a1, 23616) = v5;
        v11 = v5;
        LOWORD(v7) = FIELD_U16(v59, 4);
      }
      ++v10;
      v13 = (__int16)(*(v12 - 1) / v6) - (__int16)(*(v12 - 11) / v6);
      v14 = *(v12 - 10);
      if ( v13 < 0 )
        LOWORD(v13) = *(v12 - 11) / v6 - *(v12 - 1) / v6;
      v15 = v5 + (__int16)v13;
      v16 = *v12;
      v12 += 10;
      v17 = (__int16)(v16 / v6) - (__int16)(v14 / v6);
      if ( v17 < 0 )
        v17 = -v17;
      v5 = v15 + (__int16)v17;
    }
    while ( v10 < (unsigned __int16)v7 - 1 );
  }
  v18 = v5 + 2;
  FIELD_U32(a1, 23584) = v5;
  v57 = v5;
  FIELD_U32(a1, 23576) = operator_new_8DE09C(v5 + 2);
  v19 = (_BYTE *)operator_new_8DE09C(v18);
  v21 = v18 == 0;
  if ( v18 )
    v20 = 0;
  FIELD_U32(a1, 23580) = v19;
  if ( v18 )
  {
    *v19 = v20;
    v21 = v18 == 1;
  }
  v58 = (_DWORD *)(a1 + 23580);
  if ( !v21 )
  {
    if ( (((_BYTE)v57 + 1) & 3) != 0 )
    {
      v22 = 1;
      do
        *(_BYTE *)(FIELD_U32(a1, 23580) + v22++) = 0;
      while ( v22 - (((_BYTE)v57 + 1) & 3) != 1 );
    }
    else
    {
      v22 = 1;
    }
    if ( v57 >= 3 )
    {
      v23 = v22 + 3;
      do
      {
        *(_BYTE *)(*v58 + v23 - 3) = 0;
        *(_BYTE *)(*v58 + v23 - 2) = 0;
        *(_BYTE *)(*v58 + v23 - 1) = 0;
        *(_BYTE *)(*v58 + v23) = 0;
        v23 += 4;
      }
      while ( v23 - v57 != 5 );
    }
  }
  v24 = (_DWORD *)(a1 + 23576);
  if ( v9 < FIELD_U16(v59, 4) - 1 )
  {
    v25 = 1;
    do
    {
      v26 = 5 * v9++;
      v27 = (__int16 *)(v4 + 4 * v26);
      v28 = v27[11] / v8 - v27[1] / v8;
      v29 = v27[10] / v8 - *v27 / v8;
      v30 = (__int16)v28;
      v31 = v29 << 16;
      v32 = (__int16)v29;
      if ( v28 << 16 <= -65536 )
        v30 = -(__int16)v28;
      if ( v31 <= -65536 )
        v32 = -(__int16)v29;
      v33 = 0;
      v34 = (__int16)v30;
      v35 = (v31 >> 31) & 3;
      v36 = (__int16)v32;
      if ( v28 << 16 )
        v33 = 2;
      if ( (v28 & 0x8000) != 0 )
        v33 = 1;
      if ( v31 > 0 )
        LOBYTE(v35) = 4;
      if ( (__int16)v32 <= (__int16)v30 )
      {
        if ( v32 << 16 < 1 )
        {
          v38 = 0;
        }
        else
        {
          v40 = 0;
          v38 = 0;
          do
          {
            v41 = v38 + v25;
            ++v40;
            v38 += 2;
            *(_BYTE *)(*v24 + v41) = v35;
            *(_BYTE *)(*v24 + v41 + 1) = v33;
          }
          while ( v40 < (__int16)v32 );
        }
        if ( (__int16)v32 < v34 )
        {
          v49 = v38 + v34;
          v50 = v34 - 1;
          if ( ((v34 - v36) & 1) != 0 )
          {
            v51 = v38 + v25;
            ++v38;
            *(_BYTE *)(*v24 + v51) = v33;
          }
          v52 = v49 - v36;
          if ( v50 != v36 )
          {
            v53 = v38 + v25;
            v54 = v49 - v38 - v36;
            do
            {
              v54 -= 2;
              *(_BYTE *)(*v24 + v53) = v33;
              v55 = *v24 + v53;
              v53 += 2;
              FIELD_U8(v55, 1) = v33;
            }
            while ( v54 );
          }
          v38 = v52;
        }
      }
      else
      {
        if ( v30 << 16 < 1 )
        {
          v38 = 0;
        }
        else
        {
          v37 = 0;
          v38 = 0;
          do
          {
            v39 = v38 + v25;
            ++v37;
            v38 += 2;
            *(_BYTE *)(*v24 + v39) = v35;
            *(_BYTE *)(*v24 + v39 + 1) = v33;
          }
          while ( v37 < v34 );
        }
        if ( (__int16)v32 > v34 )
        {
          v42 = v38 + (__int16)v32;
          v43 = (__int16)v32 - 1;
          if ( ((v36 - v34) & 1) != 0 )
          {
            v44 = v38 + v25;
            ++v38;
            *(_BYTE *)(*v24 + v44) = v35;
          }
          v45 = v42 - v34;
          if ( v43 != v34 )
          {
            v46 = v38 + v25;
            v47 = v42 - v38 - v34;
            do
            {
              v47 -= 2;
              *(_BYTE *)(*v24 + v46) = v35;
              v48 = *v24 + v46;
              v46 += 2;
              FIELD_U8(v48, 1) = v35;
            }
            while ( v47 );
          }
          v38 = v45;
        }
      }
      v25 += v38;
      if ( *(_BYTE *)(v4 + 20 * v9 + 16) == 1 )
        *(_BYTE *)(*v58 + v25) = 1;
    }
    while ( v9 < FIELD_U16(v59, 4) - 1 );
  }
  *(_BYTE *)*v24 = 0;
  result = *v24 + v57;
  FIELD_U8(result, 1) = 0;
  return result;
}
