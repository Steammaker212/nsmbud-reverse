/* sub_6024A0CC
 * address: 0x6024A0CC   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6024A0CC(int a1, _DWORD *a2)
{
  int result; // r0

  *a2 = FIELD_U32(a1, 6308);
  result = FIELD_U32(a1, 6312);
  a2[1] = result;
  return result;
}
