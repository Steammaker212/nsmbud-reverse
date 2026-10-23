/* sub_6062F804
 * address: 0x6062F804   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6062F804(_DWORD *a1)
{
  sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
  a1[1527] = 0;
  a1[1528] = 0;
  a1[1529] = sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 28;
  a1[1530] = 1;
  return 6120;
}
