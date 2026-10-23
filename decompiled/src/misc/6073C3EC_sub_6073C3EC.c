/* sub_6073C3EC
 * address: 0x6073C3EC   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_6073C3EC(int a1)
{
  ActiveCollider *v2; // r4
  ActiveColliderMgr *v3; // r5
  ActiveColliderMgr *result; // r0

  FIELD_U8(a1, 87) = FIELD_U8(a1, 87) & 0xFC | 2;
  FIELD_U32(a1, 6260) |= 0x10000000u;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  ((void (__fastcall *)(int, _DWORD, float, float, float))loc_605EA46C)(a1 + 6064, 0, 5.0, 1.0, 0.0);
  v2 = (ActiveCollider *)(a1 + 8096);
  v3 = ActiveColliderMgr_instance;
  result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v2);
  if ( !result )
  {
    result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v3, v2);
    if ( !result )
      return ActiveColliderMgr_addToCreateList(v3, v2);
  }
  return result;
}
