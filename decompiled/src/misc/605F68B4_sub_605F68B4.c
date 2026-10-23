/* sub_605F68B4
 * address: 0x605F68B4   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605F68B4(int a1)
{
  int result; // r0

  sub_605F4A94((unsigned __int8 *)a1);
  result = FIELD_U32(dword_60CBD894, 32);
  FIELD_U32(a1, 160) = result;
  return result;
}
