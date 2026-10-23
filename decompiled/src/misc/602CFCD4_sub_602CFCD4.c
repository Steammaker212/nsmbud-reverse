/* sub_602CFCD4
 * address: 0x602CFCD4   size: 736   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_602CFCD4(int a1)
{
  ActiveCollider *v2; // r5
  ActiveColliderMgr *v3; // r6
  ActiveColliderMgr *v4; // r6
  ActiveColliderMgr *v5; // r6
  ActiveColliderMgr *v6; // r6
  ActiveColliderMgr *v7; // r6
  ActiveColliderMgr *v8; // r6
  ActiveColliderMgr *v9; // r6
  ActiveColliderMgr *v10; // r6
  ActiveColliderMgr *v11; // r6
  ActiveCollider *v12; // r4
  ActiveColliderMgr *v13; // r5
  ActiveColliderMgr *result; // r0

  v2 = (ActiveCollider *)(a1 + 6600);
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6600))
    && !ActiveColliderMgr_isInCreateList(v3, v2) )
  {
    ActiveColliderMgr_addToCreateList(v3, v2);
  }
  v4 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6904))
    && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 6904)) )
  {
    ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)(a1 + 6904));
  }
  v5 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7208))
    && !ActiveColliderMgr_isInCreateList(v5, (ActiveCollider *)(a1 + 7208)) )
  {
    ActiveColliderMgr_addToCreateList(v5, (ActiveCollider *)(a1 + 7208));
  }
  v6 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7512))
    && !ActiveColliderMgr_isInCreateList(v6, (ActiveCollider *)(a1 + 7512)) )
  {
    ActiveColliderMgr_addToCreateList(v6, (ActiveCollider *)(a1 + 7512));
  }
  v7 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7816))
    && !ActiveColliderMgr_isInCreateList(v7, (ActiveCollider *)(a1 + 7816)) )
  {
    ActiveColliderMgr_addToCreateList(v7, (ActiveCollider *)(a1 + 7816));
  }
  v8 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 8120))
    && !ActiveColliderMgr_isInCreateList(v8, (ActiveCollider *)(a1 + 8120)) )
  {
    ActiveColliderMgr_addToCreateList(v8, (ActiveCollider *)(a1 + 8120));
  }
  v9 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 8424))
    && !ActiveColliderMgr_isInCreateList(v9, (ActiveCollider *)(a1 + 8424)) )
  {
    ActiveColliderMgr_addToCreateList(v9, (ActiveCollider *)(a1 + 8424));
  }
  v10 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 8728))
    && !ActiveColliderMgr_isInCreateList(v10, (ActiveCollider *)(a1 + 8728)) )
  {
    ActiveColliderMgr_addToCreateList(v10, (ActiveCollider *)(a1 + 8728));
  }
  v11 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 9032))
    && !ActiveColliderMgr_isInCreateList(v11, (ActiveCollider *)(a1 + 9032)) )
  {
    ActiveColliderMgr_addToCreateList(v11, (ActiveCollider *)(a1 + 9032));
  }
  v12 = (ActiveCollider *)(a1 + 9336);
  v13 = ActiveColliderMgr_instance;
  result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v12);
  if ( !result )
  {
    result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v13, v12);
    if ( !result )
      return ActiveColliderMgr_addToCreateList(v13, v12);
  }
  return result;
}
