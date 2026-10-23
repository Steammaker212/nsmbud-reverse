/* sub_607298AC
 * address: 0x607298AC   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_607298AC(_DWORD *a1)
{
  _DWORD *v1; // r0

  *a1 = off_60C21E24;
  if ( (_DWORD *)dword_60CBD8A8 == a1 )
  {
    dword_60CBD8A8 = 0;
    EventMgr__instance = 0;
  }
  v1 = sead__IDisposer__dtor(a1);
  operator_delete(v1);
}
