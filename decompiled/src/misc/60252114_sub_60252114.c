/* sub_60252114
 * address: 0x60252114   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_60252114(int a1)
{
  _DWORD *v1; // r1
  int v2; // r2
  unsigned int v3; // r3
  unsigned int v4; // r1
  ActiveCollider *v5; // r4
  ActiveColliderMgr *v6; // r5

  v1 = *(_DWORD **)(a1 + 6304);
  v2 = v1[3];
  v3 = v1[2];
  v4 = v1[17];
  if ( v3 > v4 )
    v2 += 4 * v4;
  *(_DWORD *)(*(_DWORD *)v2 + 24) = 0;
  v5 = (ActiveCollider *)(a1 + 6468);
  v6 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6468));
  ActiveColldierMgr_removeFromCreateList(v6, v5);
  return ActiveColldierMgr_removeFromList3(v6, (int)v5);
}
