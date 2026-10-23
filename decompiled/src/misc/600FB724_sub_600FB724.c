/* sub_600FB724
 * address: 0x600FB724   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600FB724(int a1)
{
  float v2; // s0
  int v3; // r0

  BowserJrBase__vf3FC(a1);
  v2 = (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 1156))(a1);
  FIELD_F32(a1, 144) = v2;
  FIELD_F32(a1, 148) = v2;
  FIELD_F32(a1, 152) = v2;
  FIELD_U32(a1, 80) = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 7168) = FIELD_U32(a1, 7156);
  v3 = FIELD_U32(a1, 7160);
  FIELD_U32(a1, 7172) = v3;
  FIELD_U32(a1, 7260) = v3;
  FIELD_U32(a1, 7604) = &dword_60C85D1C;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1164))(a1);
  FIELD_U8(a1, 7248) = 1;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C84148);
  return 1;
}
