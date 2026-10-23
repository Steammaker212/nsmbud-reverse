/* sub_607257F4
 * address: 0x607257F4   size: 836   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607257F4(int a1, int a2, int a3, int a4)
{
  int v7; // r1
  int v8; // r0
  int v9; // r2
  int v10; // r3
  int v11; // r7
  int v12; // r2
  int v13; // r1
  int v14; // r2
  int v15; // r2
  int v16; // r1
  int v17; // r4
  int v18; // r2
  int v19; // r8
  int result; // r0
  unsigned __int16 *v21; // r11
  int v22; // r1
  bool v23; // cc
  __int16 v24; // r1
  bool v25; // cc
  __int16 *v26; // r11
  int v27; // r1
  int v28; // r4
  int v29; // r9
  int v30; // r3
  __int16 v31; // r2
  int v32; // r7
  bool v33; // cc
  int v34; // r1
  bool v35; // cc
  int v36; // r7
  int v37; // r1
  bool v38; // cc
  int v39; // [sp+8h] [bp-50h]
  int v40; // [sp+Ch] [bp-4Ch]
  int v41; // [sp+18h] [bp-40h]
  int v42; // [sp+1Ch] [bp-3Ch]
  __int16 v43; // [sp+20h] [bp-38h]
  _WORD *v44; // [sp+24h] [bp-34h]
  int v45; // [sp+28h] [bp-30h]
  int v47[10]; // [sp+30h] [bp-28h] BYREF

  v7 = a4;
  v8 = FIELD_U32(a2, 3072);
  do
  {
    v9 = *(unsigned __int8 *)(v8 + v7);
    v7 += 3;
  }
  while ( v9 != 254 );
  v10 = v7 - 3;
  v11 = v7 - 2;
  v12 = *(unsigned __int8 *)(v8 + v7 - 2);
  if ( v12 != 255 && (v12 & 2) != 0 )
  {
    do
    {
      v13 = v11;
      do
      {
        v14 = *(unsigned __int8 *)(v8 + v13);
        v13 += 3;
      }
      while ( v14 != 254 );
      v15 = *(unsigned __int8 *)(v8 + v13 - 2);
      if ( v15 == 255 )
        break;
      v11 = v13 - 2;
    }
    while ( (v15 & 2) != 0 );
    v11 = v13 - 2;
    v10 = v13 - 3;
  }
  v16 = 0;
  v17 = v11;
  while ( 1 )
  {
    v18 = *(unsigned __int8 *)(v8 + v17);
    if ( v18 == 255 )
      break;
    if ( v18 == 254 )
    {
      ++v17;
      ++v16;
    }
    else
    {
      v17 += 3;
    }
  }
  v19 = 0;
  v21 = (unsigned __int16 *)(a2 + 3100);
  result = FIELD_U16(a2, 3100);
  FIELD_U16(a2, 3084) = FIELD_U16(a2, 3094);
  FIELD_U16(a2, 3086) = FIELD_U16(a2, 3096);
  v47[0] = 0;
  v45 = result - v16;
  v42 = v10;
  if ( result && a4 >= 1 )
  {
    v19 = 0;
    do
    {
      sub_60723CC0(a1, a2, v47, FIELD_U16(a2, 3098), a3);
      ++v19;
      v22 = ++v47[0];
      result = *v21;
      v23 = v19 < result;
      if ( v19 < result )
        v23 = v22 < a4;
    }
    while ( v23 );
  }
  v24 = FIELD_U16(a2, 3078);
  v47[0] = a4;
  v25 = v19 < v45;
  if ( v19 < v45 )
    v25 = v19 < result;
  if ( v25 )
  {
    v44 = (_WORD *)(a2 + 3098);
    if ( (v24 & 0xFFFE) == 2 )
    {
      v26 = (__int16 *)(a2 + 3084);
      v39 = v11;
      v40 = v17;
      v41 = a4;
      v27 = a4;
      do
      {
        v28 = v27;
        v29 = (unsigned __int16)*v44;
        do
        {
          v30 = FIELD_U32(a2, 3072) + v28;
          v28 += 3;
        }
        while ( FIELD_U8(v30, 3) != 254 );
        v31 = *v26;
        if ( *v44 )
        {
          v32 = v27 + 1;
          v43 = *v26;
          do
          {
            sub_6072342C(a1, a2, v32);
            sub_6072334C(a1, (_WORD *)a2, a3);
            if ( FIELD_U16(a2, 3082) != 0xFFFF )
              sub_607261E4(a1, a2, 1);
            --v29;
            ++*v26;
          }
          while ( v29 );
          v31 = v43;
          LOWORD(result) = FIELD_U16(a2, 3100);
        }
        *v26 = v31;
        ++v19;
        ++FIELD_U16(a2, 3086);
        v27 = v41;
        if ( v28 < v42 )
          v27 = v28 + 1;
        v33 = v19 < v45;
        if ( v19 < v45 )
          v33 = v19 < (unsigned __int16)result;
      }
      while ( v33 );
      v17 = v40;
      v11 = v39;
      v21 = (unsigned __int16 *)(a2 + 3100);
      v47[0] = v27;
    }
    else
    {
      do
      {
        sub_60723CC0(a1, a2, v47, (unsigned __int16)*v44, a3);
        v34 = a4;
        ++v19;
        if ( v47[0] < v42 )
          v34 = v47[0] + 1;
        v47[0] = v34;
        result = *v21;
      }
      while ( v19 < v45 && v19 < result );
    }
  }
  result = (unsigned __int16)result;
  v47[0] = v11;
  v35 = v19 < (unsigned __int16)result;
  if ( v19 < (unsigned __int16)result )
    v35 = v11 < v17;
  if ( v35 )
  {
    v36 = v19 + 1;
    do
    {
      sub_60723CC0(a1, a2, v47, FIELD_U16(a2, 3098), a3);
      result = ++v47[0];
      v37 = *v21;
      v38 = v36 < v37;
      if ( v36 < v37 )
      {
        ++v36;
        v38 = result < v17;
      }
    }
    while ( v38 );
  }
  return result;
}
