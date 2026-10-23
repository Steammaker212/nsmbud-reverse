/* sub_605DE950
 * address: 0x605DE950   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605DE950(int result, int a2, char a3)
{
  int v3; // r1
  int v4; // r8
  int *v5; // r12
  int v6; // r6
  int v7; // r3
  int v8; // r4
  int *v9; // lr
  int v10; // r4
  int v11; // r3
  int v12; // r0
  int v13; // r3
  int v14; // r0

  if ( a2 )
  {
    v3 = FIELD_U32(a2, 8);
    v5 = (int *)(result + 7056);
    v4 = FIELD_U32(result, 7056);
    if ( v4 )
    {
      v6 = FIELD_U32(result, 7056);
      v7 = FIELD_U32(result, 7052);
      while ( 1 )
      {
        v8 = FIELD_U32(result, 7048);
        if ( v7 < v8 )
          v8 = 0;
        if ( *(_DWORD *)(FIELD_U32(result, 7044) - 8 * v8 + 8 * v7) == v3 )
          break;
        --v6;
        ++v7;
        if ( !v6 )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      v9 = (int *)(result + 7044);
      v10 = FIELD_U32(result, 7048);
      if ( v4 < v10 )
        goto LABEL_14;
      if ( v4 >= 1 )
      {
        --v4;
        v11 = FIELD_U32(result, 7052) + 1;
        if ( v11 >= v10 )
          v11 = 0;
        FIELD_U32(result, 7052) = v11;
        *v5 = v4;
      }
      if ( v4 < v10 )
      {
LABEL_14:
        *v5 = v4 + 1;
        v12 = FIELD_U32(result, 7052) + v4;
        v13 = v12 - v10;
        if ( v12 < v10 )
          v13 = v12;
        v14 = *v9;
        *(_DWORD *)(*v9 + 8 * v13) = v3;
        result = v14 + 8 * v13;
        FIELD_U8(result, 4) = a3;
      }
    }
  }
  return result;
}
