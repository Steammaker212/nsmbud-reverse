/* sub_60679890
 * address: 0x60679890   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60679890(int a1)
{
  _DWORD *result; // r0
  int v2; // t1

  v2 = FIELD_U32(a1, 8032);
  result = (_DWORD *)(a1 + 8032);
  if ( v2 )
    *result = 5;
  return result;
}
