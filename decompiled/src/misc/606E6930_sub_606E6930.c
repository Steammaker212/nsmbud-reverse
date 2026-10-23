/* sub_606E6930
 * address: 0x606E6930   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_606E6930(_DWORD *a1)
{
  _DWORD *v1; // r0

  *a1 = off_60C1F868;
  if ( (_DWORD *)dword_60CBBFA0 == a1 )
  {
    dword_60CBBFA0 = 0;
    dword_60CBBFA8 = 0;
    dword_60CBBFA4 = 0;
  }
  v1 = sead__IDisposer__dtor(a1);
  operator_delete(v1);
}
