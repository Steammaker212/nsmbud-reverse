/* sub_60971870
 * address: 0x60971870   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60971870(int a1)
{
  int result; // r0

  result = sub_60921340(a1);
  *(_DWORD *)result = &off_60C5F2B4;
  FIELD_U64(result, 96) = 0x2000000001LL;
  return result;
}
