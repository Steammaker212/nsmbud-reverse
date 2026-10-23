/* sub_601BE438
 * address: 0x601BE438   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601BE438(_DWORD *a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r1
  int v4; // r2
  bool v5; // vf
  int v6; // r1
  _DWORD *v7; // r6
  int v8; // r0
  int v9; // r1
  int v10; // r1

  result = (StateMethodExecuter *)a1[286];
  if ( result )
  {
    if ( (int)result > 0 )
    {
      v3 = a1[284];
      v4 = a1[285];
      v5 = __OFSUB__(v4, v3);
      v6 = v4 - v3;
      if ( v6 < 0 != v5 )
        v6 = a1[285];
      v7 = (_DWORD *)(a1[283] + 60 * v6);
      sub_6019EC34(a1 + 287, v7);
      sub_6019EC34(a1 + 290, v7 + 3);
      a1[293] = v7[6];
      a1[294] = v7[7];
      a1[295] = v7[8];
      a1[296] = v7[9];
      a1[297] = v7[10];
      a1[298] = v7[11];
      v8 = v7[12];
      v9 = v7[13];
      a1[301] = v7[14];
      a1[300] = v9;
      a1[299] = v8;
      v10 = a1[285] + 1;
      if ( v10 >= a1[284] )
        v10 = 0;
      a1[285] = v10;
      --a1[286];
    }
    sub_6019EC34(a1 + 271, a1 + 287);
    return sub_601B69F4((int)a1, &stru_60C8AD90);
  }
  return result;
}
