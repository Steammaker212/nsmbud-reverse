/* sub_6055960C
 * address: 0x6055960C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6055960C(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = off_60C00DF4;
  if ( (_DWORD *)dword_60CAD904 == a1 )
  {
    dword_60CAD904 = 0;
    (**(void (__fastcall ***)(int))dword_60CAD908)(dword_60CAD908);
    dword_60CAD908 = 0;
  }
  v2 = sead__IDisposer__dtor(a1);
  operator_delete(v2);
}
