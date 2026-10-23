/* sub_6083B278
 * address: 0x6083B278   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6083B278(int a1)
{
  int v1; // r4
  int v2; // r0

  v1 = FIELD_U32(a1, 40);
  v2 = FIELD_U32(v1, 48);
  if ( v2 == FIELD_U32(v1, 32) )
    sub_60836614(v2);
  FIELD_U32(v1, 48) = 0;
  return 0;
}
