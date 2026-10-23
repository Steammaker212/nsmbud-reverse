/* sub_605C999C
 * address: 0x605C999C   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605C999C(_DWORD *a1)
{
  int result; // r0

  a1[1529] = 1;
  result = dword_60B057D4[sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) & 1];
  a1[30] = result;
  a1[31] = 1080033280;
  a1[32] = 0;
  return result;
}
