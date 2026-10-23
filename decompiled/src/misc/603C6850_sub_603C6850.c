/* sub_603C6850
 * address: 0x603C6850   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603C6850(int a1, int a2)
{
  int v2; // r0

  v2 = FIELD_U32(a2, 64);
  if ( !v2 )
    return 0;
  sub_603C5F58(v2);
  return 1;
}
