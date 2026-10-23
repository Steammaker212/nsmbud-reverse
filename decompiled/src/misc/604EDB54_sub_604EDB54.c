/* sub_604EDB54
 * address: 0x604EDB54   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_604EDB54(int a1)
{
  unsigned int result; // r0

  sub_60473DE4((_DWORD *)(a1 + 40), 1u, &dword_60CA61B0, 1);
  result = FIELD_U32(a1, 3652) & 0xFFFFFFEB | 4;
  FIELD_U32(a1, 3652) = result;
  return result;
}
