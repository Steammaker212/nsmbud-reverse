/* SE_OBJ_BOUND_BLOCK_JUMP_HIGH_ref_2_helper_helper_7624B4
 * address: 0x607624B4   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_BOUND_BLOCK_JUMP_HIGH_ref_2_helper_helper_7624B4(int a1)
{
  int v2; // r5
  float v3; // s2
  float v4; // r0
  float v5; // r1
  int *v6; // r0
  int v7; // r2
  int v8; // r1
  float v9; // s0
  float v10; // s2
  float v12; // [sp+0h] [bp-20h] BYREF
  float v13[7]; // [sp+4h] [bp-1Ch] BYREF

  v2 = 0;
  v3 = FIELD_F32(a1, 112);
  v4 = FIELD_F32(a1, 108);
  v5 = FIELD_F32(a1, 116);
  v12 = 0.0;
  v13[0] = v4;
  v13[1] = v3 + 32.0;
  v13[2] = v5;
  if ( sub_60155F6C(a1 + 1328, v13, &v12) == 1 )
  {
    v2 = 1;
    v6 = (int *)(a1 + 6904);
    v7 = FIELD_U32(a1, 6904);
    v8 = v7 | 4;
    FIELD_U32(a1, 6904) = v7 | 4;
    v9 = v12;
    FIELD_F32(a1, 7044) = v12;
    v10 = FIELD_F32(a1, 112);
    if ( v9 > v10 )
    {
      v8 = v7 | 0xC;
      *v6 = v7 | 0xC;
    }
    if ( v9 > (float)(v10 + FIELD_F32(a1, 576)) )
    {
      v8 |= 0x10u;
      *v6 = v8;
    }
    if ( v9 > (float)(v10 + FIELD_F32(a1, 1244)) )
      *v6 = v8 | 0x20;
  }
  return v2;
}
