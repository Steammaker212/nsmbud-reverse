/* sub_6015BA34
 * address: 0x6015BA34   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6015BA34(_DWORD *result)
{
  _DWORD *v1; // r5
  _DWORD *v2; // r6
  _DWORD *v3; // r8
  _DWORD *v4; // r2
  _DWORD *v5; // r4
  int v6; // r0
  int v7; // r2
  _DWORD *v8; // r1

  v1 = result + 11;
  v2 = (_DWORD *)result[11];
  if ( v2 )
  {
    v3 = result + 12;
    while ( 1 )
    {
      v5 = (_DWORD *)*v2;
      v2 = (_DWORD *)v2[1];
      v6 = v5[28];
      if ( v6 )
        (*(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)v6 + 16))(v6, v5);
      result = (_DWORD *)v5[11];
      v7 = v5[12];
      v8 = v5 + 10;
      if ( result )
        break;
      if ( v7 )
        goto LABEL_14;
      v4 = v1;
      if ( (_DWORD *)*v1 == v8 )
        goto LABEL_15;
LABEL_19:
      if ( !v2 )
        return result;
    }
    if ( v7 )
    {
LABEL_14:
      v4 = (_DWORD *)(v7 + 4);
    }
    else
    {
      v4 = v1;
      if ( (_DWORD *)*v1 != v8 )
        goto LABEL_16;
    }
LABEL_15:
    *v4 = result;
    result = (_DWORD *)v5[11];
    if ( !result )
    {
      result = v3;
      if ( (_DWORD *)*v3 != v8 )
      {
LABEL_18:
        v5[11] = 0;
        v5[12] = 0;
        goto LABEL_19;
      }
LABEL_17:
      *result = v5[12];
      goto LABEL_18;
    }
LABEL_16:
    result += 2;
    goto LABEL_17;
  }
  return result;
}
