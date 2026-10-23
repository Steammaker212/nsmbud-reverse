/* sub_607DEC98
 * address: 0x607DEC98   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_607DEC98(nn__hid__VibrationNode *a1)
{
  void *v1; // r0

  v1 = (void *)nn__hid__VibrationNode__dtor(a1);
  operator_delete(v1);
}
