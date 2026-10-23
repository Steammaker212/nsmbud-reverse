/* sub_6061C1FC
 * address: 0x6061C1FC   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6061C1FC(int a1)
{
  ColliderBase *v1; // r4

  v1 = (ColliderBase *)(a1 + 6112);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 200))(a1);
  ColliderMgr_removeRelated1(ColliderMgr_instance, v1);
  return 1;
}
