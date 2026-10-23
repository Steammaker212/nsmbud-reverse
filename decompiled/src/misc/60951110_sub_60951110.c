/* sub_60951110
 * address: 0x60951110   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60951110(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = off_60C5E92C;
  if ( (_DWORD *)dword_60CD0A18 == a1 )
  {
    dword_60CD0A18 = 0;
    (**(void (__fastcall ***)(int))dword_60CD0A1C)(dword_60CD0A1C);
    dword_60CD0A1C = 0;
  }
  v2 = sead__IDisposer__dtor(a1);
  operator_delete(v2);
}
