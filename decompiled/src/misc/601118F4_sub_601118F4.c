/* sub_601118F4
 * address: 0x601118F4   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601118F4(ColliderBase *a1)
{
  ColliderBase *v1; // r4

  v1 = a1;
  sub_60639354(&a1[19].field_70);
  v1 = (ColliderBase *)((char *)v1 + 6104);
  ColliderMgr_add(ColliderMgr_instance, v1);
  return sub_601601B8(v1);
}
