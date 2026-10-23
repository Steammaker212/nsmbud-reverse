/* sub_601F837C
 * address: 0x601F837C   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601F837C(int a1)
{
  int result; // r0

  result = sub_601E4EA4(dword_60C8B13C, 45, 0, a1 + 80, 1);
  FIELD_U32(a1, 716) = result;
  return result;
}
