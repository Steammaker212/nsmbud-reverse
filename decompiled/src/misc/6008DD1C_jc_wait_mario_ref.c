/* jc_wait_mario_ref
 * address: 0x6008DD1C   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n128 __fastcall jc_wait_mario_ref(int a1)
{
  int v2; // r0
  int v3; // r0
  int (__fastcall *v4)(int, int (***)()); // r2
  int v5; // r0
  __n128 result; // q0
  float v7; // s4
  int (**v8)(); // [sp+0h] [bp-48h] BYREF
  const char *v9; // [sp+4h] [bp-44h]
  float v10; // [sp+Ch] [bp-3Ch]
  float v11; // [sp+1Ch] [bp-2Ch]
  float v12; // [sp+2Ch] [bp-1Ch]

  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = 0;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 104) = 1034147594;
  FIELD_U32(a1, 100) = 1028443341;
  FIELD_U32(a1, 9356) = dword_60C82340;
  v2 = FIELD_U32(a1, 6304);
  v8 = &sead__SafeStringBase__vtable;
  v9 = "jc_wait_mario";
  sub_60421AE4(v2, &v8, 1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 696))(a1);
  v3 = **(_DWORD **)(a1 + 6304);
  v4 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v3 + 84);
  v8 = &sead__SafeStringBase__vtable;
  v9 = "skl_root";
  v5 = v4(v3, &v8);
  (*(void (__fastcall **)(_DWORD, int, int (***)()))(***(_DWORD ***)(a1 + 6304) + 108))(
    **(_DWORD **)(a1 + 6304),
    v5,
    &v8);
  result.n128_f32[0] = FIELD_F32(a1, 108) + (float)(FIELD_F32(a1, 108) - v10);
  result.n128_f32[2] = (float)(FIELD_F32(a1, 112) - v11) + FIELD_F32(a1, 112);
  v7 = (float)(FIELD_F32(a1, 116) - v12) + FIELD_F32(a1, 116);
  FIELD_U32(a1, 108) = result.n128_u32[0];
  FIELD_U32(a1, 112) = result.n128_u32[2];
  FIELD_F32(a1, 116) = v7;
  FIELD_U32(a1, 15252) = 0;
  return result;
}
