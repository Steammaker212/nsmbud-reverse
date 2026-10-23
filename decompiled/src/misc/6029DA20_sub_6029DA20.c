/* sub_6029DA20
 * address: 0x6029DA20   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6029DA20(int a1)
{
  int v1; // r1
  int result; // r0

  v1 = FIELD_U32(a1, 6764);
  result = **(_DWORD **)(FIELD_U32(a1, 6300) + 36);
  FIELD_U32(result, 20) = v1;
  FIELD_U32(result, 28) |= 2u;
  return result;
}
