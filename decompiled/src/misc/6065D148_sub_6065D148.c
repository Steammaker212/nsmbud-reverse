/* sub_6065D148
 * address: 0x6065D148   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6065D148(int a1)
{
  _BYTE *v1; // r4

  v1 = (_BYTE *)a1;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6432));
  v1[6968] = 0;
  v1 += 6968;
  v1[3] = 0;
  v1[2] = 0;
  v1[1] = 0;
  return 6968;
}
