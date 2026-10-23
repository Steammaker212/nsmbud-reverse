/* sub_602E7530
 * address: 0x602E7530   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602E7530(int result)
{
  FIELD_U32(result, 164) = *(_DWORD *)(FIELD_U32(result, 56) + 164);
  return result;
}
