/* sub_6080A760
 * address: 0x6080A760   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6080A760(_DWORD *a1, int a2)
{
  int v4; // r0
  int v5; // r0
  int result; // r0

  sub_60816F60(dword_60CC6B68, 4096);
  v4 = a1[21];
  if ( v4 )
    sub_608AF208(v4, a2);
  v5 = a1[15];
  if ( v5 )
    sub_608B0444(v5, 0, 1.0);
  result = a1[16];
  if ( result )
    return sub_608B0444(result, 0, 1.0);
  return result;
}
