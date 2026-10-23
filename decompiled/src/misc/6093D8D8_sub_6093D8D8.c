/* sub_6093D8D8
 * address: 0x6093D8D8   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6093D8D8(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = off_60C5E324;
  if ( (_DWORD *)dword_60CD09F4 == a1 )
  {
    dword_60CD09F4 = 0;
    (*(void (__fastcall **)(int))(*(_DWORD *)dword_60CD09F8 + 4))(dword_60CD09F8);
    dword_60CD09F8 = 0;
  }
  v2 = sead__IDisposer__dtor(a1);
  operator_delete(v2);
}
