/* sub_6098328C
 * address: 0x6098328C   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6098328C(_DWORD *a1, int a2, int a3)
{
  _DWORD *v6; // r0
  _DWORD *v7; // r5
  int i; // r2
  int v10; // r0
  int *v11; // r0
  int v12; // r1
  _DWORD *v13; // r7

  v6 = (_DWORD *)a1[8];
  v7 = a1 + 7;
  if ( v6 == a1 + 7 )
  {
LABEL_11:
    v10 = sub_60855BC8(40);
    if ( v10 )
      v11 = (int *)sub_60983BE4(v10, a3);
    else
      v11 = 0;
    v12 = *v11;
    *v11 = (int)v7;
    v13 = v11 + 2;
    FIELD_U32(v12, 4) = a1[8];
    *(_DWORD *)a1[8] = v12;
    a1[8] = v11;
    (*(void (__fastcall **)(_DWORD *, int *, int, int))(*a1 + 56))(a1, v11 + 2, a2, a3);
    return v13;
  }
  else
  {
LABEL_7:
    for ( i = 0; i < 128; ++i )
    {
      if ( *(unsigned __int8 *)(a3 + i) != *(unsigned __int8 *)(v6[8] + i) )
      {
        v6 = (_DWORD *)v6[1];
        if ( v6 == v7 )
          goto LABEL_11;
        goto LABEL_7;
      }
      if ( !*(_BYTE *)(a3 + i) )
        break;
    }
    return v6 + 2;
  }
}
