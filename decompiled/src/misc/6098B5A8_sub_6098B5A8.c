/* sub_6098B5A8
 * address: 0x6098B5A8   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6098B5A8(int result, int a2)
{
  __int64 v2; // r2

  LODWORD(v2) = result + 288;
  HIDWORD(v2) = result + 332;
  FIELD_U64(a2, 192) = v2;
  return result;
}
