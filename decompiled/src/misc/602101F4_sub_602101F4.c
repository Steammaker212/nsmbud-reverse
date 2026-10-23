/* sub_602101F4
 * address: 0x602101F4   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602101F4(int a1)
{
  int result; // r0

  result = *(_DWORD *)(sub_601CF9C0(dword_60C8AEF0) + 192);
  FIELD_U32(a1, 384) = result;
  return result;
}
