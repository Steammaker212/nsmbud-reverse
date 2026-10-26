/* LargeGoomba_ctor
 * address: 0x6033E624   size: 68   group: misc
 * sym: # LargeGoomba_ctor as UNKNOWN
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall LargeGoomba_ctor(int a1)
{
  int v2; // r0
  _DWORD *result; // r0

  v2 = operator_new(0x1B38u);
  result = (_DWORD *)sub_6033FC60(v2, a1);
  *result = LargeGoomba_vtable;
  result[1739] = 0;
  result[1740] = 0;
  return result;
}
