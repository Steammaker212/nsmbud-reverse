/* sub_6003CC84
 * address: 0x6003CC84   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6003CC84(int a1)
{
  ColliderBase *v1; // r4
  int v2; // r5

  v1 = (ColliderBase *)a1;
  v2 = a1 + 8336;
  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 8336));
  sub_601601B8(v2);
  v1 = (ColliderBase *)((char *)v1 + 8856);
  ColliderMgr_removeRelated1(ColliderMgr_instance, v1);
  return sub_601601B8(v1);
}
