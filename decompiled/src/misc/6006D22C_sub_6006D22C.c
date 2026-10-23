/* sub_6006D22C
 * address: 0x6006D22C   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6006D22C(int a1)
{
  ActiveColliderMgr *v2; // r5

  sub_60075CE0(a1);
  v2 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v2, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v2, (ActiveCollider *)(a1 + 188));
  }
  FIELD_U32(a1, 6844) = 1124073472;
  FIELD_U32(a1, 6848) = 1119354880;
  FIELD_U32(a1, 6836) = 0;
  FIELD_U32(a1, 6840) = 1119354880;
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60AF5410, 2);
  FIELD_U32(a1, 26112) = 4;
  FIELD_U32(a1, 100) = -1105618534;
  FIELD_U32(a1, 156) = 0;
  FIELD_U32(a1, 164) = 0;
  return -1105618534;
}
