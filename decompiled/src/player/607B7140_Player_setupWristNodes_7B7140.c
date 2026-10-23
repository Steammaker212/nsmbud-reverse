/* Player_setupWristNodes_7B7140
 * address: 0x607B7140   size: 604   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Player_setupWristNodes_7B7140(int a1, float *a2)
{
  float32x2_t v2; // d8
  _DWORD *v5; // r7
  _BOOL4 v6; // r1
  int result; // r0
  float v8; // s16
  float v9; // s22
  float v10; // s20
  float v11; // s22
  float32x2_t v12; // d2
  float *v13; // r0
  int v14; // r0
  bool v15; // zf
  float v16; // s6
  int (**v17)(); // [sp+0h] [bp-80h] BYREF
  const char *v18; // [sp+4h] [bp-7Ch]
  float v19; // [sp+8h] [bp-78h] BYREF
  float v20; // [sp+Ch] [bp-74h]
  float v21; // [sp+10h] [bp-70h]
  float v22; // [sp+14h] [bp-6Ch]
  float v23; // [sp+18h] [bp-68h]
  float v24; // [sp+1Ch] [bp-64h]
  float v25; // [sp+20h] [bp-60h]
  float v26; // [sp+24h] [bp-5Ch]
  float v27; // [sp+28h] [bp-58h]
  float v28; // [sp+2Ch] [bp-54h]
  float v29; // [sp+30h] [bp-50h]
  float v30; // [sp+34h] [bp-4Ch]

  v5 = (_DWORD *)(a1 + 11360);
  v6 = sub_607931A8(FIELD_U32(a1, 11360));
  result = 0;
  if ( !v6 )
    return result;
  v17 = &sead__SafeStringBase__vtable;
  v18 = "wrist_l1";
  (*(void (__fastcall **)(_DWORD, float *, int (***)()))(*(_DWORD *)*v5 + 144))(*v5, &v19, &v17);
  v17 = &sead__SafeStringBase__vtable;
  v18 = "wrist_r1";
  v22 = v22 + (float)((float)((float)(v20 * 0.0) + (float)(v19 * 5.0)) + (float)(v21 * 0.0));
  v8 = v22;
  v26 = v26 + (float)((float)((float)(v24 * 0.0) + (float)(v23 * 5.0)) + (float)(v25 * 0.0));
  v30 = v30 + (float)((float)((float)(v28 * 0.0) + (float)(v27 * 5.0)) + (float)(v29 * 0.0));
  v9 = v30;
  (*(void (__fastcall **)(_DWORD, float *, int (***)()))(*(_DWORD *)*v5 + 144))(*v5, &v19, &v17);
  v22 = v22 + (float)((float)((float)(v20 * 0.0) + (float)(v19 * 5.0)) + (float)(v21 * 0.0));
  v26 = v26 + (float)((float)((float)(v24 * 0.0) + (float)(v23 * 5.0)) + (float)(v25 * 0.0));
  v30 = v30 + (float)((float)((float)(v28 * 0.0) + (float)(v27 * 5.0)) + (float)(v29 * 0.0));
  v10 = v8 + v22;
  v11 = v9 + v30;
  v2.n64_f32[0] = flt_60B0CE28[(*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 156))(a1, FIELD_U32(a1, 1320))]
                * FIELD_F32(a1, 12156);
  if ( sub_6075EDF8(a1) )
  {
    v13 = (float *)&unk_60B0B020;
  }
  else
  {
    if ( FIELD_U32(a1, 1320) != 9 )
      goto LABEL_7;
    v13 = (float *)&unk_60B0B074;
  }
  v2.n64_f32[0] = v2.n64_f32[0] + *v13;
LABEL_7:
  if ( (FIELD_U8(a1, 1211) & 4) != 0 && !FIELD_U32(a1, 9976) )
  {
    v14 = FIELD_U32(a1, 1320);
    v15 = v14 == 0;
    if ( v14 )
      v15 = v14 == 3;
    if ( !v15 )
      v2.n64_f32[0] = v2.n64_f32[0] + -8.0;
  }
  v12.n64_u32[0] = 2.0;
  v16 = FIELD_F32(a1, 112);
  *a2 = v10 * 0.5;
  a2[1] = v16 + vmax_f32(v2, v12).n64_f32[0];
  a2[2] = v11 * 0.5;
  return 1;
}
