/* spin_st_wait_ref
 * address: 0x60125C9C   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall spin_st_wait_ref(int a1)
{
  sub_60421AD4(FIELD_U32(a1, 7096));
  FIELD_U16(a1, 6276) = 15;
  return 6276;
}
