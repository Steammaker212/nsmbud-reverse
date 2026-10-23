/* sub_6066C5E0
 * address: 0x6066C5E0   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6066C5E0(int a1)
{
  int v1; // r4
  ColliderBase *v2; // r5

  v1 = a1;
  v2 = (ColliderBase *)(a1 + 648);
  sub_601601B8((_DWORD *)(a1 + 648));
  ColliderMgr_removeRelated1(ColliderMgr_instance, v2);
  sub_601601B8((_DWORD *)(v1 + 1304));
  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(v1 + 1304));
  sub_601601B8((_DWORD *)(v1 + 1960));
  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(v1 + 1960));
  v1 += 2616;
  sub_601601B8((_DWORD *)v1);
  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)v1);
  return 1;
}
