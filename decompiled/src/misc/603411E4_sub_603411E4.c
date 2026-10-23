/* sub_603411E4
 * address: 0x603411E4   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603411E4(int result)
{
  int v1; // r1
  _DWORD *v2; // r4
  unsigned int v3; // r7
  unsigned int v4; // r3
  int v5; // r6
  int v6; // r7
  int v7; // r2
  float *v8; // r6
  int *v9; // r5
  float v10; // s0
  _DWORD *v11; // r8
  _DWORD *v12; // r9
  _DWORD *v13; // r10
  unsigned int v14; // r1
  _DWORD *v15; // r5
  int v16; // r3
  _DWORD *v17; // r6
  int v18; // r2
  int v19; // r7
  _BOOL4 v20; // r7
  _DWORD *v21; // r0

  v2 = (_DWORD *)(result + 6408);
  v1 = FIELD_U32(result, 6408);
  if ( v1 == 1 )
  {
    v3 = FIELD_U32(result, 6416);
    v4 = v3 + 0x20000000;
    v3 -= 0x20000000;
    v5 = (v3 >> 20) & 0xFF0;
    v6 = v3 & 0xFFFFFF;
    FIELD_U32(result, 6416) = v4;
    v7 = FIELD_U32(result, 6412);
    v8 = (float *)((char *)sinLutTable + v5);
    v9 = dword_60341374;
    if ( v7 < 2 )
      v9 = &dword_60341374[1];
    v10 = *(float *)v9
        * (float)((float)((float)(*v8 + (float)((float)((float)(unsigned int)v6 * v8[1]) * 0.000000059605)) + 1.0) * 0.5);
    FIELD_F32(result, 6420) = v10;
    FIELD_F32(result, 6424) = v10;
    FIELD_F32(result, 6428) = v10;
    if ( !v4 )
    {
      FIELD_U32(result, 6412) = v7 - 1;
      if ( v7 <= 1 )
      {
        v11 = (_DWORD *)(result + 6428);
        v12 = (_DWORD *)(result + 6424);
        v13 = (_DWORD *)(result + 6420);
        v15 = (_DWORD *)(result + 6400);
        v14 = FIELD_U32(result, 6400);
        v17 = (_DWORD *)(result + 6404);
        v16 = FIELD_U32(result, 6404);
        v18 = v16;
        v19 = v16 & 1 | v14;
        v20 = v19 != 0;
        if ( v16 )
          v18 = 1;
        if ( v14 || (v18 & v20) == 1 )
        {
          v21 = (_DWORD *)(result + (v16 >> 1));
          *v2 = 2;
          if ( (v16 & 1) != 0 )
            v14 = *(_DWORD *)(*v21 + v14);
          ((void (__fastcall *)(_DWORD *))v14)(v21);
        }
        *v15 = sub_60340150;
        *v17 = 0;
        *v2 = 0;
        *v13 = 0;
        *v12 = 0;
        *v11 = 0;
        return 0;
      }
    }
  }
  else if ( !v1 )
  {
    FIELD_U32(result, 6428) = 0;
    FIELD_U32(result, 6424) = 0;
    FIELD_U32(result, 6420) = 0;
    FIELD_U32(result, 6416) = 0;
    FIELD_U32(result, 6412) = 2;
    *v2 = 1;
    return 1;
  }
  return result;
}
