/* sub_6043FA1C
 * address: 0x6043FA1C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6043FA1C(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = off_60BFAB24;
  if ( (_DWORD *)dword_60C9CC7C == a1 )
  {
    dword_60C9CC7C = 0;
    (**(void (__fastcall ***)(int))dword_60C9CC80)(dword_60C9CC80);
    dword_60C9CC80 = 0;
  }
  v2 = sead__IDisposer__dtor(a1);
  operator_delete(v2);
}
