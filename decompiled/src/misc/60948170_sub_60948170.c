/* sub_60948170
 * address: 0x60948170   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60948170(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = off_60C5E85C;
  if ( (_DWORD *)dword_60CD0A08 == a1 )
  {
    dword_60CD0A08 = 0;
    (*(void (__fastcall **)(int))(*(_DWORD *)dword_60CD0A0C + 4))(dword_60CD0A0C);
    dword_60CD0A0C = 0;
  }
  v2 = sead__IDisposer__dtor(a1);
  operator_delete(v2);
}
