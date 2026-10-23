/* sub_605BACA4
 * address: 0x605BACA4   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605BACA4(ColliderBase *a1)
{
  ColliderBase *v1; // r4

  v1 = a1;
  sub_605BB950(&a1[17].field_140, 1);
  v1 = (ColliderBase *)((char *)v1 + 7456);
  ColliderMgr_removeRelated1(ColliderMgr_instance, v1);
  return sub_601601B8(v1);
}
