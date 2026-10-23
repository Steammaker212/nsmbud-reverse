/* ShellEnemy__vf2D8
 * address: 0x603A2284   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall ShellEnemy__vf2D8(int a1)
{
  int result; // r0
  __int16 v3; // r1
  int v4; // t1
  bool v5; // zf
  __int16 v6; // r1
  int v7; // r1
  int v8; // r5
  int v9; // r2
  unsigned int v10; // r1
  float *v11; // r2
  float v12; // s12
  float v13; // s6
  _BOOL4 v14; // r1
  bool v15; // zf

  v4 = FIELD_U16(a1, 6384);
  result = a1 + 6384;
  v3 = v4;
  v5 = v4 == 0;
  if ( v4 )
  {
    v6 = v3 - 1;
    *(_WORD *)result = v6;
    result = 0;
    v5 = v6 == 0;
  }
  if ( v5 )
  {
    v7 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 148))(a1);
    result = 0;
    if ( !v7 )
    {
      v8 = 0;
      FIELD_U8(a1, 6408) = 0;
      v9 = FIELD_U32(a1, 6376);
      if ( v9 )
      {
        v8 = v9 - 1;
        FIELD_U32(a1, 6376) = v9 - 1;
      }
      if ( v8 < FIELD_U32(a1, 6380) )
      {
        FIELD_U8(a1, 6408) = 1;
        v10 = FIELD_U32(a1, 6372) + dword_60C977E4;
        FIELD_U32(a1, 6372) = v10;
        v11 = (float *)((char *)sinLutTable + ((v10 >> 20) & 0xFF0));
        v12 = (float)(v10 & 0xFFFFFF);
        v13 = v11[2] + (float)((float)(v12 * 0.000000059605) * v11[3]);
        FIELD_U32(a1, 6360) = (int)(float)((float)(*v11 + (float)(v11[1] * (float)(v12 * 0.000000059605)))
                                            * 167770000.0);
        FIELD_U32(a1, 6364) = 0;
        FIELD_U32(a1, 6368) = (int)(float)(v13 * 167770000.0);
      }
      v14 = sub_60273514(a1);
      v15 = v8 == 0;
      result = 0;
      if ( !v8 )
        v15 = v14;
      if ( v15 )
      {
        FIELD_U32(a1, 6360) = 0;
        FIELD_U32(a1, 6364) = 0;
        FIELD_U32(a1, 6368) = 0;
        FIELD_U8(a1, 6393) = 0;
        FIELD_U8(a1, 6408) = 0;
        FIELD_U32(a1, 6404) = 0;
        FIELD_U32(a1, 6400) = 0;
        FIELD_U32(a1, 6396) = 0;
        return 1;
      }
    }
  }
  return result;
}
