/* sub_6067DA10
 * address: 0x6067DA10   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6067DA10(int a1)
{
  float v2; // r0
  float v3; // r1
  unsigned int v4; // r0
  ModelWrapper *v5; // r5
  float *v6; // r1
  float v7; // s4
  float v8; // s8
  float v9; // s0
  float v10; // s14
  float v11; // s3
  int result; // r0
  Vec2 position; // [sp+8h] [bp-40h] BYREF
  float v14; // [sp+10h] [bp-38h]
  int v15; // [sp+14h] [bp-34h]
  float v16; // [sp+18h] [bp-30h]
  float v17; // [sp+1Ch] [bp-2Ch]
  float v18; // [sp+20h] [bp-28h]
  int v19; // [sp+24h] [bp-24h]
  float v20; // [sp+28h] [bp-20h]
  float v21; // [sp+2Ch] [bp-1Ch]
  float v22; // [sp+30h] [bp-18h]
  int v23; // [sp+34h] [bp-14h]

  v2 = FIELD_F32(a1, 344);
  FIELD_F32(a1, 308) = v2;
  v3 = FIELD_F32(a1, 348);
  FIELD_F32(a1, 312) = v3;
  FIELD_U32(a1, 316) = FIELD_U32(a1, 352);
  FIELD_U32(a1, 320) = FIELD_U32(a1, 356);
  position.x = v2;
  position.y = v3;
  LineFollower_init((LineFollower *)(a1 + 148), &position, FIELD_U8(a1, 340), 1, 0);
  ((void (__fastcall *)(int, _DWORD))LineFollower_start)(a1 + 148, 0);
  FIELD_U16(a1, 332) = 0;
  FIELD_U8(a1, 336) = 0;
  FIELD_U8(a1, 339) = 0;
  FIELD_U8(a1, 335) = 0;
  FIELD_U8(a1, 338) = 0;
  FIELD_U8(a1, 337) = 0;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
  v4 = FIELD_U32(a1, 320);
  v5 = *(ModelWrapper **)(a1 + 328);
  v6 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
  v7 = (float)(0.024541 * 0.0) + 0.0;
  v8 = (float)(-0.00030118 * 0.0) + 1.0;
  v9 = (float)(v4 & 0xFFFFFF) * 0.000000059605;
  v10 = *v6 + (float)(v9 * v6[1]);
  v11 = v6[2] + (float)(v9 * v6[3]);
  position.x = v8 * v11;
  v16 = v8 * v10;
  v20 = -v7;
  position.y = (float)((float)(v7 * v7) * v11) - (float)(v8 * v10);
  v17 = (float)(v8 * v11) + (float)((float)(v7 * v7) * v10);
  v21 = v7 * v8;
  v14 = (float)(v7 * (float)(v8 * v11)) + (float)(v7 * v10);
  v18 = (float)(v7 * (float)(v8 * v10)) - (float)(v7 * v11);
  v22 = v8 * v8;
  v15 = FIELD_U32(a1, 308);
  v19 = FIELD_U32(a1, 312);
  v23 = FIELD_U32(a1, 316);
  (*(void (__fastcall **)(void *, Vec2 *))(*(_DWORD *)FIELD_U32(v5, 0x0) + 60))(FIELD_U32(v5, 0x0), &position);
  ModelWrapper_updateModel(v5);
  result = FIELD_U8(a1, 334);
  if ( FIELD_U8(a1, 334) )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 24))(a1);
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 16))(a1);
  }
  return result;
}
