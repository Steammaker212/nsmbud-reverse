/* sub_601320D8
 * address: 0x601320D8   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601320D8(int a1)
{
  ActiveColliderMgr *v2; // r5

  FIELD_U32(a1, 120) = dword_60AF1EC0[FIELD_U32(a1, 80)];
  FIELD_U32(a1, 124) = 1067030938;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 6480) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 6484) = FIELD_U32(a1, 112);
  FIELD_U32(a1, 6488) = FIELD_U32(a1, 116);
  FIELD_U32(a1, 6492) = 80;
  FIELD_U32(a1, 6496) = 30;
  if ( !FIELD_U32(a1, 6584) )
  {
    v2 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
      && !ActiveColliderMgr_isInCreateList(v2, (ActiveCollider *)(a1 + 188)) )
    {
      ActiveColliderMgr_addToCreateList(v2, (ActiveCollider *)(a1 + 188));
    }
  }
  FIELD_U32(a1, 11952) = 18;
  return 11952;
}
