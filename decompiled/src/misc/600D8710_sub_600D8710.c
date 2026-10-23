/* sub_600D8710
 * address: 0x600D8710   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_600D8710(int a1)
{
  _DWORD *result; // r0
  int v2; // r1
  int v3; // t1

  v3 = FIELD_U32(a1, 7108);
  result = (_DWORD *)(a1 + 7108);
  v2 = v3;
  if ( v3 )
  {
    FIELD_U32(v2, 40) = 1070386381;
    *(_DWORD *)(*result + 44) = 1083179008;
    *(_DWORD *)(*result + 48) = 1070386381;
    *(_DWORD *)(*result + 52) = 1083179008;
    *(_DWORD *)(*result + 56) = 1070386381;
    *(_DWORD *)(*result + 60) = 1083179008;
    *(_DWORD *)(*result + 64) = 1070386381;
    result = (_DWORD *)*result;
    result[17] = 1083179008;
  }
  return result;
}
