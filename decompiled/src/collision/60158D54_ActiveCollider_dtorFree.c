/* ActiveCollider_dtorFree
 * address: 0x60158D54   size: 88   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall ActiveCollider_dtorFree(ActiveCollider *a1)
{
  ActiveColliderMgr *v2; // r5
  _DWORD *v3; // r0

  FIELD_U32(a1, 0x0).vtable = (int)ActiveCollider_vtable;
  v2 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, a1);
  ActiveColldierMgr_removeFromCreateList(v2, a1);
  ActiveColldierMgr_removeFromList3(v2, (int)a1);
  v3 = sead__IDisposer__dtor(a1);
  operator_delete(v3);
}
