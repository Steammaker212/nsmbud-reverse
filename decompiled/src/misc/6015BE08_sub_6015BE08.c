/* sub_6015BE08
 * address: 0x6015BE08   size: 456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6015BE08(int a1, _DWORD *a2, int a3)
{
  float v6; // r0
  float v7; // s6
  float v8; // r1
  float v9; // s0
  float v10; // s2
  unsigned int v11; // r0
  float v12; // s4
  float v13; // s6
  float *v14; // r1
  float v15; // s3
  float v16; // s12
  float v17; // r3
  float v18; // s8
  float v19; // s10
  float v20; // s2
  float v21; // s0

  sub_601603E8((ColliderBase *)a1);
  FIELD_U32(a1, 152) = *a2;
  FIELD_U32(a1, 156) = a2[1];
  FIELD_U32(a1, 160) = a2[2];
  FIELD_U32(a1, 164) = a2[3];
  FIELD_U32(a1, 168) = a2[4];
  FIELD_U32(a1, 172) = *(_DWORD *)a3;
  FIELD_U32(a1, 176) = FIELD_U32(a3, 4);
  FIELD_U32(a1, 188) = FIELD_U32(a3, 8);
  FIELD_U32(a1, 192) = FIELD_U32(a3, 12);
  FIELD_U32(a1, 244) = FIELD_U32(a3, 32);
  ColliderBase_setSolidity((ColliderBase *)a1, 1);
  FIELD_U32(a1, 364) = FIELD_U32(a3, 24);
  FIELD_U32(a1, 368) = FIELD_U32(a3, 28);
  v6 = FIELD_F32(a3, 16);
  FIELD_F32(a1, 340) = v6;
  v7 = v6;
  v8 = FIELD_F32(a3, 20);
  FIELD_F32(a1, 344) = v8;
  FIELD_U32(a1, 144) = 0;
  v9 = FIELD_F32(a1, 192);
  v10 = FIELD_F32(a1, 188);
  v11 = FIELD_U32(a1, 244);
  v12 = v8 - v9;
  v13 = v7 - v10;
  if ( v11 )
  {
    v14 = (float *)((char *)sinLutTable + ((v11 >> 20) & 0xFF0));
    v15 = (float)(v11 & 0xFFFFFF);
    v16 = *v14 + (float)((float)(v15 * 0.000000059605) * v14[1]);
    v17 = v14[2] + (float)((float)(v15 * 0.000000059605) * v14[3]);
    v18 = (float)(v12 * v17) + (float)(v13 * v16);
    v19 = (float)(v13 * v17) - (float)(v12 * v16);
    FIELD_F32(a1, 228) = v17;
    FIELD_F32(a1, 232) = -v16;
    FIELD_F32(a1, 236) = v16;
    FIELD_F32(a1, 240) = v17;
  }
  else
  {
    v19 = v13;
    v18 = v8 - v9;
  }
  v20 = v10 + v19;
  v21 = v9 + v18;
  FIELD_F32(a1, 348) = v20;
  FIELD_F32(a1, 352) = v21;
  FIELD_F32(a1, 204) = v20;
  FIELD_F32(a1, 208) = v21;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 48))(a1);
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 52))(a1);
}
