/* sub_6052B004
 * address: 0x6052B004   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6052B004(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = off_60C000B0;
  if ( (_DWORD *)dword_60CAA44C == a1 )
  {
    dword_60CAA44C = 0;
    (**(void (__fastcall ***)(int))dword_60CAA450)(dword_60CAA450);
    dword_60CAA450 = 0;
  }
  v2 = sead__IDisposer__dtor(a1);
  operator_delete(v2);
}
