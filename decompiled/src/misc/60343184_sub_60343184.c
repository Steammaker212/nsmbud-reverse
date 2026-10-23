/* sub_60343184
 * address: 0x60343184   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60343184(int a1)
{
  _DWORD *v2; // r6
  int result; // r0
  ActiveCollider *v4; // r4
  ActiveColliderMgr *v5; // r5

  v2 = (_DWORD *)(a1 + 7064);
  if ( FIELD_U32(a1, 7064) == 2 || (result = FIELD_U8(a1, 7108), !FIELD_U8(a1, 7108)) )
  {
    ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6312));
    v4 = (ActiveCollider *)(a1 + 188);
    v5 = ActiveColliderMgr_instance;
    ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, v4);
    ActiveColldierMgr_removeFromCreateList(v5, v4);
    ActiveColldierMgr_removeFromList3(v5, (int)v4);
    *v2 = 0;
    return 0;
  }
  return result;
}
