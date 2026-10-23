/* sub_6067D3EC
 * address: 0x6067D3EC   size: 552   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6067D3EC(int a1, int a2, int a3, int a4, float a5, int a6, int a7)
{
  float v10; // r0
  float v11; // s6
  float v12; // r1
  unsigned int v13; // r0
  ModelWrapper *v14; // r5
  float *v15; // r1
  float v16; // s4
  float v17; // s8
  float v18; // s0
  float v19; // s14
  float v20; // s3
  int result; // r0
  Vec2 position; // [sp+8h] [bp-50h] BYREF
  float v23; // [sp+10h] [bp-48h]
  int v24; // [sp+14h] [bp-44h]
  float v25; // [sp+18h] [bp-40h]
  float v26; // [sp+1Ch] [bp-3Ch]
  float v27; // [sp+20h] [bp-38h]
  int v28; // [sp+24h] [bp-34h]
  float v29; // [sp+28h] [bp-30h]
  float v30; // [sp+2Ch] [bp-2Ch]
  float v31; // [sp+30h] [bp-28h]
  int v32; // [sp+34h] [bp-24h]

  FIELD_U32(a1, 344) = *(_DWORD *)a3;
  FIELD_U32(a1, 348) = FIELD_U32(a3, 4);
  FIELD_U32(a1, 352) = FIELD_U32(a3, 8);
  FIELD_U32(a1, 356) = a7;
  FIELD_F32(a1, 360) = a5;
  FIELD_U32(a1, 324) = a2;
  (**(void (__fastcall ***)(int, float))a1)(a1, a5);
  v10 = *(float *)a3;
  FIELD_U32(a1, 308) = *(_DWORD *)a3;
  v11 = FIELD_F32(a3, 4);
  FIELD_F32(a1, 312) = v11;
  FIELD_U32(a1, 316) = FIELD_U32(a3, 8);
  FIELD_F32(a1, 292) = v10 + -32.0;
  FIELD_F32(a1, 296) = v11 + -32.0;
  FIELD_F32(a1, 300) = v10 + 32.0;
  FIELD_F32(a1, 304) = v11 + 32.0;
  FIELD_U32(a1, 320) = a7;
  v12 = FIELD_F32(a3, 4);
  position.x = *(float *)a3;
  position.y = v12;
  LineFollower_init((LineFollower *)(a1 + 148), &position, a4, 1, 0);
  ((void (__fastcall *)(int, _DWORD))LineFollower_start)(a1 + 148, 0);
  FIELD_U16(a1, 332) = 0;
  FIELD_U8(a1, 335) = 0;
  FIELD_U8(a1, 338) = 0;
  FIELD_U8(a1, 337) = 0;
  FIELD_U8(a1, 336) = 0;
  FIELD_U8(a1, 339) = 0;
  FIELD_U8(a1, 340) = a4;
  v13 = FIELD_U32(a1, 320);
  v14 = *(ModelWrapper **)(a1 + 328);
  v15 = (float *)((char *)sinLutTable + ((v13 >> 20) & 0xFF0));
  v16 = (float)(0.024541 * 0.0) + 0.0;
  v17 = (float)(-0.00030118 * 0.0) + 1.0;
  v18 = (float)(v13 & 0xFFFFFF) * 0.000000059605;
  v19 = *v15 + (float)(v18 * v15[1]);
  v20 = v15[2] + (float)(v18 * v15[3]);
  position.x = v17 * v20;
  v25 = v17 * v19;
  v29 = -v16;
  position.y = (float)((float)(v16 * v16) * v20) - (float)(v17 * v19);
  v26 = (float)(v17 * v20) + (float)((float)(v16 * v16) * v19);
  v30 = v16 * v17;
  v23 = (float)(v16 * (float)(v17 * v20)) + (float)(v16 * v19);
  v27 = (float)(v16 * (float)(v17 * v19)) - (float)(v16 * v20);
  v31 = v17 * v17;
  v24 = FIELD_U32(a1, 308);
  v28 = FIELD_U32(a1, 312);
  v32 = FIELD_U32(a1, 316);
  (*(void (__fastcall **)(void *, Vec2 *))(*(_DWORD *)FIELD_U32(v14, 0x0) + 60))(FIELD_U32(v14, 0x0), &position);
  ModelWrapper_updateModel(v14);
  result = a6;
  FIELD_U8(a1, 334) = a6;
  if ( a6 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 12))(a1);
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 16))(a1);
  }
  return result;
}
