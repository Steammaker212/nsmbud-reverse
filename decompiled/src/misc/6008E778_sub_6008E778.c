/* sub_6008E778
 * address: 0x6008E778   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6008E778(int a1)
{
  ActiveCollider *v2; // r5
  ActiveColliderMgr *v3; // r6

  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = -1061158912;
  FIELD_U32(a1, 100) = -1102263091;
  FIELD_U32(a1, 136) = -1061158912;
  FIELD_U32(a1, 9356) = dword_60C82364 + dword_60C82348;
  v2 = (ActiveCollider *)(a1 + 7964);
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7964))
    && !ActiveColliderMgr_isInCreateList(v3, v2) )
  {
    ActiveColliderMgr_addToCreateList(v3, v2);
  }
  FIELD_U32(a1, 15268) = 20;
  return 15268;
}
