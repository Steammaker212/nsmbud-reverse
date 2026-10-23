/* sub_6068B888
 * address: 0x6068B888   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6068B888(_DWORD *a1)
{
  _DWORD *v1; // r0

  *a1 = off_60C17524;
  if ( (_DWORD *)dword_60CB84A0 == a1 )
  {
    dword_60CB84A0 = 0;
    MaskMgr_instance = 0;
  }
  v1 = sead__IDisposer__dtor(a1);
  operator_delete(v1);
}
