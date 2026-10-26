/* ActiveCollider_dtor
 * address: 0x60158CF8   size: 84   group: collision
 * sym: ActiveCollider::~ActiveCollider() as D1
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall ActiveCollider_dtor(ActiveCollider *a1)
{
  ActiveColliderMgr *v2; // r5

  FIELD_U32(a1, 0x0) = (int)ActiveCollider_vtable;
  v2 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, a1);
  ActiveColldierMgr_removeFromCreateList(v2, a1);
  ActiveColldierMgr_removeFromList3(v2, (int)a1);
  return sead__IDisposer__dtor(a1);
}
