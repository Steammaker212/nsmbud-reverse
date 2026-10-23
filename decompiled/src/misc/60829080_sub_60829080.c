/* sub_60829080
 * address: 0x60829080   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60829080(int result, int a2, int a3)
{
  *(_DWORD *)(FIELD_U32(result, 40) + 4 * a2 + 19584) = a3;
  FIELD_U8(result, 46) = 1;
  return result;
}
