/* sub_6080A08C
 * address: 0x6080A08C   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6080A08C(int a1, int a2, float a3)
{
  int v3; // r0

  v3 = FIELD_U32(a1, 76);
  if ( !v3 )
    return 0;
  sub_608B032C(v3, a2, a3);
  return 1;
}
