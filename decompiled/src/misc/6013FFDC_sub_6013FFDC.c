/* sub_6013FFDC
 * address: 0x6013FFDC   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6013FFDC(int a1)
{
  _DWORD *result; // r0
  int v2; // t1

  FIELD_U32(a1, 156) += 335544320;
  v2 = FIELD_U32(a1, 11848);
  result = (_DWORD *)(a1 + 11848);
  *result = v2 + 0x8000000;
  return result;
}
