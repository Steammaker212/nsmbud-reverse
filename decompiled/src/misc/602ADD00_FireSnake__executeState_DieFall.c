/* FireSnake__executeState_DieFall
 * address: 0x602ADD00   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A7FF8
// 
// Overridden by: None
int __fastcall FireSnake__executeState_DieFall(int a1)
{
  float v2; // s4
  float v3; // s0
  int result; // r0
  int v5; // r3

  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v2 = FIELD_F32(a1, 144) - FIELD_F32(a1, 7248);
  FIELD_F32(a1, 144) = v2;
  v3 = FIELD_F32(a1, 148) - FIELD_F32(a1, 7252);
  FIELD_F32(a1, 148) = v3;
  result = a1 + 7272;
  FIELD_F32(a1, 152) = FIELD_F32(a1, 152) - FIELD_F32(a1, 7256);
  FIELD_F32(a1, 7272) = FIELD_F32(a1, 7272) - FIELD_F32(a1, 7260);
  FIELD_F32(a1, 7276) = FIELD_F32(a1, 7276) - FIELD_F32(a1, 7264);
  FIELD_F32(a1, 7280) = FIELD_F32(a1, 7280) - FIELD_F32(a1, 7268);
  if ( v2 >= *(float *)&dword_60C90BB0 )
  {
    if ( v3 >= *(float *)&dword_60C90BB4 )
      return result;
    v5 = dword_60C90BB4;
  }
  else
  {
    v5 = dword_60C90BB4;
  }
  FIELD_U32(a1, 144) = dword_60C90BB0;
  FIELD_U32(a1, 148) = v5;
  FIELD_U32(a1, 152) = dword_60C90BB8;
  *(_DWORD *)result = 1065353216;
  FIELD_U32(a1, 7276) = 1065353216;
  FIELD_U32(a1, 7280) = 1065353216;
  return 1065353216;
}
