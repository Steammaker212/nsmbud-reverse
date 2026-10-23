/* ColliderMgr_dtorFree
 * address: 0x60153470   size: 80   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall ColliderMgr_dtorFree(ColliderMgr *a1)
{
  _DWORD *v1; // r0

  FIELD_U32(a1, 0x0).vtable = (int)ColliderMgr_vtable;
  if ( dword_60C88208 == a1 )
  {
    dword_60C88208 = 0;
    ColliderMgr_instance = 0;
  }
  v1 = sead__IDisposer__dtor(a1);
  operator_delete(v1);
}
