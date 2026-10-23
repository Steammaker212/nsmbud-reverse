/* sub_60603854
 * address: 0x60603854   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60603854(int a1)
{
  return sub_6060426C(a1, (FIELD_U64(a1, 6104) & FIELD_U64(EventMgr__instance, 16)) == FIELD_U64(a1, 6104));
}
