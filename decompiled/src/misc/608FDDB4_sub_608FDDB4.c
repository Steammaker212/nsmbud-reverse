/* sub_608FDDB4
 * address: 0x608FDDB4   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608FDDB4(int a1)
{
  int result; // r0

  result = FIELD_U32(a1, 4) + 2 * FIELD_U32(a1, 8);
  *(_WORD *)(result - 2) = 0;
  return result;
}
