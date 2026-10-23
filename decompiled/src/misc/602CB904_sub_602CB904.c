/* sub_602CB904
 * address: 0x602CB904   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_602CB904(_DWORD *a1)
{
  ActiveColliderMgr *v1; // r5
  _DWORD *v2; // r8
  ActiveCollider *v3; // r6
  int i; // r7
  ActiveColliderMgr *v5; // r6
  ActiveColliderMgr *result; // r0

  v1 = ActiveColliderMgr_instance;
  v2 = a1 + 11;
  v3 = (ActiveCollider *)(*a1 + 188);
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, v3);
  ActiveColldierMgr_removeFromCreateList(v1, v3);
  ActiveColldierMgr_removeFromList3(v1, (int)v3);
  for ( i = 0; i != 1520; i += 76 )
  {
    v5 = ActiveColliderMgr_instance;
    ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)&v2[i]);
    ActiveColldierMgr_removeFromCreateList(v5, (ActiveCollider *)&v2[i]);
    result = ActiveColldierMgr_removeFromList3(v5, (int)&v2[i]);
  }
  return result;
}
