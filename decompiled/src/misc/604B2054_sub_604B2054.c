/* sub_604B2054
 * address: 0x604B2054   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B2054(unsigned __int8 *a1)
{
  int v2; // r0
  int v3; // r1

  v2 = sub_60502D80(a1 + 3608);
  v3 = a1[4650];
  if ( v2 )
    v3 = 1;
  return v3 | a1[4651] | a1[38105];
}
