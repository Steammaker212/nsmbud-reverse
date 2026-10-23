/* sub_60729D00
 * address: 0x60729D00   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60729D00(_DWORD *a1)
{
  _DWORD *result; // r0

  result = *(_DWORD **)(dword_60C995D0 + 32);
  if ( !result )
  {
    SE_SYS_ref((signed int)a1);
    SE_SYS_SWITCH_CT_ref((int)a1);
    return sub_6072A30C(a1);
  }
  return result;
}
