/* sub_602E4250
 * address: 0x602E4250   size: 828   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_602E4250(int a1)
{
  ActiveCollider *v2; // r6
  ActiveColliderMgr *v3; // r5
  ActiveColliderMgr *v4; // r6
  int v5; // r11
  int v6; // r8
  ActiveColliderMgr *v7; // r6
  ActiveCollider *v8; // r5
  ActiveColliderMgr *v9; // r6
  ActiveColliderMgr *v10; // r7
  ActiveColliderMgr *v11; // r4
  ActiveColliderMgr *v12; // r7
  ActiveColliderMgr *v13; // r7
  ActiveColliderMgr *v14; // r7
  ActiveColliderMgr *v15; // r7
  ActiveColliderMgr *v16; // r7
  ActiveCollider *v17; // r4
  ActiveColliderMgr *v18; // r5
  ActiveColliderMgr *v19; // r5
  ActiveColliderMgr *v20; // r5
  ActiveColliderMgr *v21; // r5
  ActiveCollider *v22; // r4
  ActiveColliderMgr *v23; // r5
  ActiveCollider *v24; // r4
  ActiveColliderMgr *result; // r0
  int v26; // [sp+0h] [bp-30h]
  int v27; // [sp+4h] [bp-2Ch]
  int v28; // [sp+8h] [bp-28h]

  v2 = (ActiveCollider *)(a1 + 188);
  v3 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
  ActiveColldierMgr_removeFromCreateList(v3, v2);
  ActiveColldierMgr_removeFromList3(v3, (int)v2);
  v4 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 10784));
  ActiveColldierMgr_removeFromCreateList(v4, (ActiveCollider *)(a1 + 10784));
  ActiveColldierMgr_removeFromList3(v4, a1 + 10784);
  v5 = 0;
  v6 = 0;
  v28 = a1;
  v26 = a1 + 6832;
  v27 = a1 + 11088;
  do
  {
    v7 = ActiveColliderMgr_instance;
    v8 = (ActiveCollider *)(v28 + v6 + 6528);
    ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, v8);
    ActiveColldierMgr_removeFromCreateList(v7, v8);
    ActiveColldierMgr_removeFromList3(v7, (int)v8);
    v9 = ActiveColliderMgr_instance;
    ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v27 + v6));
    ActiveColldierMgr_removeFromCreateList(v9, (ActiveCollider *)(v27 + v6));
    ActiveColldierMgr_removeFromList3(v9, v27 + v6);
    v10 = ActiveColliderMgr_instance;
    ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v26 + v6));
    ActiveColldierMgr_removeFromCreateList(v10, (ActiveCollider *)(v26 + v6));
    ActiveColldierMgr_removeFromList3(v10, v26 + v6);
    v11 = ActiveColliderMgr_instance;
    ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v28 + v6 + 11392));
    ActiveColldierMgr_removeFromCreateList(v11, (ActiveCollider *)(v28 + v6 + 11392));
    ActiveColldierMgr_removeFromList3(v11, v28 + v6 + 11392);
    v12 = ActiveColliderMgr_instance;
    ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v27 + v6 - 3952));
    ActiveColldierMgr_removeFromCreateList(v12, (ActiveCollider *)(v27 + v6 - 3952));
    ActiveColldierMgr_removeFromList3(v12, v27 + v6 - 3952);
    v13 = ActiveColliderMgr_instance;
    ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v26 + v6 + 4864));
    ActiveColldierMgr_removeFromCreateList(v13, (ActiveCollider *)(v26 + v6 + 4864));
    ActiveColldierMgr_removeFromList3(v13, v26 + v6 + 4864);
    v14 = ActiveColliderMgr_instance;
    ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v27 + v6 - 3648));
    ActiveColldierMgr_removeFromCreateList(v14, (ActiveCollider *)(v27 + v6 - 3648));
    ActiveColldierMgr_removeFromList3(v14, v27 + v6 - 3648);
    v15 = ActiveColliderMgr_instance;
    ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v27 + v6 + 912));
    ActiveColldierMgr_removeFromCreateList(v15, (ActiveCollider *)(v27 + v6 + 912));
    ActiveColldierMgr_removeFromList3(v15, v27 + v6 + 912);
    v16 = ActiveColliderMgr_instance;
    ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v28 + v6 + 7744));
    ActiveColldierMgr_removeFromCreateList(v16, (ActiveCollider *)(v28 + v6 + 7744));
    ActiveColldierMgr_removeFromList3(v16, v28 + v6 + 7744);
    v17 = (ActiveCollider *)(v27 + v6 + 1216);
    v18 = ActiveColliderMgr_instance;
    ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, v17);
    ActiveColldierMgr_removeFromCreateList(v18, v17);
    ActiveColldierMgr_removeFromList3(v18, (int)v17);
    v19 = ActiveColliderMgr_instance;
    ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v26 + v6 + 1216));
    ActiveColldierMgr_removeFromCreateList(v19, (ActiveCollider *)(v26 + v6 + 1216));
    ActiveColldierMgr_removeFromList3(v19, v26 + v6 + 1216);
    v20 = ActiveColliderMgr_instance;
    ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v28 + v6 + 12608));
    ActiveColldierMgr_removeFromCreateList(v20, (ActiveCollider *)(v28 + v6 + 12608));
    ActiveColldierMgr_removeFromList3(v20, v28 + v6 + 12608);
    v21 = ActiveColliderMgr_instance;
    v22 = (ActiveCollider *)(v28 + v5 + 10176);
    ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, v22);
    ActiveColldierMgr_removeFromCreateList(v21, v22);
    ActiveColldierMgr_removeFromList3(v21, (int)v22);
    v23 = ActiveColliderMgr_instance;
    v24 = (ActiveCollider *)(v27 + v5 + 3648);
    ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, v24);
    ActiveColldierMgr_removeFromCreateList(v23, v24);
    result = ActiveColldierMgr_removeFromList3(v23, (int)v24);
    v6 += 1824;
    v5 += 304;
  }
  while ( v6 != 3648 );
  return result;
}
