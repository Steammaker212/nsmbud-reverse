/* sub_6015AE88
 * address: 0x6015AE88   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_6015AE88(int a1)
{
  ActiveColliderMgr *result; // r0
  _DWORD *v3; // r0

  result = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_instance )
  {
    v3 = (_DWORD *)operator_new_8DE2C8(0x40u, a1, 4);
    result = (ActiveColliderMgr *)sead__IDisposer__ctor(v3, a1, 3u);
    FIELD_U32(result, 0x0) = (int)off_60BD4868;
    dword_60C88230 = (int)result;
    FIELD_U32(result, 0x10) = (int)ActiveColliderMgrList_vtable;
    FIELD_U32(result, 0x14) = 0;
    FIELD_U32(result, 0x18) = 0;
    FIELD_U32(result, 0x1C) = (int)ActiveColliderMgrList_vtable;
    FIELD_U32(result, 0x20) = 0;
    FIELD_U32(result, 0x24) = 0;
    FIELD_U32(result, 0x28) = (int)ActiveColliderMgrList_vtable;
    FIELD_U32(result, 0x2C) = 0;
    FIELD_U32(result, 0x30) = 0;
    FIELD_U32(result, 0x34) = (int)ActiveColliderMgrList_vtable;
    FIELD_U32(result, 0x38) = 0;
    FIELD_U32(result, 0x3C) = 0;
    ActiveColliderMgr_instance = result;
  }
  return result;
}
