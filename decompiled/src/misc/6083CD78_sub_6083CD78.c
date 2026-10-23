/* sub_6083CD78
 * address: 0x6083CD78   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6083CD78(int result, int a2, unsigned __int16 *a3)
{
  FIELD_U32(result, 4) = *a3;
  *(_BYTE *)result = 1;
  return result;
}
