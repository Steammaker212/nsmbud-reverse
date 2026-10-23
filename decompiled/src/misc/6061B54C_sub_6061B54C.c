/* sub_6061B54C
 * address: 0x6061B54C   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6061B54C(int a1)
{
  float v2; // s0
  float v3; // s2
  int result; // r0
  bool v5; // zf
  float v6; // s0
  float v7; // s2
  int v8; // r0

  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v2 = FIELD_F32(a1, 112);
  v3 = FIELD_F32(a1, 108);
  FIELD_U32(a1, 6848) = FIELD_U32(a1, 116);
  FIELD_F32(a1, 6840) = v3 + FIELD_F32(a1, 6832);
  FIELD_F32(a1, 6844) = v2 + FIELD_F32(a1, 6836);
  CollisionActor__sub_600034C8((CollisionActor *)a1);
  result = FIELD_U32(a1, 2872);
  v5 = (result & 1) == 0;
  if ( (result & 1) != 0 )
  {
    FIELD_U32(a1, 124) = 0;
    v5 = (result & 4) == 0;
  }
  if ( !v5 )
  {
    v6 = FIELD_F32(a1, 6844);
    v7 = FIELD_F32(a1, 6840);
    FIELD_U32(a1, 116) = FIELD_U32(a1, 6848);
    FIELD_F32(a1, 108) = v7 - FIELD_F32(a1, 6832);
    FIELD_F32(a1, 112) = v6 - FIELD_F32(a1, 6836);
  }
  if ( (result & 0x440000) != 0 && (result & 0x10000000) == 0
    || (result & 0x880000) != 0 && (result &= 0x20000000u) == 0 )
  {
    v8 = FIELD_U32(a1, 80) ^ 1;
    FIELD_U32(a1, 80) = v8;
    result = dword_60B06730[v8];
    FIELD_U32(a1, 120) = result;
  }
  return result;
}
