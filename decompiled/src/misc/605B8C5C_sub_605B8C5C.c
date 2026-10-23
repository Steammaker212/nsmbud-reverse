/* sub_605B8C5C
 * address: 0x605B8C5C   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_605B8C5C(_DWORD *a1)
{
  _DWORD *v1; // r0

  *a1 = off_60C0972C;
  if ( (_DWORD *)dword_60CB0618 == a1 )
  {
    dword_60CB0618 = 0;
    dword_60CB061C = 0;
  }
  v1 = sead__IDisposer__dtor(a1);
  operator_delete(v1);
}
