/* sub_60072F14
 * address: 0x60072F14   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_60072F14(int a1)
{
  int v2; // r7
  ActiveCollider *v3; // r5
  ActiveColliderMgr *v4; // r6
  ActiveColliderMgr *v5; // r6
  ActiveColliderMgr *v6; // r6
  ActiveColliderMgr *v7; // r5
  ActiveColliderMgr *result; // r0
  ActiveColliderMgr *v9; // r5

  sub_602360C0(a1 + 25400);
  sub_602360C0(a1 + 25504);
  sub_602360C0(a1 + 25596);
  sub_602360C0(a1 + 25660);
  EffectData_init((EffectData *)(a1 + 25724));
  v2 = 40;
  v3 = (ActiveCollider *)(a1 + 11572);
  v4 = ActiveColliderMgr_instance;
  do
  {
    if ( ActiveColliderMgr_isInActiveList(v4, v3) || ActiveColliderMgr_isInCreateList(v4, v3) == 1 )
    {
      v5 = ActiveColliderMgr_instance;
      ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, v3);
      ActiveColldierMgr_removeFromCreateList(v5, v3);
      ActiveColldierMgr_removeFromList3(v5, (int)v3);
    }
    v4 = ActiveColliderMgr_instance;
    --v2;
    v3 = (ActiveCollider *)((char *)v3 + 308);
  }
  while ( v2 );
  if ( ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 10964))
    || ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 10964)) )
  {
    v6 = ActiveColliderMgr_instance;
    ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 10964));
    ActiveColldierMgr_removeFromCreateList(v6, (ActiveCollider *)(a1 + 10964));
    ActiveColldierMgr_removeFromList3(v6, a1 + 10964);
  }
  v7 = ActiveColliderMgr_instance;
  if ( ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 11268))
    || (result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v7, (ActiveCollider *)(a1 + 11268)),
        result == (ActiveColliderMgr *)1) )
  {
    v9 = ActiveColliderMgr_instance;
    ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 11268));
    ActiveColldierMgr_removeFromCreateList(v9, (ActiveCollider *)(a1 + 11268));
    return ActiveColldierMgr_removeFromList3(v9, a1 + 11268);
  }
  return result;
}
