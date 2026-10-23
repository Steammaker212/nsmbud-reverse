/* sub_608D0994
 * address: 0x608D0994   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D0994(int a1, char *a2)
{
  int v2; // r0

  v2 = a1 + 4;
  if ( !a2 )
    a2 = &byte_60ABC94D;
  return nn__os__SetThreadNamePointer(v2, a2);
}
