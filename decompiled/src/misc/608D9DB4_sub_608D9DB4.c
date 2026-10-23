/* sub_608D9DB4
 * address: 0x608D9DB4   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D9DB4(int *a1)
{
  _DWORD *v2; // r0

  v2 = (_DWORD *)a1[18];
  if ( v2 )
  {
    sub_608B13C0(v2);
    sub_608ACFE0(a1[14], a1[18]);
  }
  return sub_608D4040(a1[19]);
}
