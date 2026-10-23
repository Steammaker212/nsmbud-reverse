/* sub_603C5BB4
 * address: 0x603C5BB4   size: 516   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_603C5BB4(int a1)
{
  ActiveCollider *v2; // r6
  ActiveColliderMgr *v3; // r5
  ActiveColliderMgr *v4; // r5
  int v5; // r4
  int v6; // r0
  ActiveCollider *v7; // r6
  ActiveColliderMgr *v8; // r6
  ActiveColliderMgr *v9; // r6
  ActiveColliderMgr *v10; // r5
  ActiveColliderMgr *result; // r0

  v2 = (ActiveCollider *)(a1 + 188);
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v3, v2) )
  {
    ActiveColliderMgr_addToCreateList(v3, v2);
  }
  v4 = ActiveColliderMgr_instance;
  if ( FIELD_U8(a1, 27030) )
  {
    v5 = 0;
    do
    {
      v6 = 0;
      if ( (unsigned int)v5 < 0x20 )
        v6 = v5;
      v7 = (ActiveCollider *)(a1 + 304 * v6 + 15888);
      if ( !ActiveColliderMgr_isInActiveList(v4, v7) && !ActiveColliderMgr_isInCreateList(v4, v7) )
        ActiveColliderMgr_addToCreateList(v4, v7);
      v4 = ActiveColliderMgr_instance;
      ++v5;
    }
    while ( v5 < FIELD_U8(a1, 27030) );
  }
  if ( !ActiveColliderMgr_isInActiveList(v4, (ActiveCollider *)(a1 + 25616))
    && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 25616)) )
  {
    ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)(a1 + 25616));
  }
  v8 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 25920))
    && !ActiveColliderMgr_isInCreateList(v8, (ActiveCollider *)(a1 + 25920)) )
  {
    ActiveColliderMgr_addToCreateList(v8, (ActiveCollider *)(a1 + 25920));
  }
  v9 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 26224))
    && !ActiveColliderMgr_isInCreateList(v9, (ActiveCollider *)(a1 + 26224)) )
  {
    ActiveColliderMgr_addToCreateList(v9, (ActiveCollider *)(a1 + 26224));
  }
  v10 = ActiveColliderMgr_instance;
  result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(
                                  ActiveColliderMgr_instance,
                                  (ActiveCollider *)(a1 + 26528));
  if ( !result )
  {
    result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v10, (ActiveCollider *)(a1 + 26528));
    if ( !result )
      return ActiveColliderMgr_addToCreateList(v10, (ActiveCollider *)(a1 + 26528));
  }
  return result;
}
