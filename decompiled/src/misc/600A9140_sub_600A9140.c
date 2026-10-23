/* sub_600A9140
 * address: 0x600A9140   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600A9140(int a1)
{
  ActiveCollider *v2; // r6
  ActiveColliderMgr *v3; // r5

  v2 = (ActiveCollider *)(a1 + 188);
  v3 = ActiveColliderMgr_instance;
  if ( ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    || ActiveColliderMgr_isInCreateList(v3, v2) == 1 )
  {
    return KoopalingBase__vf368(a1);
  }
  else
  {
    return 1;
  }
}
