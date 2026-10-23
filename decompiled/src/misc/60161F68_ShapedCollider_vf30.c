/* ShapedCollider_vf30
 * address: 0x60161F68   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ShapedCollider_vf30(_DWORD *a1)
{
  int *v2; // r5
  int v3; // t1
  int *v4; // r1
  int result; // r0
  int v6; // r12
  int v7; // lr
  int v8; // r3
  _DWORD *v9; // r1
  _DWORD *v10; // r2
  int v11; // r5
  int v12; // r5
  int v13; // r4

  ColliderBase_vf30(a1);
  v3 = a1[87];
  v2 = a1 + 87;
  v4 = v2 + 2;
  if ( v3 < v2[2] )
    v4 = v2;
  result = *v4;
  if ( *v4 >= 1 )
  {
    v6 = v2[1];
    v7 = v2[3];
    v8 = 0;
    do
    {
      --result;
      v9 = (_DWORD *)(v6 + v8);
      *(_WORD *)(v7 + v8) = *(_WORD *)(v6 + v8);
      v10 = (_DWORD *)(v7 + v8);
      v11 = *(_DWORD *)(v6 + v8 + 4);
      v8 += 32;
      v10[1] = v11;
      v10[2] = v9[2];
      v10[3] = v9[3];
      v10[4] = v9[4];
      v12 = v9[5];
      v13 = v9[6];
      v10[7] = v9[7];
      v10[6] = v13;
      v10[5] = v12;
    }
    while ( result );
  }
  return result;
}
