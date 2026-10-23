/* sub_605AEF70
 * address: 0x605AEF70   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605AEF70(int a1)
{
  float *v2; // r5
  float v3; // s0

  v2 = (float *)(a1 + 6540);
  v3 = ((float (__fastcall *)(int))loc_605AD678)(a1);
  *v2 = 16.0 + 208.0;
  FIELD_U32(a1, 6544) = 0;
  FIELD_U32(a1, 6548) = 1129316352;
  FIELD_F32(a1, 6552) = 32.0 - v3;
  FIELD_U32(a1, 6236) = 1090519040;
  FIELD_U32(a1, 6240) = 0;
  FIELD_U32(a1, 6244) = 1090519040;
  FIELD_U32(a1, 6248) = 0;
  FIELD_U32(a1, 6280) = 1065353216;
  FIELD_U32(a1, 6284) = -1082130432;
  FIELD_U32(a1, 6288) = 1098907648;
  FIELD_F32(a1, 6292) = -16.0;
  return a1 + 6292;
}
