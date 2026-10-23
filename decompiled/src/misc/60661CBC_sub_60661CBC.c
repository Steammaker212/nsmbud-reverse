/* sub_60661CBC
 * address: 0x60661CBC   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelAnimation *__fastcall sub_60661CBC(int a1)
{
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6104) + 12) + 24) = -1082130432;
  return sub_6041838C((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6104) + 12) + 4));
}
