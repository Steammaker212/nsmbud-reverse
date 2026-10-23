/* sub_60871790
 * address: 0x60871790   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60871790(int a1, void *a2)
{
  int v2; // r0

  v2 = FIELD_U8(a1, 219);
  if ( v2 )
    memset(a2, 255, 4 * v2);
}
