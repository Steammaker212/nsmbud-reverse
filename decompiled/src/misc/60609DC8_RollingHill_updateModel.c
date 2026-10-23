/* RollingHill_updateModel
 * address: 0x60609DC8   size: 468   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall RollingHill_updateModel(RollingHill *this)
{
  unsigned int v2; // r12
  unsigned int x; // r3
  unsigned int z; // r6
  float v5; // s10
  float y; // s14
  float *v7; // r0
  float *v8; // r2
  int v9; // lr
  float v10; // s2
  float v11; // s8
  float v12; // s0
  float v13; // s6
  unsigned int v14; // r0
  int v15; // s1
  float v16; // r6
  float v17; // s4
  float v18; // s12
  float *v19; // r1
  float v20; // s1
  float v21; // s3
  float v22; // s7
  float v23; // s13
  float v24; // s9
  float v25; // s20
  float v26; // s16
  float v27; // s24
  float v28; // s28
  float v29; // s12
  float v30; // s3
  float v32[34]; // [sp+0h] [bp-88h] BYREF

  v2 = *((_DWORD *)this + 273);
  x = FIELD_U32(this, 0x9C);
  z = FIELD_U32(this, 0xA4);
  v5 = FIELD_F32(this, 0x6C);
  y = FIELD_F32(this, 0x70);
  v7 = (float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0));
  v8 = (float *)((char *)sinLutTable + ((x >> 20) & 0xFF0));
  v9 = (z >> 20) & 0xFF0;
  v10 = *v7;
  v11 = v7[1];
  v12 = v7[2];
  v13 = v7[3];
  v14 = FIELD_U32(this, 0xA0);
  v15 = z & 0xFFFFFF;
  v16 = FIELD_F32(this, 0x74);
  v17 = y - *(float *)&FIELD_U32(this, 0x424);
  v18 = *((float *)this + 272);
  v19 = (float *)((char *)sinLutTable + ((v14 >> 20) & 0xFF0));
  v20 = (float)(unsigned int)v15 * 0.000000059605;
  v21 = (float)(v14 & 0xFFFFFF) * 0.000000059605;
  v22 = (float)(x & 0xFFFFFF) * 0.000000059605;
  v23 = *(float *)((char *)&sinLutTable[2] + v9) + (float)(v20 * *(float *)((char *)&sinLutTable[3] + v9));
  v24 = *(float *)((char *)sinLutTable + v9) + (float)(v20 * *(float *)((char *)&sinLutTable[1] + v9));
  v25 = v19[2] + (float)(v21 * v19[3]);
  v26 = *v19 + (float)(v21 * v19[1]);
  v27 = *v8 + (float)(v22 * v8[1]);
  v28 = v8[2] + (float)(v22 * v8[3]);
  v32[0] = (float)(v25 * v23) + (float)(v27 * (float)(v26 * v24));
  v32[4] = v28 * v24;
  v32[8] = (float)(v27 * (float)(v25 * v24)) - (float)(v26 * v23);
  v32[1] = (float)(v27 * (float)(v26 * v23)) - (float)(v25 * v24);
  v32[5] = v28 * v23;
  v32[9] = (float)(v26 * v24) + (float)(v27 * (float)(v25 * v23));
  v29 = v18 * 0.5;
  v30 = (float)(v2 & 0xFFFFFF) * 0.000000059605;
  v32[2] = v28 * v26;
  v32[6] = -v27;
  v32[10] = v28 * v25;
  v32[3] = v5 + (float)(v29 * (float)(v10 + (float)(v11 * v30)));
  v32[7] = v17 + (float)(v29 * (float)(v12 + (float)(v30 * v13)));
  v32[11] = v16;
  (*(void (__fastcall **)(int, Vec3 *))(*(_DWORD *)FIELD_U32(this, 0x284) + 68))(FIELD_U32(this, 0x284), &FIELD_U32(this, 0x90));
  (*(void (__fastcall **)(int, float *))(*(_DWORD *)FIELD_U32(this, 0x284) + 60))(FIELD_U32(this, 0x284), v32);
  return (*(int (__fastcall **)(int))(*(_DWORD *)FIELD_U32(this, 0x284) + 56))(FIELD_U32(this, 0x284));
}
