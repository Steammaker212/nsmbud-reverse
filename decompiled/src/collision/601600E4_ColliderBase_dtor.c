/* ColliderBase_dtor
 * address: 0x601600E4   size: 204   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall ColliderBase_dtor(ColliderBase *this)
{
  ColliderMgr *colliderMgr; // r5

  FIELD_U32(this, 0x0) = (int)ColliderBase_vtable;
  colliderMgr = ColliderMgr_instance;
  if ( ColliderMgr_instance )
  {
    ColliderMgr_removeRelated1(ColliderMgr_instance, this);
    ColliderMgr_removeFromList1(colliderMgr, this);
    ColliderMgr_removeFromList2(colliderMgr, this);
    ColliderMgr_removeFromList3(colliderMgr, this);
    ColliderMgr_removeFromList4(colliderMgr, this);
    ColliderMgr_removeFromList5(colliderMgr, this);
    ColliderMgr_removeRelated2(colliderMgr, this);
  }
  (*(void (__fastcall **)(int *))(FIELD_U32(this, 0xFC) + 0x10))(&FIELD_U32(this, 0xFC));
  (*(void (__fastcall **)(int *))(FIELD_U32(this, 0x108) + 0x10))(&FIELD_U32(this, 0x108));
  (*(void (__fastcall **)(int *))(FIELD_U32(this, 0x114) + 0x10))(&FIELD_U32(this, 0x114));
  (*(void (__fastcall **)(int *))(FIELD_U32(this, 0x120) + 0x10))(&FIELD_U32(this, 0x120));
  return sead__IDisposer__dtor(this);
}
