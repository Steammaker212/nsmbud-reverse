/* face_1_ref_78E17C
 * address: 0x6078E17C   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall face_1_ref_78E17C(int a1)
{
  void (__fastcall *v2)(int, float *, _DWORD *); // r3
  float v3; // r2
  float v4; // r0
  float v5; // s10
  float v6; // s4
  float v7; // s6
  float v8; // s8
  float v9; // s12
  float result; // s0
  _DWORD v11[2]; // [sp+0h] [bp-40h] BYREF
  float v12[3]; // [sp+8h] [bp-38h] BYREF
  float v13; // [sp+14h] [bp-2Ch]
  float v14; // [sp+18h] [bp-28h]
  float v15; // [sp+1Ch] [bp-24h]
  float v16; // [sp+20h] [bp-20h]
  float v17; // [sp+24h] [bp-1Ch]
  float v18; // [sp+28h] [bp-18h]
  float v19; // [sp+2Ch] [bp-14h]
  float v20; // [sp+30h] [bp-10h]
  float v21; // [sp+34h] [bp-Ch]

  v2 = *(void (__fastcall **)(int, float *, _DWORD *))(*(_DWORD *)a1 + 144);
  v11[0] = &sead__SafeStringBase__vtable;
  v11[1] = "face_1";
  v2(a1, v12, v11);
  v3 = v17;
  v4 = v21;
  FIELD_U32(a1, 152) = FIELD_U32(a1, 56);
  FIELD_F32(a1, 156) = v3;
  FIELD_F32(a1, 160) = v4;
  v5 = *(float *)(FIELD_U32(a1, 288) + 4 * FIELD_U32(a1, 300) + 112);
  v13 = v13 + (float)((float)((float)(v12[0] * 0.0) - (float)(v12[1] * v5)) + (float)(v12[2] * 0.0));
  v6 = v3 + (float)((float)((float)(v14 * 0.0) - (float)(v15 * v5)) + (float)(v16 * 0.0));
  v7 = v18;
  v8 = v19;
  v9 = v20;
  FIELD_F32(a1, 140) = v13;
  FIELD_F32(a1, 144) = v6;
  result = v4 + (float)((float)((float)(v7 * 0.0) - (float)(v8 * v5)) + (float)(v9 * 0.0));
  FIELD_F32(a1, 148) = result;
  return result;
}
