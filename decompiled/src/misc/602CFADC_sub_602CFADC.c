/* sub_602CFADC
 * address: 0x602CFADC   size: 500   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_602CFADC(int a1)
{
  int v1; // r4
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
  ActiveColliderMgr *v12; // r5

  v1 = a1;
  v2 = (ActiveCollider *)(a1 + 6600);
  v3 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6600));
  ActiveColldierMgr_removeFromCreateList(v3, v2);
  ActiveColldierMgr_removeFromList3(v3, (int)v2);
  v4 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v1 + 6904));
  ActiveColldierMgr_removeFromCreateList(v4, (ActiveCollider *)(v1 + 6904));
  ActiveColldierMgr_removeFromList3(v4, v1 + 6904);
  v5 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v1 + 7208));
  ActiveColldierMgr_removeFromCreateList(v5, (ActiveCollider *)(v1 + 7208));
  ActiveColldierMgr_removeFromList3(v5, v1 + 7208);
  v6 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v1 + 7512));
  ActiveColldierMgr_removeFromCreateList(v6, (ActiveCollider *)(v1 + 7512));
  ActiveColldierMgr_removeFromList3(v6, v1 + 7512);
  v7 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v1 + 7816));
  ActiveColldierMgr_removeFromCreateList(v7, (ActiveCollider *)(v1 + 7816));
  ActiveColldierMgr_removeFromList3(v7, v1 + 7816);
  v8 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v1 + 8120));
  ActiveColldierMgr_removeFromCreateList(v8, (ActiveCollider *)(v1 + 8120));
  ActiveColldierMgr_removeFromList3(v8, v1 + 8120);
  v9 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v1 + 8424));
  ActiveColldierMgr_removeFromCreateList(v9, (ActiveCollider *)(v1 + 8424));
  ActiveColldierMgr_removeFromList3(v9, v1 + 8424);
  v10 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v1 + 8728));
  ActiveColldierMgr_removeFromCreateList(v10, (ActiveCollider *)(v1 + 8728));
  ActiveColldierMgr_removeFromList3(v10, v1 + 8728);
  v11 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v1 + 9032));
  ActiveColldierMgr_removeFromCreateList(v11, (ActiveCollider *)(v1 + 9032));
  ActiveColldierMgr_removeFromList3(v11, v1 + 9032);
  v12 = ActiveColliderMgr_instance;
  v1 += 9336;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)v1);
  ActiveColldierMgr_removeFromCreateList(v12, (ActiveCollider *)v1);
  return ActiveColldierMgr_removeFromList3(v12, v1);
}
