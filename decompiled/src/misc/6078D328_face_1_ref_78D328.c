/* face_1_ref_78D328
 * address: 0x6078D328   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall face_1_ref_78D328(int a1)
{
  float v2; // s0
  int v3; // r5
  void (__fastcall *v4)(int, float *, _DWORD *); // r3
  float v5; // r2
  float v6; // r0
  float v7; // s10
  float v8; // s4
  float v9; // s6
  float v10; // s8
  float v11; // s12
  float result; // s0
  _DWORD v13[2]; // [sp+0h] [bp-48h] BYREF
  float v14[3]; // [sp+8h] [bp-40h] BYREF
  float v15; // [sp+14h] [bp-34h]
  float v16; // [sp+18h] [bp-30h]
  float v17; // [sp+1Ch] [bp-2Ch]
  float v18; // [sp+20h] [bp-28h]
  float v19; // [sp+24h] [bp-24h]
  float v20; // [sp+28h] [bp-20h]
  float v21; // [sp+2Ch] [bp-1Ch]
  float v22; // [sp+30h] [bp-18h]
  float v23; // [sp+34h] [bp-14h]

  sub_6078D4AC();
  v2 = (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 220))(a1);
  FIELD_F32(a1, 516) = v2;
  FIELD_F32(a1, 520) = v2;
  FIELD_F32(a1, 524) = v2;
  v3 = **(_DWORD **)(a1 + 24);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)v3 + 60))(v3, a1 + 44);
  sub_6078D94C(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 52))(v3);
  sub_6078DC64(a1);
  sub_6078DDAC(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 268))(a1);
  sub_6040EC24(a1 + 408, v3);
  (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 56))(v3);
  v4 = *(void (__fastcall **)(int, float *, _DWORD *))(*(_DWORD *)a1 + 144);
  v13[0] = &sead__SafeStringBase__vtable;
  v13[1] = "face_1";
  v4(a1, v14, v13);
  v5 = v19;
  v6 = v23;
  FIELD_U32(a1, 152) = FIELD_U32(a1, 56);
  FIELD_F32(a1, 156) = v5;
  FIELD_F32(a1, 160) = v6;
  v7 = *(float *)(FIELD_U32(a1, 288) + 4 * FIELD_U32(a1, 300) + 112);
  v15 = v15 + (float)((float)((float)(v14[0] * 0.0) - (float)(v14[1] * v7)) + (float)(v14[2] * 0.0));
  v8 = v5 + (float)((float)((float)(v16 * 0.0) - (float)(v17 * v7)) + (float)(v18 * 0.0));
  v9 = v20;
  v10 = v21;
  v11 = v22;
  FIELD_F32(a1, 140) = v15;
  FIELD_F32(a1, 144) = v8;
  result = v6 + (float)((float)((float)(v9 * 0.0) - (float)(v10 * v7)) + (float)(v11 * 0.0));
  FIELD_F32(a1, 148) = result;
  return result;
}
