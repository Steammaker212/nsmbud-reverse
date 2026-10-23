/* sub_6052D264
 * address: 0x6052D264   size: 1444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6052D264(int a1)
{
  float32x2_t v1; // d8
  int v3; // r6
  int v4; // r8
  float32x2_t v5; // d0
  int v6; // r7
  int v7; // r1
  int v8; // r2
  int v9; // r3
  float v10; // s20
  int v11; // r1
  int v12; // r3
  char v13; // r12
  int v14; // r0
  int v15; // r2
  _DWORD *v16; // r1
  int v17; // r2
  _DWORD *v18; // r1
  int v19; // r2
  _DWORD *v20; // r1
  int v21; // r1
  _DWORD *v22; // r0
  unsigned int v23; // r0
  int v24; // r0
  int result; // r0
  int v26; // [sp+4h] [bp-3Ch]
  int (**v27)(); // [sp+8h] [bp-38h] BYREF
  const char *v28; // [sp+Ch] [bp-34h]

  v3 = dword_60CC6E04;
  v4 = dword_60C9A1E0;
  sub_60407900((_DWORD *)dword_60C9A1E0);
  sub_6052D86C(a1, 0);
  sub_6052D86C(a1, 1);
  sub_6052D86C(a1, 2);
  sub_6052D86C(a1, 3);
  if ( (unsigned __int8)(FIELD_U8(v4, 688) + FIELD_U8(v4, 652) + FIELD_U8(v4, 616) + FIELD_U8(v4, 580)) == 1 )
    FIELD_U8(a1, 57) = 1;
  v6 = *(_DWORD *)(FIELD_U32(v3, 40) + 4 * FIELD_U32(v4, 532) + 19584);
  v7 = FIELD_U32(a1, 3816);
  v1.n64_f32[0] = (float)v6 / 100.0;
  if ( v6 )
  {
    v5.n64_u32[0] = 1176256502;
    v1.n64_f32[0] = vmin_f32(v1, v5).n64_f32[0];
    v27 = &sead__SafeStringBase__vtable;
    v28 = "ResultFree_BestTime_00";
    v8 = (int)(float)(v1.n64_f32[0] * 100.0);
    if ( (float)v8 != (float)(v1.n64_f32[0] * 100.0) )
      --v8;
    if ( (float)(v1.n64_f32[0] * 100.0) >= 0.0 )
      v8 = (int)(float)(v1.n64_f32[0] * 100.0);
    v9 = (int)v1.n64_f32[0];
    if ( (float)(int)v1.n64_f32[0] != v1.n64_f32[0] )
      v9 = (int)v1.n64_f32[0] - 1;
    if ( v1.n64_f32[0] >= 0.0 )
      v9 = (int)v1.n64_f32[0];
    sub_6047E0EC(&v27, v7, 2, v9, v8 % 100);
  }
  else
  {
    v27 = &sead__SafeStringBase__vtable;
    v28 = "ResultFree_BestTime_01";
    sub_6047E0EC(&v27, v7, 0);
  }
  v10 = FIELD_F32(v4, 696);
  if ( v10 > 10000.0 )
  {
    v10 = 10000.0;
    FIELD_U32(v4, 696) = 1176256502;
  }
  v11 = (int)(float)(v10 * 100.0);
  if ( (float)v11 != (float)(v10 * 100.0) )
    --v11;
  if ( (float)(v10 * 100.0) >= 0.0 )
    v11 = (int)(float)(v10 * 100.0);
  v12 = (int)v10;
  if ( (float)(int)v10 != v10 )
    v12 = (int)v10 - 1;
  if ( v10 >= 0.0 )
    v12 = (int)v10;
  sub_6047DEC8((_DWORD *)(a1 + 72), FIELD_U32(a1, 3820), 2, v12, v11 % 100, v26, v27, v28);
  sub_6047DEC8((_DWORD *)(a1 + 72), FIELD_U32(a1, 3808), 2, 0, 0);
  sub_6047DEC8((_DWORD *)(a1 + 72), FIELD_U32(a1, 3812), 2, 0, 0);
  G_FreeDigit_00_ref(a1, 0);
  if ( v10 >= v1.n64_f32[0] && v6 )
  {
    if ( v10 >= v1.n64_f32[0] )
      FIELD_U8(a1, 58) = 0;
  }
  else
  {
    FIELD_U8(a1, 58) = 1;
  }
  v14 = dword_60C9A1E0;
  if ( FIELD_U8(dword_60C9A1E0, 580) )
  {
    v15 = FIELD_U32(dword_60C9A1E0, 576);
    v16 = *(_DWORD **)(a1 + 3740);
    if ( v15 == 6 || v16[2] != v15 )
    {
      v16[2] = v15;
      v16[1] |= 1u;
      v16 = *(_DWORD **)(a1 + 3740);
    }
    if ( v16[3] )
    {
      v16[3] = 0;
      v16[1] |= 1u;
    }
  }
  if ( FIELD_U8(v14, 616) )
  {
    v17 = FIELD_U32(v14, 612);
    v18 = *(_DWORD **)(a1 + 3744);
    if ( v17 == 6 || v18[2] != v17 )
    {
      v18[2] = v17;
      v18[1] |= 1u;
      v18 = *(_DWORD **)(a1 + 3744);
    }
    if ( v18[3] != 1 )
    {
      v18[3] = 1;
      v18[1] |= 1u;
    }
  }
  if ( FIELD_U8(v14, 652) )
  {
    v19 = FIELD_U32(v14, 648);
    v20 = *(_DWORD **)(a1 + 3748);
    if ( v19 == 6 || v20[2] != v19 )
    {
      v20[2] = v19;
      v20[1] |= 1u;
      v20 = *(_DWORD **)(a1 + 3748);
    }
    if ( v20[3] != 2 )
    {
      v20[3] = 2;
      v20[1] |= 1u;
    }
  }
  if ( FIELD_U8(v14, 688) )
  {
    v21 = FIELD_U32(v14, 684);
    v22 = *(_DWORD **)(a1 + 3752);
    if ( v21 == 6 || v22[2] != v21 )
    {
      v22[2] = v21;
      v22[1] |= 1u;
      v22 = *(_DWORD **)(a1 + 3752);
    }
    if ( v22[3] != 3 )
    {
      v22[3] = 3;
      v22[1] |= 1u;
    }
  }
  if ( ((unsigned int)&dword_60CAA6A0 & ~(1616041640 << v13) & 1) == 0 && _cxa_guard_acquire(&dword_60CAA6A0) )
  {
    dword_60CAA750[0] = (int)&sead__SafeStringBase__vtable;
    dword_60CAA754 = (int)"ResultFree_Recommend_00";
    dword_60CAA758 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA75C = (int)"ResultFree_Musasabi_00";
    dword_60CAA760 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA764 = (int)"ResultFree_Athletic_00";
    dword_60CAA768 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA76C = (int)"ResultFree_Yosshi_00";
    dword_60CAA770 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA774 = (int)"ResultFree_Penguin_00";
    dword_60CAA778 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA77C = (int)"ResultFree_Hard_00";
    dword_60CAA780 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA784 = (int)"ResultFree_Propller_00";
    dword_60CAA788 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA78C = (int)"ResultFree_Random_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CAA6A0);
  }
  v23 = FIELD_U32(dword_60C9A1E0, 532);
  if ( v23 >= 8 )
    v23 = 0;
  sub_6047E0EC(&dword_60CAA750[2 * v23], FIELD_U32(a1, 3756), 0);
  sub_60473DE4((_DWORD *)(a1 + 72), 0, &dword_60CAA6C8, 0);
  v24 = sub_6047482C(a1 + 72, 0);
  (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 104))(v24);
  sub_6052DB30(a1);
  FIELD_U32(a1, 52) = 0;
  result = FIELD_U8(a1, 57);
  if ( !FIELD_U8(a1, 57) )
    return sub_6040776C(v4);
  return result;
}
