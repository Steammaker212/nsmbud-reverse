/* LargeGoomba_vf199
 * address: 0x6033E884   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LargeGoomba_vf199(int result)
{
  __int64 v1; // r2

  HIDWORD(v1) = 0x40000000;
  LODWORD(v1) = dword_60AF20B8[FIELD_U32(result, 80)];
  FIELD_U32(result, 132) = v1;
  FIELD_U64(result, 120) = v1;
  return result;
}
