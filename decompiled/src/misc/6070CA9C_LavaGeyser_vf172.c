/* LavaGeyser_vf172
 * address: 0x6070CA9C   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LavaGeyser_vf172(int a1)
{
  ActiveCollider *v2; // r6
  ActiveColliderMgr *v3; // r5

  v2 = (ActiveCollider *)(a1 + 188);
  v3 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
  ActiveColldierMgr_removeFromCreateList(v3, v2);
  ActiveColldierMgr_removeFromList3(v3, (int)v2);
  FIELD_F32(a1, 312) = FIELD_F32(a1, 6304) * 0.5;
  FIELD_U32(a1, 316) = 0;
  FIELD_U32(a1, 148) = 0;
  FIELD_U32(a1, 6312) = FIELD_U32(a1, 6380);
  FIELD_U32(a1, 6328) = 0;
  return 0;
}
