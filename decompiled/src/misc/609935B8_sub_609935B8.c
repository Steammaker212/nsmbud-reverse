/* sub_609935B8
 * address: 0x609935B8   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609935B8(int a1, int a2, _DWORD *a3)
{
  int result; // r0

  sub_60990E4C(a1, a2, a3);
  FIELD_U16(a1, 30) &= ~0x2000u;
  result = a3[3];
  FIELD_U32(a1, 60) = result;
  return result;
}
