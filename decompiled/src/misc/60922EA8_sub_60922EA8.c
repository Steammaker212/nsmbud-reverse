/* sub_60922EA8
 * address: 0x60922EA8   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60922EA8(_DWORD *a1)
{
  int result; // r0

  *(a1 - 7) = off_60C5D72C;
  *a1 = off_60C5D790;
  a1[21] = &off_60C5E40C;
  a1[6] = &off_60C5E40C;
  a1[2] = &off_60C5E40C;
  result = nullsub_2382(a1);
  *(_DWORD *)(result - 28) = &off_60C5D81C;
  return result;
}
