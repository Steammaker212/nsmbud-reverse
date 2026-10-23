/* sub_607700D0
 * address: 0x607700D0   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_607700D0(_DWORD *a1)
{
  float v1; // s0

  a1[301] |= 0x4000000u;
  a1[306] |= 0x800u;
  if ( a1[2491] )
    a1[304] |= 0x200000u;
  if ( a1[2484] == 1 )
    v1 = 10.0;
  else
    v1 = 0.0;
  sub_60794954(a1[162], 6, v1, 0.0);
  JUMPOUT(0x6075F54C);
}
