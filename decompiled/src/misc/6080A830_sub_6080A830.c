/* sub_6080A830
 * address: 0x6080A830   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6080A830(_DWORD *a1)
{
  _DWORD *v1; // r0

  *a1 = off_60C28188;
  if ( (_DWORD *)dword_60CC6B08 == a1 )
  {
    dword_60CC6B08 = 0;
    dword_60CC6B0C = 0;
  }
  v1 = sead__IDisposer__dtor(a1);
  operator_delete(v1);
}
