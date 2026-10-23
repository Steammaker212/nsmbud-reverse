/* sub_601442D8
 * address: 0x601442D8   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_601442D8(int a1)
{
  float v2; // s0
  float result; // s0
  int v4; // r1
  bool v5; // cc
  int v6; // r2
  float v7; // s2
  float v8; // s4
  int v9; // r1
  float v10; // s8

  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  if ( (*(int (__fastcall **)(int, float))(*(_DWORD *)a1 + 252))(a1, v2) == 1 )
    SE_OBJ_PNGN_ICEBALL_DISAPP_ref(a1);
  v4 = FIELD_U32(a1, 6744);
  if ( v4 )
  {
    v5 = v4 <= 1;
    v6 = FIELD_U32(a1, 6744);
    v7 = FIELD_F32(a1, 148);
    v8 = FIELD_F32(a1, 152);
    v9 = v4 - 1;
    if ( v5 )
      v6 = 1;
    v10 = 1.0 / (float)v6;
    result = FIELD_F32(a1, 144) + (float)(v10 * (float)(1.0 - FIELD_F32(a1, 144)));
    FIELD_F32(a1, 144) = result;
    FIELD_F32(a1, 148) = v7 + (float)(v10 * (float)(1.0 - v7));
    FIELD_F32(a1, 152) = v8 + (float)(v10 * (float)(1.0 - v8));
    FIELD_U32(a1, 6744) = v9;
  }
  return result;
}
