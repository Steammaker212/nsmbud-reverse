/* sub_608CE33C
 * address: 0x608CE33C   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CE33C(int a1, int a2, int a3, int a4)
{
  int v4; // r1

  v4 = 0;
  if ( !FIELD_U8(a1, 12) )
  {
    v4 = 1;
    FIELD_U32(a1, 32) = a3;
    FIELD_U32(a1, 36) = a4;
  }
  return v4;
}
