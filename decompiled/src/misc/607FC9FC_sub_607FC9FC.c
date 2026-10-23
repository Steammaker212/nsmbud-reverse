/* sub_607FC9FC
 * address: 0x607FC9FC   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_607FC9FC(int a1)
{
  int v1; // r4
  int v2; // r0
  float v3; // s0

  v1 = FIELD_U32(a1, 184);
  v2 = sub_60804418(v1);
  sub_60804D64(v2, 0);
  v3 = ((float (__fastcall *)(int))loc_608039A4)(v1);
  return (float)((float)(v3 * 224.0) + FIELD_F32(AreaTask_intance, 1816)) + (float)((float)(v3 * 224.0) * -0.5);
}
