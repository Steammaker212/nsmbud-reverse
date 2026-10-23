/* sub_60417274
 * address: 0x60417274   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60417274(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = off_60BF9D10;
  if ( (_DWORD *)dword_60C9BAA8 == a1 )
  {
    dword_60C9BAA8 = 0;
    sub_60959BAC(dword_60C9BAAC + 384);
    dword_60C9BAAC = 0;
  }
  v2 = sead__IDisposer__dtor(a1);
  operator_delete(v2);
}
