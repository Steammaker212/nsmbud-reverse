/* sub_6034A478
 * address: 0x6034A478   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6034A478(CollisionActor *a1)
{
  float v2; // s0
  int result; // r0
  float v4; // s2

  CollisionActor__handleGravity(a1);
  v2 = CollisionActor__handleSpeed(a1);
  CollisionMgr_process(FIELD_U8(a1, 0x288), v2);
  sub_6039F328(a1, 0);
  result = (unsigned __int8)FIELD_U8(a1, 0x288)[2224];
  if ( (result & 1) != 0 )
  {
    v4 = (float)byte_60AFE3F4[FIELD_U32(a1, 0x50)];
    FIELD_F32(a1, 0x78) = v4 * 2.5;
    FIELD_F32(a1, 0x84) = v4 * 2.5;
    return (*(int (__fastcall **)(CollisionActor *, int *))(FIELD_U32(a1, 0x0) + 192))(a1, &dword_60C94BF0);
  }
  return result;
}
