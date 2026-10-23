/* sub_608ACB18
 * address: 0x608ACB18   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608ACB18(int a1, int a2)
{
  _DWORD *v2; // r2
  int *v3; // r12
  int *v4; // r3
  int v5; // r5
  _DWORD *v6; // r3
  int v7; // r0
  int v8; // r5
  int v9; // r1
  int v10; // r0
  int v11; // r5
  int v12; // r0
  int v13; // r5
  int result; // r0

  v2 = (_DWORD *)(a1 + 8);
  v3 = (int *)(a2 + 412);
  if ( a2 + 412 != a1 + 8 )
  {
    v4 = *(int **)(a2 + 416);
    v5 = *v4;
    *(_DWORD *)(FIELD_U32(a2, 412) + 4) = v4;
    *v4 = FIELD_U32(a2, 412);
    FIELD_U32(v5, 4) = v3;
    FIELD_U32(a2, 412) = v5;
  }
  v6 = *(_DWORD **)(a1 + 12);
  if ( v6 != v2 )
  {
    v7 = FIELD_U8(a1, 88);
    v8 = FIELD_U8(a2, 196) + FIELD_U32(a2, 72);
    v9 = 0;
    if ( v8 > 0 )
      v9 = v8;
    if ( v8 > 127 )
      v9 = 127;
    if ( v7 )
    {
      while ( 1 )
      {
        v10 = *((unsigned __int8 *)v6 - 216) + *(v6 - 85);
        v11 = 0;
        if ( v10 > 0 )
          v11 = *((unsigned __int8 *)v6 - 216) + *(v6 - 85);
        if ( v10 > 127 )
          v11 = 127;
        if ( v9 <= v11 )
          break;
        v6 = (_DWORD *)v6[1];
        if ( v6 == v2 )
          goto LABEL_24;
      }
    }
    else
    {
      while ( 1 )
      {
        v12 = *((unsigned __int8 *)v6 - 216) + *(v6 - 85);
        v13 = 0;
        if ( v12 > 0 )
          v13 = *((unsigned __int8 *)v6 - 216) + *(v6 - 85);
        if ( v12 > 127 )
          v13 = 127;
        if ( v9 < v13 )
          break;
        v6 = (_DWORD *)v6[1];
        if ( v6 == v2 )
          goto LABEL_24;
      }
    }
    v2 = v6;
  }
LABEL_24:
  result = *v3;
  *v3 = *v6;
  FIELD_U32(result, 4) = v2;
  *(_DWORD *)(*v2 + 4) = v3;
  *v2 = result;
  return result;
}
