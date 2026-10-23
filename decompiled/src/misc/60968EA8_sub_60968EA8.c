/* sub_60968EA8
 * address: 0x60968EA8   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60968EA8(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = off_60C5EBEC;
  if ( (_DWORD *)dword_60CD0B54 == a1 )
  {
    dword_60CD0B54 = 0;
    (*(void (__fastcall **)(int))(*(_DWORD *)dword_60CD0B58 + 4))(dword_60CD0B58);
    dword_60CD0B58 = 0;
  }
  v2 = sead__IDisposer__dtor(a1);
  operator_delete(v2);
}
