/* sub_608B0664
 * address: 0x608B0664   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608B0664(_DWORD *a1, int a2)
{
  _DWORD *result; // r0
  _DWORD *v5; // r6
  int v6; // r2
  int v7; // r3
  int v8; // r5
  int v9; // r7

  result = (_DWORD *)(*(int (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(a2 + 8) + 8))(
                       FIELD_U32(a2, 8),
                       FIELD_U32(a2, 16));
  v5 = result;
  if ( result )
  {
    qmemcpy(result, *(const void **)(a2 + 12), FIELD_U32(a2, 16));
    v6 = FIELD_U32(a2, 4);
    v7 = FIELD_U32(a2, 8);
    v8 = FIELD_U32(a2, 12);
    v9 = FIELD_U32(a2, 16);
    a1[8] = *(_DWORD *)a2;
    a1[9] = v6;
    a1[10] = v7;
    a1[11] = v8;
    a1[12] = v9;
    a1[11] = v5;
    return a1 + 8;
  }
  return result;
}
