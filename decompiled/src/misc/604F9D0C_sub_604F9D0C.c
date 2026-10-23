/* sub_604F9D0C
 * address: 0x604F9D0C   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604F9D0C(int a1)
{
  int result; // r0

  result = sub_60473DE4((_DWORD *)(a1 + 40), 0, &dword_60CA6EBC, 0);
  FIELD_U8(a1, 3688) = 0;
  return result;
}
