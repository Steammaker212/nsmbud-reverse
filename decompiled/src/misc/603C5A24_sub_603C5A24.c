/* sub_603C5A24
 * address: 0x603C5A24   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_603C5A24(int a1)
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

  v2 = (ActiveCollider *)(a1 + 188);
  v3 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
  ActiveColldierMgr_removeFromCreateList(v3, v2);
  ActiveColldierMgr_removeFromList3(v3, (int)v2);
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
      ActiveColldierMgr_removeFromActiveList(v4, v7);
      ActiveColldierMgr_removeFromCreateList(v4, v7);
      ActiveColldierMgr_removeFromList3(v4, (int)v7);
      v4 = ActiveColliderMgr_instance;
      ++v5;
    }
    while ( v5 < FIELD_U8(a1, 27030) );
  }
  ActiveColldierMgr_removeFromActiveList(v4, (ActiveCollider *)(a1 + 25616));
  ActiveColldierMgr_removeFromCreateList(v4, (ActiveCollider *)(a1 + 25616));
  ActiveColldierMgr_removeFromList3(v4, a1 + 25616);
  v8 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 25920));
  ActiveColldierMgr_removeFromCreateList(v8, (ActiveCollider *)(a1 + 25920));
  ActiveColldierMgr_removeFromList3(v8, a1 + 25920);
  v9 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 26224));
  ActiveColldierMgr_removeFromCreateList(v9, (ActiveCollider *)(a1 + 26224));
  ActiveColldierMgr_removeFromList3(v9, a1 + 26224);
  v10 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 26528));
  ActiveColldierMgr_removeFromCreateList(v10, (ActiveCollider *)(a1 + 26528));
  return ActiveColldierMgr_removeFromList3(v10, a1 + 26528);
}
