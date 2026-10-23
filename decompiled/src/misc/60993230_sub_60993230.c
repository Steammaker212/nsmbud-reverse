/* sub_60993230
 * address: 0x60993230   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60993230(int a1, int a2)
{
  int v2; // r12
  int v3; // r0
  int *v4; // lr
  int v5; // r2
  int v6; // r3
  _DWORD *v7; // r4
  int v8; // r4
  int v9; // r0
  int result; // r0
  _DWORD *v11; // r1
  int v12; // t1
  int v13; // r0
  int *v14; // r3
  int v15; // t1
  _DWORD *v16; // r1
  int v17; // t1
  _DWORD *v18; // r1
  int v19; // t1

  v2 = FIELD_U32(a1, 4);
  v3 = FIELD_U32(v2, 8);
  v4 = (int *)(v2 + 4);
  if ( v3 == v2 + 4 )
    goto LABEL_11;
  v5 = v3 - 4;
  v6 = 0;
  v7 = (_DWORD *)(v2 + 4);
LABEL_3:
  v8 = *v7 - 4;
  while ( 1 )
  {
    v9 = v8;
    if ( !v8 )
    {
      v12 = FIELD_U32(a2, 4);
      v11 = (_DWORD *)(a2 + 4);
      *v11 = v4;
      FIELD_U32(v12, 4) = FIELD_U32(v2, 8);
      **(_DWORD **)(v2 + 8) = v12;
      FIELD_U32(v2, 8) = v11;
      return v12;
    }
    if ( *(_DWORD *)(FIELD_U32(v8, 16) + 76) != FIELD_U32(a2, 16) )
      break;
    v8 = 0;
    v6 = v9;
    if ( v5 != v9 )
    {
      v7 = (_DWORD *)(v9 + 4);
      v6 = v9;
      goto LABEL_3;
    }
  }
  if ( !v6 )
  {
LABEL_11:
    v19 = FIELD_U32(a2, 4);
    v18 = (_DWORD *)(a2 + 4);
    *v18 = *v4;
    FIELD_U32(v19, 4) = v4;
    result = *v4;
    *(_DWORD *)(*v4 + 4) = v18;
    *v4 = v19;
  }
  else
  {
    v15 = FIELD_U32(v6, 4);
    v14 = (int *)(v6 + 4);
    v13 = v15;
    v17 = FIELD_U32(a2, 4);
    v16 = (_DWORD *)(a2 + 4);
    *v16 = v13;
    FIELD_U32(v17, 4) = v14;
    result = *v14;
    *(_DWORD *)(*v14 + 4) = v16;
    *v14 = v17;
  }
  return result;
}
