/* sub_603FC7E0
 * address: 0x603FC7E0   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_603FC7E0(_DWORD *a1)
{
  _DWORD *v1; // r0

  *a1 = off_60BF96B0;
  if ( (_DWORD *)dword_60C99DE8 == a1 )
  {
    dword_60C99DE8 = 0;
    dword_60C99DEC = 0;
  }
  v1 = sead__IDisposer__dtor(a1);
  operator_delete(v1);
}
