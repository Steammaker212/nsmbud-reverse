/* sub_608CB3EC
 * address: 0x608CB3EC   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608CB3EC(int a1, _DWORD *a2)
{
  int *v2; // lr
  _DWORD *v3; // r3
  int *v4; // r2
  int v5; // r5
  _DWORD *result; // r0
  int v7; // r1
  int v8; // r1

  v2 = a2 + 140;
  v3 = (_DWORD *)(a1 + 4);
  if ( a2 + 140 != (_DWORD *)(a1 + 4) )
  {
    v4 = (int *)a2[141];
    v5 = *v4;
    *(_DWORD *)(a2[140] + 4) = v4;
    *v4 = a2[140];
    FIELD_U32(v5, 4) = v2;
    a2[140] = v5;
  }
  result = *(_DWORD **)(a1 + 8);
  if ( v3 != result )
  {
    v7 = a2[113];
    while ( *(_DWORD *)(*v3 - 108) > v7 )
    {
      v3 = (_DWORD *)*v3;
      if ( v3 == result )
        goto LABEL_9;
    }
  }
  result = v3;
LABEL_9:
  v8 = *v2;
  *v2 = *v3;
  FIELD_U32(v8, 4) = result;
  *(_DWORD *)(*result + 4) = v2;
  *result = v8;
  return result;
}
