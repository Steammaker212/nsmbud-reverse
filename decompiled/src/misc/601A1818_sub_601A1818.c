/* sub_601A1818
 * address: 0x601A1818   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_601A1818(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = off_60BD5EAC;
  if ( (_DWORD *)dword_60C89E14 == a1 )
  {
    dword_60C89E14 = 0;
    (**(void (__fastcall ***)(int))dword_60C89E18)(dword_60C89E18);
    dword_60C89E18 = 0;
  }
  v2 = sead__IDisposer__dtor(a1);
  operator_delete(v2);
}
