/* sub_6029D328
 * address: 0x6029D328   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelAnimation *__fastcall sub_6029D328(int a1)
{
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 36) + 24) = 1065353216;
  return sub_6041838C((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 36) + 4));
}
