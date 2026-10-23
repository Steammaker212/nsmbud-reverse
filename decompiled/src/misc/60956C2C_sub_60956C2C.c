/* sub_60956C2C
 * address: 0x60956C2C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60956C2C(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = off_60C5EA18;
  if ( (_DWORD *)dword_60CD0B3C == a1 )
  {
    dword_60CD0B3C = 0;
    (*(void (__fastcall **)(int))(*(_DWORD *)dword_60CD0B40 + 4))(dword_60CD0B40);
    dword_60CD0B40 = 0;
  }
  v2 = sead__IDisposer__dtor(a1);
  operator_delete(v2);
}
