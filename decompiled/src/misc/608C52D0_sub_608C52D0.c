/* sub_608C52D0
 * address: 0x608C52D0   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C52D0(int a1)
{
  FIELD_U8(a1, 24) = 1;
  return nn__os__SendMessageQueue(a1 + 48, 0);
}
