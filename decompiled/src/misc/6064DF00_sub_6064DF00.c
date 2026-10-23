/* sub_6064DF00
 * address: 0x6064DF00   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6064DF00(int a1)
{
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6104));
  FIELD_U8(a1, 7324) = 0;
  FIELD_U32(a1, 7300) = 0;
  FIELD_U32(a1, 7320) = 0;
  return 7320;
}
