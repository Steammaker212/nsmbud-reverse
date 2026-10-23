/* sub_6088FC88
 * address: 0x6088FC88   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6088FC88(int a1, _DWORD *a2)
{
  int result; // r0

  sub_6088003C(a2);
  result = FIELD_U32(a1, 84) + 1;
  FIELD_U32(a1, 84) = result;
  return result;
}
