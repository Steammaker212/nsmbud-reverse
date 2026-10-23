/* sub_606EF568
 * address: 0x606EF568   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606EF568(_DWORD *a1, float *a2)
{
  float v2; // s0

  v2 = a2[1];
  if ( v2 > -16.0 && v2 < 16.0 && *a2 <= 20.0 && *a2 >= 0.0 )
    return 0;
  a1[161] = 0;
  a1[162] = 1098907648;
  a1[163] = 1101004800;
  a1[164] = -1048576000;
  return sub_606EFFF0() ^ 1;
}
