/* ColliderMgr_createInstance
 * address: 0x601534D0   size: 200   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ColliderMgr *__fastcall ColliderMgr_createInstance(int a1)
{
  ColliderMgr *result; // r0
  _DWORD *v3; // r0

  result = ColliderMgr_instance;
  if ( !ColliderMgr_instance )
  {
    v3 = (_DWORD *)operator_new_8DE2C8(0x64u, a1, 4);
    result = (ColliderMgr *)sead__IDisposer__ctor(v3, a1, 3u);
    FIELD_U32(result, 0x0) = (int)ColliderMgr_vtable;
    dword_60C88208 = result;
    FIELD_U32(result, 0x10)[0].vtable = (int)ColliderList_vtable;
    FIELD_U32(result, 0x10)[0].first = 0;
    FIELD_U32(result, 0x10)[0].last = 0;
    FIELD_U32(result, 0x10)[1].vtable = (int)ColliderList_vtable;
    FIELD_U32(result, 0x10)[1].first = 0;
    FIELD_U32(result, 0x10)[1].last = 0;
    FIELD_U32(result, 0x10)[2].vtable = (int)ColliderList_vtable;
    FIELD_U32(result, 0x10)[2].first = 0;
    FIELD_U32(result, 0x10)[2].last = 0;
    FIELD_U32(result, 0x10)[3].vtable = (int)ColliderList_vtable;
    FIELD_U32(result, 0x10)[3].first = 0;
    FIELD_U32(result, 0x10)[3].last = 0;
    FIELD_U32(result, 0x10)[4].vtable = (int)ColliderList_vtable;
    FIELD_U32(result, 0x10)[4].first = 0;
    FIELD_U32(result, 0x10)[4].last = 0;
    FIELD_U32(result, 0x10)[5].vtable = (int)ColliderList_vtable;
    FIELD_U32(result, 0x10)[5].first = 0;
    FIELD_U32(result, 0x10)[5].last = 0;
    FIELD_U32(result, 0x10)[6].vtable = (int)ColliderList_vtable;
    FIELD_U32(result, 0x10)[6].first = 0;
    FIELD_U32(result, 0x10)[6].last = 0;
    ColliderMgr_instance = result;
  }
  return result;
}
