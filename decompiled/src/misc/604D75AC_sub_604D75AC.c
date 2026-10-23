/* sub_604D75AC
 * address: 0x604D75AC   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604D75AC(int a1)
{
  int result; // r0

  FIELD_U16(a1, 36) = 0;
  FIELD_U16(a1, 4692) = 0;
  sub_6047EABC((_DWORD *)(a1 + 3680));
  result = FIELD_U32(a1, 6128);
  FIELD_U32(a1, 6124) = result;
  return result;
}
