/* sub_605FDF1C
 * address: 0x605FDF1C   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_605FDF1C(int a1)
{
  int v1; // s0
  _DWORD *result; // r0

  FIELD_U16(a1, 6118) = 0;
  if ( FIELD_U8(a1, 6121) )
    v1 = 0;
  else
    v1 = FIELD_U32(a1, 6104);
  result = (_DWORD *)(a1 + 6112);
  *result = v1;
  return result;
}
