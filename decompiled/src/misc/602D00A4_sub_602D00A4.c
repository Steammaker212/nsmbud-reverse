/* sub_602D00A4
 * address: 0x602D00A4   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_602D00A4(int a1, float a2)
{
  int v4; // r1
  int v5; // r2
  float v6; // s22
  float v7; // s20
  float v8; // s20
  int v9; // r6
  int v10; // r6
  int v11; // r6
  float *v12; // r6
  float result; // s0
  int v14; // [sp+0h] [bp-48h] BYREF
  int v15; // [sp+4h] [bp-44h]
  int v16; // [sp+8h] [bp-40h]

  v4 = FIELD_U32(a1, 112);
  v5 = FIELD_U32(a1, 116);
  v14 = FIELD_U32(a1, 108);
  v15 = v4;
  v16 = v5;
  v6 = FIELD_F32(a1, 116);
  v7 = FIELD_F32(a1, 6580);
  (*(void (__fastcall **)(int, _DWORD, int *, int, float))(FIELD_U32(a1, 6316) + 12))(a1 + 6316, 0, &v14, a1, 0.0);
  v8 = v6 - v7;
  v14 = FIELD_U32(a1, 6384);
  v15 = FIELD_U32(a1, 6388);
  v16 = FIELD_U32(a1, 6392);
  FIELD_F32(a1, 6332) = FIELD_F32(a1, 6332) - v8;
  v9 = FIELD_U32(a1, 6436);
  (*(void (__fastcall **)(int, _DWORD, int *, int, float))(*(_DWORD *)v9 + 12))(v9, 0, &v14, a1, 0.0);
  v14 = FIELD_U32(v9, 68);
  v15 = FIELD_U32(v9, 72);
  v16 = FIELD_U32(v9, 76);
  FIELD_F32(v9, 16) = FIELD_F32(v9, 16) - v8;
  v10 = FIELD_U32(v9, 120);
  (*(void (__fastcall **)(int, _DWORD, int *, int, float))(*(_DWORD *)v10 + 12))(v10, 0, &v14, a1, 0.0);
  v14 = FIELD_U32(v10, 68);
  v15 = FIELD_U32(v10, 72);
  v16 = FIELD_U32(v10, 76);
  FIELD_F32(v10, 16) = FIELD_F32(v10, 16) - v8;
  v11 = FIELD_U32(v10, 120);
  (*(void (__fastcall **)(int, _DWORD, int *, int, float))(*(_DWORD *)v11 + 12))(v11, 0, &v14, a1, 0.0);
  v14 = FIELD_U32(v11, 68);
  v15 = FIELD_U32(v11, 72);
  v16 = FIELD_U32(v11, 76);
  FIELD_F32(v11, 16) = FIELD_F32(v11, 16) - v8;
  v12 = *(float **)(v11 + 120);
  (*(void (__fastcall **)(float *, _DWORD, int *, int, float))(*(_DWORD *)v12 + 12))(v12, 0, &v14, a1, a2 * 12.5);
  result = v12[4] - v8;
  v12[4] = result;
  return result;
}
