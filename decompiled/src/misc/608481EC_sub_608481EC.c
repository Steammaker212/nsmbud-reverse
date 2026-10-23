/* sub_608481EC
 * address: 0x608481EC   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608481EC(int a1, _QWORD *a2)
{
  _DWORD *result; // r0
  int v3; // t1

  v3 = FIELD_U32(a1, 288);
  result = (_DWORD *)(a1 + 288);
  if ( (v3 & result[1]) != 0xFFFFFFFF )
  {
    *result = -1;
    result[1] = -1;
  }
  *(_QWORD *)result = *a2;
  return result;
}
