/* sub_6099125C
 * address: 0x6099125C   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6099125C(int a1)
{
  int result; // r0

  sub_60991BA4();
  result = FIELD_U16(a1, 30) & 0xBFFF;
  FIELD_U16(a1, 30) = result;
  return result;
}
