/* sub_60142B14
 * address: 0x60142B14   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60142B14(_DWORD *a1)
{
  ActiveCollider *v2; // r5
  ActiveColliderMgr *v3; // r6
  int result; // r0

  v2 = (ActiveCollider *)(a1 + 1607);
  (*(void (__fastcall **)(_DWORD *))(*a1 + 72))(a1);
  v3 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, v2);
  ActiveColldierMgr_removeFromCreateList(v3, v2);
  ActiveColldierMgr_removeFromList3(v3, (int)v2);
  result = (*(int (__fastcall **)(_DWORD *))(*a1 + 260))(a1);
  a1[1530] = result;
  return result;
}
