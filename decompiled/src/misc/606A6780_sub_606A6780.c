/* sub_606A6780
 * address: 0x606A6780   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606A6780(int a1)
{
  float v2; // s4
  float v3; // s2
  float v4; // r2
  float v5; // r1
  float v6; // s0
  unsigned int v7; // r3
  int v8; // r12
  float v9; // s2
  float v10; // s0
  ModelWrapper *v11; // r4
  _DWORD v13[16]; // [sp+0h] [bp-40h] BYREF

  sub_606A6464(a1);
  v2 = FIELD_F32(a1, 6108);
  if ( (FIELD_U32(a1, 6116) | 1) == 1 )
  {
    v3 = FIELD_F32(a1, 108);
    v4 = v3;
    FIELD_F32(a1, 492) = FIELD_F32(a1, 6804) + (float)(v2 - v3);
    v5 = FIELD_F32(a1, 112);
    v6 = v5;
  }
  else
  {
    v6 = FIELD_F32(a1, 112);
    v5 = v6;
    FIELD_F32(a1, 496) = FIELD_F32(a1, 6808) + (float)(v2 - v6);
    v4 = FIELD_F32(a1, 108);
    v3 = v4;
  }
  v7 = FIELD_U32(a1, 6812) + 0x10000000;
  FIELD_U32(a1, 6812) = v7;
  FIELD_F32(a1, 6792) = v3;
  FIELD_F32(a1, 6796) = v6;
  v8 = FIELD_U32(a1, 116);
  FIELD_U32(a1, 6800) = v8;
  if ( FIELD_U8(a1, 6112) )
  {
    v9 = v3
       + (float)((float)(*(float *)((char *)sinLutTable + ((v7 >> 20) & 0xFF0))
                       + (float)((float)((float)(v7 & 0xFFFFFF)
                                       * *(float *)((char *)&sinLutTable[1] + ((v7 >> 20) & 0xFF0)))
                               * 0.000000059605))
               * 0.5);
    FIELD_F32(a1, 6792) = v9;
    v4 = v9;
    v10 = v6
        + (float)((float)(*(float *)((char *)sinLutTable + ((v7 >> 19) & 0xFF0))
                        + (float)((float)((float)((2 * v7) & 0xFFFFFE)
                                        * *(float *)((char *)&sinLutTable[1] + ((v7 >> 19) & 0xFF0)))
                                * 0.000000059605))
                * 0.5);
    FIELD_F32(a1, 6796) = v10;
    v5 = v10;
  }
  v11 = *(ModelWrapper **)(a1 + 6788);
  v13[0] = 1065353216;
  v13[1] = 0;
  v13[2] = 0;
  v13[4] = 0;
  v13[5] = 1065353216;
  v13[6] = 0;
  v13[8] = 0;
  v13[9] = 0;
  v13[10] = 1065353216;
  *(float *)&v13[3] = v4;
  *(float *)&v13[7] = v5;
  v13[11] = v8;
  (*(void (__fastcall **)(void *, _DWORD *))(*(_DWORD *)FIELD_U32(v11, 0x0) + 60))(FIELD_U32(v11, 0x0), v13);
  return ModelWrapper_updateModel(v11);
}
