/* sub_605CC95C
 * address: 0x605CC95C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605CC95C(int a1)
{
  int *v2; // r5
  float v3; // s0
  int result; // r0

  v2 = (int *)(a1 + 6124);
  FIELD_U32(a1, 6124) &= ~1u;
  CollisionActor__handleGravity((CollisionActor *)a1);
  v3 = CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648), v3);
  result = FIELD_U8(a1, 2872);
  if ( (result & 1) != 0 )
  {
    FIELD_U32(a1, 120) = 0;
    FIELD_U32(a1, 124) = 0;
    FIELD_U32(a1, 128) = 0;
    result = *v2 | 1;
    *v2 = result;
  }
  return result;
}
