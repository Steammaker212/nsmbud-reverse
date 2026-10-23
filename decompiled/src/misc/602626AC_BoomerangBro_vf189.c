/* BoomerangBro_vf189
 * address: 0x602626AC   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BoomerangBro_vf189(int a1)
{
  int result; // r0

  result = dword_60AF24D4[sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 30];
  FIELD_U32(a1, 6548) = result;
  return result;
}
