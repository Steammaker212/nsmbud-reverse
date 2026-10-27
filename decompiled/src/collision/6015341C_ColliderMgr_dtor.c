/* ColliderMgr_dtor
 * address: 0x6015341C   size: 68   group: collision
 * sym: # ColliderMgr_dtor as UNKNOWN
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall ColliderMgr_dtor(_DWORD *a1)
{
  *a1 = ColliderMgr_vtable;
  if ( dword_60C88208 == (ColliderMgr *)a1 )
  {
    dword_60C88208 = 0;
    ColliderMgr_instance = 0;
  }
  return sead__IDisposer__dtor(a1);
}
