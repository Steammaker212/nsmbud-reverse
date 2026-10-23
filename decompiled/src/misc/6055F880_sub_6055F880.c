/* sub_6055F880
 * address: 0x6055F880   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6055F880(_DWORD *result, int a2)
{
  _DWORD *v2; // r4
  int v3; // r6
  int v4; // r5
  int *v5; // r7
  int v6; // r0
  bool v7; // zf
  int v8; // r3
  int v9; // r6
  int v10; // r0
  bool v11; // zf
  int v12; // r3
  int v13; // r6
  bool v14; // zf
  int v15; // r3

  v2 = result;
  if ( a2 == 1 )
  {
    v3 = result[3364];
    v5 = result + 3434;
    v4 = result[3434];
    v6 = sub_605603FC(result, v4 - 1, 2, -1);
    v7 = v6 == 0;
    if ( v6 )
      v7 = v3 == 0;
    if ( !v7 )
    {
      v8 = FIELD_U32(v6, 4);
      if ( v8 == 9 )
        v8 = 150;
      sub_6047E0EC(&dword_60CADD58, v3, 1, v8);
      v4 = *v5;
    }
    v9 = v2[3363];
    v10 = sub_605603FC(v2, v4, 2, 1);
    v11 = v10 == 0;
    if ( v10 )
      v11 = v9 == 0;
    if ( !v11 )
    {
      v12 = FIELD_U32(v10, 4);
      if ( v12 == 9 )
        v12 = 150;
      sub_6047E0EC(&dword_60CADD58, v9, 1, v12);
      v4 = *v5;
    }
    v13 = v2[3362];
    result = (_DWORD *)sub_605603FC(v2, v4 + 1, 2, 1);
    v14 = result == 0;
    if ( result )
      v14 = v13 == 0;
    if ( !v14 )
    {
      v15 = result[1];
      if ( v15 == 9 )
        v15 = 150;
      return (_DWORD *)sub_6047E0EC(&dword_60CADD58, v13, 1, v15);
    }
  }
  return result;
}
