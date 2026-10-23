/* sub_602502E4
 * address: 0x602502E4   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602502E4(int a1)
{
  _DWORD *v1; // r0
  _DWORD *v2; // t1
  int v3; // r2
  unsigned int v4; // r1
  int *v5; // r3
  unsigned int v6; // r1
  int v7; // r1
  _DWORD *v8; // r1
  int v9; // r2
  unsigned int v10; // r3
  unsigned int v11; // r1
  int result; // r0

  v2 = *(_DWORD **)(a1 + 6304);
  v1 = (_DWORD *)(a1 + 6304);
  v3 = v2[3];
  v4 = v2[17];
  if ( v2[2] > v4 )
    v3 += 4 * v4;
  *(_DWORD *)(*(_DWORD *)v3 + 24) = 1065353216;
  v5 = *(int **)(*v1 + 12);
  v6 = *(_DWORD *)(*v1 + 68);
  if ( *(_DWORD *)(*v1 + 8) > v6 )
    v5 += v6;
  v7 = *v5;
  FIELD_U32(v7, 20) = 0x40000000;
  FIELD_U32(v7, 28) |= 2u;
  v8 = (_DWORD *)v1[1];
  v9 = v8[3];
  v10 = v8[2];
  v11 = v8[17];
  if ( v10 > v11 )
    v9 += 4 * v11;
  *(_DWORD *)(*(_DWORD *)v9 + 24) = 1065353216;
  result = v1[5];
  FIELD_U32(result, 24) = 1065353216;
  return result;
}
