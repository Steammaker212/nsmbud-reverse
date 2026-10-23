/* sub_609992C4
 * address: 0x609992C4   size: 1132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609992C4(int a1, int a2, unsigned __int64 a3)
{
  int v4; // r0
  unsigned __int64 v5; // r6
  int v6; // r5
  int v7; // r7
  int v8; // r0
  int v9; // r5
  bool v10; // zf
  int v11; // r1
  int v12; // r1
  int v13; // r6
  int v14; // r1
  int result; // r0
  int v16; // r1
  int v17; // r2
  int v18; // r0
  unsigned int v19; // r3
  unsigned int v20; // r0
  int v21; // r2
  int *v22; // r2
  int v23; // r1
  int v24; // r2
  int v25; // r2
  int v26; // r1

  v4 = FIELD_U32(a2, 16);
  v5 = FIELD_U64(a2, 24);
  if ( v4 )
  {
    v6 = FIELD_U8(v4, 33);
    if ( v6 != 1 )
      v6 = 0;
  }
  else
  {
    v6 = 0;
  }
  if ( a3 >= v5 )
  {
    if ( v6 == 1 )
    {
      FIELD_U32(a2, 16) = FIELD_U32(v4, 20);
      FIELD_U32(v4, 20) = a2;
      FIELD_U8(v4, 33) = FIELD_U8(a2, 33);
      FIELD_U8(a2, 33) = 1;
      v5 = FIELD_U64(v4, 24);
    }
    else
    {
      v4 = a2;
    }
    HIDWORD(v5) ^= HIDWORD(a3);
    v10 = v5 == (unsigned int)a3;
    v11 = FIELD_U32(v4, 20);
    if ( v5 == (unsigned int)a3 )
      v10 = v11 == 0;
    if ( v10 )
    {
      *(_DWORD *)v4 = FIELD_U32(a1, 4);
      FIELD_U32(a1, 4) = v4;
      return 0;
    }
    if ( FIELD_U8(v11, 33) == 1
      || (v12 = FIELD_U32(v11, 16)) != 0 && FIELD_U8(v12, 33) == 1
      || (FIELD_U8(v4, 33) = FIELD_U8(v4, 33) == 0,
          *(_BYTE *)(FIELD_U32(v4, 16) + 33) = *(_BYTE *)(FIELD_U32(v4, 16) + 33) == 0,
          *(_BYTE *)(FIELD_U32(v4, 20) + 33) = *(_BYTE *)(FIELD_U32(v4, 20) + 33) == 0,
          v13 = FIELD_U32(v4, 16),
          (v14 = FIELD_U32(v13, 16)) == 0)
      || FIELD_U8(v14, 33) != 1 )
    {
      v13 = v4;
    }
    else
    {
      FIELD_U32(v4, 16) = FIELD_U32(v13, 20);
      FIELD_U32(v13, 20) = v4;
      FIELD_U8(v13, 33) = FIELD_U8(v4, 33);
      FIELD_U8(v4, 33) = 1;
      FIELD_U8(v13, 33) = FIELD_U8(v13, 33) == 0;
      *(_BYTE *)(FIELD_U32(v13, 16) + 33) = *(_BYTE *)(FIELD_U32(v13, 16) + 33) == 0;
      *(_BYTE *)(FIELD_U32(v13, 20) + 33) = *(_BYTE *)(FIELD_U32(v13, 20) + 33) == 0;
    }
    v16 = FIELD_U32(v13, 20);
    if ( FIELD_U64(v13, 24) == a3 )
    {
      v17 = FIELD_U32(v13, 20);
      do
      {
        v18 = v17;
        v17 = FIELD_U32(v17, 16);
      }
      while ( v17 );
      v9 = 0;
      if ( v16 )
      {
        v19 = FIELD_U32(v18, 28);
        v20 = FIELD_U32(v18, 24);
        v21 = FIELD_U32(v13, 20);
        do
        {
          if ( __PAIR64__(v19, v20) >= FIELD_U64(v21, 24) )
          {
            if ( FIELD_U64(v21, 24) >= __PAIR64__(v19, v20) )
            {
              v9 = v21;
              break;
            }
            v22 = (int *)(v21 + 20);
          }
          else
          {
            v22 = (int *)(v21 + 16);
          }
          v21 = *v22;
        }
        while ( v21 );
      }
      FIELD_U32(v9, 20) = sub_60999730(FIELD_U32(v13, 20));
      FIELD_U32(v9, 16) = FIELD_U32(v13, 16);
      FIELD_U8(v9, 33) = FIELD_U8(v13, 33);
      *(_DWORD *)v13 = FIELD_U32(a1, 4);
      FIELD_U32(a1, 4) = v13;
    }
    else
    {
      v9 = v13;
      FIELD_U32(v13, 20) = sub_609992C4(a1, v16);
    }
  }
  else
  {
    if ( v6
      || (v7 = FIELD_U32(v4, 16)) != 0 && FIELD_U8(v7, 33) == 1
      || (FIELD_U8(a2, 33) = FIELD_U8(a2, 33) == 0,
          FIELD_U8(v4, 33) = FIELD_U8(v4, 33) == 0,
          *(_BYTE *)(FIELD_U32(a2, 20) + 33) = *(_BYTE *)(FIELD_U32(a2, 20) + 33) == 0,
          v8 = FIELD_U32(a2, 20),
          (v9 = FIELD_U32(v8, 16)) == 0)
      || FIELD_U8(v9, 33) != 1 )
    {
      v9 = a2;
    }
    else
    {
      FIELD_U32(v8, 16) = FIELD_U32(v9, 20);
      FIELD_U32(v9, 20) = v8;
      FIELD_U8(v9, 33) = FIELD_U8(v8, 33);
      FIELD_U8(v8, 33) = 1;
      FIELD_U32(a2, 20) = v9;
      FIELD_U32(a2, 20) = FIELD_U32(v9, 16);
      FIELD_U32(v9, 16) = a2;
      FIELD_U8(v9, 33) = FIELD_U8(a2, 33);
      FIELD_U8(a2, 33) = 1;
      FIELD_U8(v9, 33) = FIELD_U8(v9, 33) == 0;
      *(_BYTE *)(FIELD_U32(v9, 16) + 33) = *(_BYTE *)(FIELD_U32(v9, 16) + 33) == 0;
      *(_BYTE *)(FIELD_U32(v9, 20) + 33) = *(_BYTE *)(FIELD_U32(v9, 20) + 33) == 0;
    }
    FIELD_U32(v9, 16) = sub_609992C4(a1, FIELD_U32(v9, 16));
  }
  v23 = FIELD_U32(v9, 20);
  if ( v23 && FIELD_U8(v23, 33) == 1 )
  {
    FIELD_U32(v9, 20) = FIELD_U32(v23, 16);
    FIELD_U32(v23, 16) = v9;
    FIELD_U8(v23, 33) = FIELD_U8(v9, 33);
    FIELD_U8(v9, 33) = 1;
  }
  else
  {
    v23 = v9;
  }
  result = FIELD_U32(v23, 16);
  if ( !result || FIELD_U8(result, 33) != 1 )
    return v23;
  v24 = FIELD_U32(result, 16);
  if ( v24 && FIELD_U8(v24, 33) == 1 )
  {
    FIELD_U32(v23, 16) = FIELD_U32(result, 20);
    FIELD_U32(result, 20) = v23;
    FIELD_U8(result, 33) = FIELD_U8(v23, 33);
    FIELD_U8(v23, 33) = 1;
    v25 = FIELD_U32(result, 16);
    if ( !v25 || FIELD_U8(v25, 33) != 1 )
      return result;
  }
  else
  {
    v25 = FIELD_U32(v23, 16);
    result = v23;
  }
  v26 = FIELD_U32(result, 20);
  if ( v26 )
  {
    if ( FIELD_U8(v26, 33) == 1 )
    {
      FIELD_U8(result, 33) = FIELD_U8(result, 33) == 0;
      FIELD_U8(v25, 33) = FIELD_U8(v25, 33) == 0;
      *(_BYTE *)(FIELD_U32(result, 20) + 33) = *(_BYTE *)(FIELD_U32(result, 20) + 33) == 0;
    }
  }
  return result;
}
