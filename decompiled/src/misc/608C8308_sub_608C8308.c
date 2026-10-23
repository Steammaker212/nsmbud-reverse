/* sub_608C8308
 * address: 0x608C8308   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608C8308(int a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r4
  _DWORD **v4; // r0
  _DWORD *v5; // r0
  _DWORD *v6; // r6
  _DWORD *v7; // r1
  int v8; // r5
  int v9; // t1
  int v10; // r2
  _DWORD *v12; // r0
  _DWORD *v13; // r1

  v2 = sub_608C66DC((_DWORD **)a1);
  v3 = v2;
  if ( v2 )
  {
    sub_608C7044((int)v2);
    v4 = *(_DWORD ***)(a1 + 28);
    if ( !v4 )
    {
LABEL_6:
      v9 = FIELD_U32(a1, 12);
      v8 = a1 + 12;
      v10 = v3[211];
      v3[211] = v9;
      FIELD_U32(v10, 4) = v8;
      *(_DWORD *)(*(_DWORD *)v8 + 4) = v3 + 211;
      *(_DWORD *)v8 = v10;
      return v3;
    }
    v5 = sub_608C66DC(v4);
    v6 = v5;
    if ( v5 )
    {
      *v5 = 0;
      v5[1] = 0;
      v5[2] = 0;
      v7 = sub_608C66DC(*(_DWORD ***)(a1 + 32));
      if ( v7 )
      {
        sub_608B0D44(v6, v7, FIELD_U32(a1, 36), a1 + 40);
        v3[71] = v6;
        goto LABEL_6;
      }
      sub_608C71F4((int)v3);
      sub_608C66F8((_DWORD *)a1, v3);
      v12 = *(_DWORD **)(a1 + 28);
      v13 = v6;
    }
    else
    {
      sub_608C71F4((int)v3);
      v12 = (_DWORD *)a1;
      v13 = v3;
    }
    sub_608C66F8(v12, v13);
  }
  return 0;
}
