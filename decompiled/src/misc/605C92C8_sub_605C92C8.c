/* sub_605C92C8
 * address: 0x605C92C8   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall sub_605C92C8(StateActor *a1, ActorBuildInfo *a2, int a3, void *a4)
{
  StateActor *result; // r0
  void *v6[3]; // [sp+0h] [bp-20h] BYREF
  char v7; // [sp+Ch] [bp-14h]

  v6[0] = a4;
  v6[1] = (void *)1091567616;
  v6[2] = (void *)1094713344;
  v7 = 0;
  result = sub_605CC1F8(a1, a2, v6);
  FIELD_U32(result, 0x0) = (int)off_60C0A5B0;
  result[1]._._._.field_2C = a3;
  result[1]._._._.field_30 = 0;
  return result;
}
