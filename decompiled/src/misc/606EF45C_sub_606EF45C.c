/* sub_606EF45C
 * address: 0x606EF45C   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606EF45C(_DWORD *a1, float *a2)
{
  if ( fabsf(*a2) < 28.0 )
    return 0;
  a1[161] = -1048576000;
  a1[162] = 1101004800;
  a1[163] = 1098907648;
  a1[164] = 0;
  return sub_606EFFF0() ^ 1;
}
