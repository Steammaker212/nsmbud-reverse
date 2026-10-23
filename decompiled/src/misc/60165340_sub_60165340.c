/* sub_60165340
 * address: 0x60165340   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60165340(int a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // r3
  int v4; // lr
  _DWORD *v5; // lr
  int v6; // r12
  _DWORD *v7; // r3
  int v8; // lr
  unsigned int v9; // r3
  _DWORD *result; // r0
  int v11; // r2
  int v12; // r1

  v3 = *(_DWORD **)(a1 + 344);
  v4 = a2[1];
  *v3 = *a2;
  v3[1] = v4;
  v5 = *(_DWORD **)(a1 + 344);
  v6 = a2[1];
  if ( FIELD_U32(a1, 340) > 1u )
    v5 += 2;
  *v5 = *a3;
  v5[1] = v6;
  v7 = *(_DWORD **)(a1 + 344);
  v8 = a3[1];
  if ( FIELD_U32(a1, 340) > 2u )
    v7 += 4;
  *v7 = *a3;
  v7[1] = v8;
  v9 = FIELD_U32(a1, 340);
  result = *(_DWORD **)(a1 + 344);
  v11 = a3[1];
  v12 = *a2;
  if ( v9 > 3 )
    result += 6;
  *result = v12;
  result[1] = v11;
  return result;
}
