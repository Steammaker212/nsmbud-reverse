/* sub_60722DF0
 * address: 0x60722DF0   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_60722DF0(int a1)
{
  _BYTE *result; // r0
  int v2; // t1

  v2 = FIELD_U8(a1, 5944);
  result = (_BYTE *)(a1 + 5944);
  if ( !v2 )
    *result = 1;
  return result;
}
