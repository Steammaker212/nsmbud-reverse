/* sub_60723530
 * address: 0x60723530   size: 696   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60723530(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int result; // r0
  int v9; // r11
  __int16 v10; // r5
  _WORD *v11; // r8
  int v12; // r10
  unsigned __int16 *v13; // r7
  int v14; // r0
  int v15; // r7
  int v16; // r0
  int v17; // r6
  int v18; // r5
  int v19; // r5
  int v20; // r7
  int v21; // r7
  int v22; // r5
  int v23; // t1
  int v24; // [sp+4h] [bp-34h]
  __int16 v25; // [sp+8h] [bp-30h]
  int v26; // [sp+Ch] [bp-2Ch]

  result = 3084;
  v9 = a6;
  v11 = (_WORD *)(a2 + 3084);
  v10 = FIELD_U16(a2, 3084);
  v26 = a3;
  if ( a3 < 1 )
  {
    v12 = 0;
    if ( a6 >= a5 )
      return result;
    goto LABEL_13;
  }
  v12 = 0;
  v13 = (unsigned __int16 *)(a2 + 3082);
  do
  {
    result = *(unsigned __int8 *)(FIELD_U32(a2, 3072) + v9);
    if ( result != 4 )
      break;
    sub_6072342C(a1, a2, v9 + 1);
    sub_6072334C(a1, (_WORD *)a2, a4);
    if ( *v13 != 0xFFFF )
      sub_607261E4(a1, a2, 0);
    v9 += 3;
    result = (unsigned __int16)*v11 + 1;
    *v11 = result;
    if ( v9 >= a5 )
    {
      a3 = v26;
      break;
    }
    a3 = v26;
    ++v12;
  }
  while ( v12 < v26 );
  if ( v9 < a5 )
  {
LABEL_13:
    v14 = FIELD_U32(a2, 3072);
    v15 = v9;
    v25 = v10;
    do
    {
      if ( *(_BYTE *)(v14 + v15) == 4 )
        goto LABEL_17;
      v15 += 3;
    }
    while ( v15 < a5 );
    if ( *(_BYTE *)(v14 + v15) == 4 )
    {
LABEL_17:
      v16 = (a5 - v15) / 3;
      if ( v12 < a3 - v16 )
      {
        v24 = a3 - v16;
        v17 = v9;
        v18 = a3 - v12 - v16;
        do
        {
          sub_6072342C(a1, a2, v17 + 1);
          sub_6072334C(a1, (_WORD *)a2, a4);
          if ( FIELD_U16(a2, 3082) != 0xFFFF )
            sub_607261E4(a1, a2, 1);
          v17 += 3;
          if ( v17 >= v15 )
            v17 = v9;
          --v18;
          ++*v11;
        }
        while ( v18 );
        v12 = v24;
        a3 = v26;
      }
      if ( v12 < a3 )
      {
        v19 = a3 - v12;
        v20 = v15 + 1;
        do
        {
          sub_6072342C(a1, a2, v20);
          sub_6072334C(a1, (_WORD *)a2, a4);
          if ( FIELD_U16(a2, 3082) != 0xFFFF )
            sub_607261E4(a1, a2, 0);
          v20 += 3;
          --v19;
          ++*v11;
        }
        while ( v19 );
      }
      goto LABEL_38;
    }
    if ( v12 < a3 )
    {
      v21 = a3 - v12;
      v22 = v9;
      do
      {
        sub_6072342C(a1, a2, v22 + 1);
        sub_6072334C(a1, (_WORD *)a2, a4);
        if ( FIELD_U16(a2, 3082) != 0xFFFF )
          sub_607261E4(a1, a2, 1);
        v22 += 3;
        if ( v22 >= a5 )
          v22 = v9;
        --v21;
        ++*v11;
      }
      while ( v21 );
    }
LABEL_38:
    *v11 = v25;
    v23 = FIELD_U16(a2, 3086);
    FIELD_U16(a2, 3086) = v23 + 1;
    return v23 + 1;
  }
  return result;
}
