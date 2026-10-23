/* sub_602C7274
 * address: 0x602C7274   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602C7274(CollisionActor *a1)
{
  float v2; // s0
  float32x2_t v3; // d0
  float32x2_t v4; // d2
  int result; // r0

  CollisionActor__handleGravity(a1);
  v2 = FIELD_U32(a1, 0x0).speed.y + FIELD_U32(a1, 0x0).position.y;
  FIELD_U32(a1, 0x0).position.y = v2;
  CollisionMgr_process(FIELD_U8(a1, 0x288), v2);
  result = (unsigned __int8)FIELD_U8(a1, 0x288)[2224];
  if ( (result & 1) != 0 )
  {
    v4.n64_u32[0] = 2.0;
    v3.n64_f32[0] = FIELD_U32(a1, 0x0).speed.y * -0.5;
    LODWORD(FIELD_U32(a1, 0x0).speed.y) = vmin_f32(v3, v4).n64_u32[0];
    return (*(int (__fastcall **)(CollisionActor *, int *))(FIELD_U32(a1, 0x0)._.vtable + 192))(a1, &dword_60C91668);
  }
  return result;
}
