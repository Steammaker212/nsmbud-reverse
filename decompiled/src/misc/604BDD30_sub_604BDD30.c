/* sub_604BDD30
 * address: 0x604BDD30   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604BDD30(int a1)
{
  int v2; // r5
  int v3; // r0

  v2 = 2;
  v3 = a1 + 9916;
  if ( FIELD_U8(a1, 35576) )
    v2 = 1;
  sub_60509900(v3, v2);
  sub_60509900(a1 + 13672, v2);
  sub_60509900(a1 + 17428, v2);
  FIELD_U8(a1, 35556) = 0;
  return 35556;
}
