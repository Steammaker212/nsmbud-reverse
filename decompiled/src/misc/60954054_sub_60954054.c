/* sub_60954054
 * address: 0x60954054   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60954054(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = off_60C5E984;
  if ( (_DWORD *)dword_60CD0A24 == a1 )
  {
    dword_60CD0A24 = 0;
    (**(void (__fastcall ***)(int))dword_60CD0A28)(dword_60CD0A28);
    dword_60CD0A28 = 0;
  }
  v2 = sead__IDisposer__dtor(a1);
  operator_delete(v2);
}
