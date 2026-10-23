/* sub_608BC67C
 * address: 0x608BC67C   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608BC67C(int a1)
{
  int *v1; // r12
  int v2; // r1
  int v3; // r3
  bool v4; // cc
  int v5; // r1
  _DWORD *v6; // r2
  int *v7; // r4
  int v8; // r6
  _DWORD *v9; // r0
  int v10; // r6
  int v11; // r1
  int v12; // r1
  int result; // r0

  v1 = (int *)(a1 + 428);
  v2 = FIELD_U8(a1, 196) + FIELD_U32(a1, 72);
  v3 = v2;
  if ( v2 <= 0 )
    v3 = 0;
  v4 = v2 <= 127;
  v5 = FIELD_U32(a1, 440);
  if ( !v4 )
    v3 = 127;
  v6 = (_DWORD *)(v5 + 16);
  if ( v1 != (int *)(v5 + 16) )
  {
    v7 = *(int **)(a1 + 432);
    v8 = *v7;
    *(_DWORD *)(FIELD_U32(a1, 428) + 4) = v7;
    *v7 = FIELD_U32(a1, 428);
    FIELD_U32(v8, 4) = v1;
    FIELD_U32(a1, 428) = v8;
  }
  v9 = *(_DWORD **)(v5 + 20);
  if ( v9 != v6 )
  {
    while ( 1 )
    {
      v10 = *((unsigned __int8 *)v9 - 232) + *(v9 - 89);
      v11 = v10;
      if ( v10 <= 0 )
        v11 = 0;
      if ( v10 > 127 )
        v11 = 127;
      if ( v11 > v3 )
        break;
      v9 = (_DWORD *)v9[1];
      if ( v9 == v6 )
        goto LABEL_16;
    }
    v6 = v9;
  }
LABEL_16:
  v12 = *v1;
  *v1 = *v9;
  FIELD_U32(v12, 4) = v6;
  result = *v6;
  *(_DWORD *)(*v6 + 4) = v1;
  *v6 = v12;
  return result;
}
