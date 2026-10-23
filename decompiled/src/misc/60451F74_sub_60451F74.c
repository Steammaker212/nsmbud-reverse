/* sub_60451F74
 * address: 0x60451F74   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60451F74(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = off_60BFB10C;
  if ( (_DWORD *)dword_60C9CF08 == a1 )
  {
    dword_60C9CF08 = 0;
    sub_604AE884(dword_60C9CF0C + 1444);
    dword_60C9CF0C = 0;
  }
  v2 = sead__IDisposer__dtor(a1);
  operator_delete(v2);
}
