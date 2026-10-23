/* sub_60289BC4
 * address: 0x60289BC4   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60289BC4(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // t1
  int v5; // r0
  _DWORD *result; // r0
  int v7; // r1
  float v8; // s0
  float v9; // s0
  float v10; // s0
  float v11; // s0

  v4 = FIELD_U32(a1, 6576);
  v2 = (_DWORD *)(a1 + 6576);
  v3 = v4;
  if ( v4 )
  {
    *v2 = v3 - 1;
  }
  else
  {
    v5 = -FIELD_U32(a1, 6560);
    if ( FIELD_U32(a1, 156) - 0x4000000 > v5 )
      v5 = FIELD_U32(a1, 156) - 0x4000000;
    FIELD_U32(a1, 156) = v5;
    CollisionActor__handleGravity((CollisionActor *)a1);
    CollisionActor__handleSpeed((CollisionActor *)a1);
  }
  result = (_DWORD *)(a1 + 6572);
  v7 = FIELD_U32(a1, 6572);
  if ( v7 <= 1 )
  {
    v8 = FIELD_F32(a1, 148);
    if ( (v7 & 1) != 0 )
    {
      v11 = v8 + 0.075;
      FIELD_F32(a1, 148) = v11;
      if ( v11 < 0.9999 )
        return result;
      v10 = 1.0;
    }
    else
    {
      v9 = v8 + -0.075;
      FIELD_F32(a1, 148) = v9;
      if ( v9 > 0.7001 )
        return result;
      v10 = 0.7;
    }
    FIELD_F32(a1, 148) = v10;
    *result = v7 + 1;
  }
  return result;
}
