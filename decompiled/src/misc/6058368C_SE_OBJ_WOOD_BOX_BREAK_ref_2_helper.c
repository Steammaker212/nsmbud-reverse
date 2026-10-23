/* SE_OBJ_WOOD_BOX_BREAK_ref_2_helper
 * address: 0x6058368C   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_WOOD_BOX_BREAK_ref_2_helper(int a1, int a2)
{
  float v3; // s16
  float v4; // r9
  int v5; // r5
  int result; // r0
  float v7; // s18
  int v8; // r6
  float *v9; // r7
  float v10; // s0
  Vec3 v11; // [sp+Ch] [bp-3Ch] BYREF

  v3 = *(float *)a2;
  v4 = FIELD_F32(a2, 4);
  v5 = FIELD_U32(a2, 12);
  AreaTask_getWrappedXPos(AreaTask_intance, *(float *)a2);
  result = (int)dword_60583748;
  if ( !FIELD_U8(a2, 17) )
    result = (int)&dword_60583748[1];
  if ( FIELD_U8(a2, 16) )
  {
    v7 = *(float *)result;
    result = 0x5812F0u;
    v8 = 0;
    v9 = (float *)&unk_60B049E4;
    do
    {
      v10 = *v9;
      v11.y = v4;
      v11.z = v7;
      v11.x = v10 + v3;
      sub_60582BA8(result, (unsigned __int8 *)a2, &v11, v8, v5, 0);
      result = FIELD_U8(a2, 16);
      ++v8;
      ++v9;
      v5 = v5 == 0;
    }
    while ( v8 < result );
  }
  return result;
}
