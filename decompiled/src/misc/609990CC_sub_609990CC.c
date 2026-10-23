/* sub_609990CC
 * address: 0x609990CC   size: 456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609990CC(int a1, int a2, int a3)
{
  int v3; // r4
  unsigned __int64 v4; // r6
  int v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r1
  int v10; // r1
  int v11; // r2

  v3 = a2;
  if ( !a2 )
  {
    FIELD_U8(a3, 33) = 1;
    FIELD_U32(a3, 16) = 0;
    FIELD_U32(a3, 20) = 0;
    return a3;
  }
  v4 = FIELD_U64(a2, 24);
  if ( FIELD_U64(a3, 24) >= v4 )
  {
    if ( v4 >= FIELD_U64(a3, 24) )
    {
      if ( a2 != a3 )
      {
        FIELD_U32(a3, 20) = FIELD_U32(a2, 20);
        FIELD_U32(a3, 16) = FIELD_U32(a2, 16);
        FIELD_U8(a3, 33) = FIELD_U8(a2, 33);
        *(_DWORD *)a2 = FIELD_U32(a1, 4);
        FIELD_U32(a1, 4) = a2;
        v3 = a3;
      }
    }
    else
    {
      FIELD_U32(a2, 20) = sub_609990CC(a1, FIELD_U32(a2, 20), a3);
    }
  }
  else
  {
    FIELD_U32(a2, 16) = sub_609990CC(a1, FIELD_U32(a2, 16), a3);
  }
  v6 = FIELD_U32(v3, 20);
  if ( v6 && FIELD_U8(v6, 33) == 1 && ((v7 = FIELD_U32(v3, 16)) == 0 || FIELD_U8(v7, 33) != 1) )
  {
    FIELD_U32(v3, 20) = FIELD_U32(v6, 16);
    FIELD_U32(v6, 16) = v3;
    FIELD_U8(v6, 33) = FIELD_U8(v3, 33);
    FIELD_U8(v3, 33) = 1;
  }
  else
  {
    v6 = v3;
  }
  v8 = FIELD_U32(v6, 16);
  if ( v8 )
  {
    if ( FIELD_U8(v8, 33) == 1 && (v9 = FIELD_U32(v8, 16)) != 0 && FIELD_U8(v9, 33) == 1 )
    {
      FIELD_U32(v6, 16) = FIELD_U32(v8, 20);
      FIELD_U32(v8, 20) = v6;
      FIELD_U8(v8, 33) = FIELD_U8(v6, 33);
      FIELD_U8(v6, 33) = 1;
      v6 = v8;
      v10 = FIELD_U32(v8, 16);
      if ( !v10 )
        return v8;
    }
    else
    {
      v10 = FIELD_U32(v6, 16);
    }
    if ( FIELD_U8(v10, 33) == 1 )
    {
      v11 = FIELD_U32(v6, 20);
      if ( v11 )
      {
        if ( FIELD_U8(v11, 33) == 1 )
        {
          FIELD_U8(v6, 33) = FIELD_U8(v6, 33) == 0;
          FIELD_U8(v10, 33) = FIELD_U8(v10, 33) == 0;
          *(_BYTE *)(FIELD_U32(v6, 20) + 33) = *(_BYTE *)(FIELD_U32(v6, 20) + 33) == 0;
        }
      }
    }
  }
  return v6;
}
