/* sub_607305D0
 * address: 0x607305D0   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607305D0(int a1)
{
  _DWORD *v1; // r4
  ActiveCollider *v2; // r6
  ActiveColliderMgr *v3; // r5
  int v4; // t1
  _DWORD *v5; // r0

  v1 = (_DWORD *)a1;
  v2 = (ActiveCollider *)(a1 + 188);
  v3 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
  ActiveColldierMgr_removeFromCreateList(v3, v2);
  ActiveColldierMgr_removeFromList3(v3, (int)v2);
  v4 = v1[1575];
  v1 += 1575;
  v5 = *(_DWORD **)(v4 + 4);
  v5[55] = 0;
  v5[56] = 0;
  v5[57] = 0;
  *(_DWORD *)(*(_DWORD *)(*v1 + 4) + 232) &= ~2u;
  *(_DWORD *)(*(_DWORD *)(*v1 + 4) + 232) &= ~4u;
  return (*(int (__fastcall **)(_DWORD, int, float, float, float))(**(_DWORD **)(*v1 + 4) + 84))(
           *(_DWORD *)(*v1 + 4),
           197,
           1.0,
           5.0,
           0.0);
}
