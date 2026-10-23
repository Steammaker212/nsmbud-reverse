/* sub_60411764
 * address: 0x60411764   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60411764(_DWORD *a1)
{
  _DWORD *v1; // r0

  *a1 = off_60BF9C90;
  if ( (_DWORD *)dword_60C9A694 == a1 )
  {
    dword_60C9A694 = 0;
    dword_60C9A698 = 0;
  }
  v1 = sead__IDisposer__dtor(a1);
  operator_delete(v1);
}
