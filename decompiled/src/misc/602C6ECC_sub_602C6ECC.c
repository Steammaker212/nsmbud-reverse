/* sub_602C6ECC
 * address: 0x602C6ECC   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602C6ECC(CollisionActor *a1)
{
  int result; // r0
  float v3; // s0

  if ( a1[4].collisionMgr[3192] )
    return (*(int (__fastcall **)(CollisionActor *, int *))(FIELD_U32(a1, 0x0) + 192))(a1, &dword_60C91668);
  CollisionActor__handleGravity(a1);
  v3 = FIELD_F32(a1, 0x7C) + FIELD_F32(a1, 0x70);
  FIELD_F32(a1, 0x70) = v3;
  CollisionMgr_process(FIELD_U8(a1, 0x288), v3);
  result = (unsigned __int8)FIELD_U8(a1, 0x288)[2224];
  if ( (result & 1) != 0 )
  {
    FIELD_F32(a1, 0x7C) = 0.0;
    return 0;
  }
  return result;
}
