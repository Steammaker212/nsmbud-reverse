/* sub_607237E8
 * address: 0x607237E8   size: 724   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607237E8(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v8; // r6
  int v9; // r3
  int v10; // r5
  int v11; // r9
  __int16 v12; // r1
  _WORD *v13; // r8
  int v14; // r10
  int v15; // r7
  int v16; // r5
  int v17; // r7
  unsigned int v18; // r0
  int v19; // r6
  unsigned int v20; // r5
  int v21; // r7
  int v22; // r6
  int v23; // t1
  unsigned int v25; // [sp+4h] [bp-3Ch]
  int v26; // [sp+8h] [bp-38h]
  int v27; // [sp+Ch] [bp-34h]
  __int16 v29; // [sp+14h] [bp-2Ch]

  v8 = ~a3;
  v9 = a6;
  v10 = -a3;
  v11 = 0;
  v13 = (_WORD *)(a2 + 3084);
  v12 = FIELD_U16(a2, 3084);
  *v13 = v12 + ~(_WORD)a3;
  v29 = v12;
  v14 = a5 - 3;
  if ( a3 < 0 )
  {
    v11 = 0;
    do
    {
      if ( *(_BYTE *)(FIELD_U32(a2, 3072) + v14) != 4 )
        break;
      sub_6072342C(a1, a2, v14 + 1);
      sub_6072334C(a1, (_WORD *)a2, a4);
      if ( FIELD_U16(a2, 3082) != 0xFFFF )
        sub_607261E4(a1, a2, 0);
      v14 -= 3;
      v9 = a6;
      --*v13;
      if ( v14 < a6 )
        break;
      ++v11;
    }
    while ( v11 < v10 );
  }
  if ( v14 >= v9 )
  {
    v15 = v14;
    while ( *(_BYTE *)(FIELD_U32(a2, 3072) + v15) != 4 )
    {
      v15 -= 3;
      if ( v15 < v9 )
      {
        if ( v11 < v10 )
        {
          v16 = v14;
          v17 = -v11 - a3;
          do
          {
            sub_6072342C(a1, a2, v16 + 1);
            sub_6072334C(a1, (_WORD *)a2, a4);
            if ( FIELD_U16(a2, 3082) != 0xFFFF )
              sub_607261E4(a1, a2, 1);
            v16 -= 3;
            --*v13;
            if ( v16 < a6 )
              v16 = v14;
            --v17;
          }
          while ( v17 );
        }
        goto LABEL_34;
      }
    }
    v18 = ((int)(((unsigned __int64)(1431655765LL * v15) >> 32) - v15) >> 1)
        + ((unsigned int)(((unsigned __int64)(1431655765LL * v15) >> 32) - v15) >> 31);
    if ( v11 < (int)(v18 + v8) )
    {
      v25 = v18 + v8;
      v26 = v10;
      v27 = v8;
      v19 = v14;
      v20 = v18 - 1 - v11 - a3;
      do
      {
        sub_6072342C(a1, a2, v19 + 1);
        sub_6072334C(a1, (_WORD *)a2, a4);
        if ( FIELD_U16(a2, 3082) != 0xFFFF )
          sub_607261E4(a1, a2, 1);
        v19 -= 3;
        if ( v19 <= v15 )
          v19 = v14;
        --v20;
        --*v13;
      }
      while ( v20 );
      v11 = v25;
      v8 = v27;
      v10 = v26;
    }
    if ( v11 < v10 )
    {
      v21 = v15 + 1;
      v22 = v8 + 1 - v11;
      do
      {
        sub_6072342C(a1, a2, v21);
        sub_6072334C(a1, (_WORD *)a2, a4);
        if ( FIELD_U16(a2, 3082) != 0xFFFF )
          sub_607261E4(a1, a2, 0);
        v21 -= 3;
        --v22;
        --*v13;
      }
      while ( v22 );
    }
  }
LABEL_34:
  *v13 = v29;
  v23 = FIELD_U16(a2, 3086);
  FIELD_U16(a2, 3086) = v23 + 1;
  return v23 + 1;
}
