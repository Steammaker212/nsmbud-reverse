/* sub_60979864
 * address: 0x60979864   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60979864(_DWORD *result, int a2, int a3)
{
  _DWORD *v5; // r2
  __int16 v6; // r1
  int v7; // r4
  int v8; // r3
  int v9; // r1
  _DWORD *i; // r4
  int v11; // r2
  int v12; // r0
  int v13; // r1
  int v14; // r3
  int v15; // [sp+0h] [bp-20h]
  int v16; // [sp+4h] [bp-1Ch]

  v5 = (_DWORD *)result[52];
  v6 = *(_WORD *)(result[51] + 9748);
  if ( !v5 || (v6 & 4) != 0 )
  {
    if ( (v6 & 4) != 0 )
    {
      v9 = 1;
      v8 = 0;
    }
    else
    {
      v7 = result[432];
      v8 = (v7 > 0) | ((unsigned __int8)(v6 & 2) >> 1);
      v9 = 1;
      if ( v8 )
        v9 = v7 + 1;
    }
    for ( i = result; v5; v5 = (_DWORD *)v5[52] )
      i = v5;
    v11 = i[489];
    switch ( v11 )
    {
      case 2:
        v12 = (int)(result + 142);
        if ( v8 == 1 )
          return (_DWORD *)sub_60920CE4(v12, 26, a3, a3, v9, 5);
        v15 = a3;
        v16 = 6;
        v13 = 8;
        v14 = a3;
        return (_DWORD *)sub_6091FDB0(v12, v13, 26, v14, v15, v16, 5, 0, 0, 1);
      case 1:
        v9 *= 2;
        v15 = a2;
        v12 = (int)(result + 142);
        goto LABEL_19;
      case 0:
        v12 = (int)(result + 142);
        if ( v8 != 1 )
        {
          v15 = a2;
          v16 = 1;
          v13 = 1;
          goto LABEL_21;
        }
        v15 = a2;
LABEL_19:
        v16 = v9;
        v13 = 4;
LABEL_21:
        v14 = a2;
        return (_DWORD *)sub_6091FDB0(v12, v13, 26, v14, v15, v16, 5, 0, 0, 1);
    }
  }
  return result;
}
