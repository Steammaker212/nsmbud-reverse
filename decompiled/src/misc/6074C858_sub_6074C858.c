/* sub_6074C858
 * address: 0x6074C858   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6074C858(int a1, int a2)
{
  _DWORD *v2; // r2
  int v3; // r3
  _DWORD *result; // r0
  int v5; // r2
  int v6; // t1
  bool v7; // zf

  v2 = (_DWORD *)(a1 + 656);
  v3 = FIELD_U32(a1, 656);
  if ( v3 && v3 == a2
    || (v6 = FIELD_U32(a1, 660), result = (_DWORD *)(a1 + 660), (v5 = v6) != 0) && (v7 = v5 == a2, v2 = result, v7) )
  {
    *v2 = 0;
    return 0;
  }
  return result;
}
