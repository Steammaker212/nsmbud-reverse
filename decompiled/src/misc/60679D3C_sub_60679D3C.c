/* sub_60679D3C
 * address: 0x60679D3C   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60679D3C(int a1)
{
  EventMgr_set(EventMgr__instance, (unsigned __int8)(FIELD_U8(a1, 539) - 1), 0, 1, 0, 0, 0, 0);
  return sub_6000F338(a1 + 6760);
}
