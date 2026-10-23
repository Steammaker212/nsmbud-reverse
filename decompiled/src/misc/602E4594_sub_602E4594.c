/* sub_602E4594
 * address: 0x602E4594   size: 780   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_602E4594(int a1)
{
  ActiveCollider *v2; // r6
  ActiveColliderMgr *v3; // r5
  ActiveColliderMgr *v4; // r6
  int v5; // r10
  int v6; // r7
  int v7; // r9
  ActiveColliderMgr *v8; // r5
  ActiveColliderMgr *v9; // r6
  ActiveColliderMgr *v10; // r6
  int v11; // r7
  int v12; // r9
  int v13; // r10
  ActiveColliderMgr *v14; // r5
  ActiveColliderMgr *v15; // r6
  ActiveColliderMgr *v16; // r5
  ActiveColliderMgr *result; // r0

  v2 = (ActiveCollider *)(a1 + 188);
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v3, v2) )
  {
    ActiveColliderMgr_addToCreateList(v3, v2);
  }
  v4 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 10784))
    && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 10784)) )
  {
    ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)(a1 + 10784));
  }
  v5 = a1 + 6528;
  v6 = 0;
  v7 = a1 + 11088;
  v8 = ActiveColliderMgr_instance;
  do
  {
    if ( !ActiveColliderMgr_isInActiveList(v8, (ActiveCollider *)(v5 + v6))
      && !ActiveColliderMgr_isInCreateList(v8, (ActiveCollider *)(v5 + v6)) )
    {
      ActiveColliderMgr_addToCreateList(v8, (ActiveCollider *)(v5 + v6));
    }
    v9 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v7 + v6))
      && !ActiveColliderMgr_isInCreateList(v9, (ActiveCollider *)(v7 + v6)) )
    {
      ActiveColliderMgr_addToCreateList(v9, (ActiveCollider *)(v7 + v6));
    }
    v8 = ActiveColliderMgr_instance;
    v6 += 304;
  }
  while ( v6 != 1824 );
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 10176))
    && !ActiveColliderMgr_isInCreateList(v8, (ActiveCollider *)(a1 + 10176)) )
  {
    ActiveColliderMgr_addToCreateList(v8, (ActiveCollider *)(a1 + 10176));
  }
  v10 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 14736))
    && !ActiveColliderMgr_isInCreateList(v10, (ActiveCollider *)(a1 + 14736)) )
  {
    ActiveColliderMgr_addToCreateList(v10, (ActiveCollider *)(a1 + 14736));
  }
  v11 = 0;
  v12 = a1 + 12912;
  v13 = a1 + 8352;
  v14 = ActiveColliderMgr_instance;
  do
  {
    if ( !ActiveColliderMgr_isInActiveList(v14, (ActiveCollider *)(v13 + v11))
      && !ActiveColliderMgr_isInCreateList(v14, (ActiveCollider *)(v13 + v11)) )
    {
      ActiveColliderMgr_addToCreateList(v14, (ActiveCollider *)(v13 + v11));
    }
    v15 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v12 + v11))
      && !ActiveColliderMgr_isInCreateList(v15, (ActiveCollider *)(v12 + v11)) )
    {
      ActiveColliderMgr_addToCreateList(v15, (ActiveCollider *)(v12 + v11));
    }
    v14 = ActiveColliderMgr_instance;
    v11 += 304;
  }
  while ( v11 != 1824 );
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 10480))
    && !ActiveColliderMgr_isInCreateList(v14, (ActiveCollider *)(a1 + 10480)) )
  {
    ActiveColliderMgr_addToCreateList(v14, (ActiveCollider *)(a1 + 10480));
  }
  v16 = ActiveColliderMgr_instance;
  result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(
                                  ActiveColliderMgr_instance,
                                  (ActiveCollider *)(a1 + 15040));
  if ( !result )
  {
    result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v16, (ActiveCollider *)(a1 + 15040));
    if ( !result )
      return ActiveColliderMgr_addToCreateList(v16, (ActiveCollider *)(a1 + 15040));
  }
  return result;
}
