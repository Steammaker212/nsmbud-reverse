/* sub_6065D0F4
 * address: 0x6065D0F4   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6065D0F4(int a1)
{
  _BYTE *v1; // r4
  ColliderBase *v2; // r5

  v1 = (_BYTE *)a1;
  v2 = (ColliderBase *)(a1 + 6432);
  sub_601601B8((_DWORD *)(a1 + 6432));
  ColliderMgr_removeRelated1(ColliderMgr_instance, v2);
  v1[6968] = 0;
  v1 += 6968;
  v1[3] = 0;
  v1[2] = 0;
  v1[1] = 0;
  return 6968;
}
