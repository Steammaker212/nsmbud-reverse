/* sub_6052FD50
 * address: 0x6052FD50   size: 1000   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6052FD50(int *a1, int a2, int a3, ...)
{
  char v3; // r12
  int v7; // r0
  int v8; // r0
  int v9; // r5
  int v10; // r6
  int v11; // r0
  int v12; // r0
  int *v13; // r4
  int v14; // r0
  int v15; // r7
  int *v16; // r6
  int (__fastcall *v17)(int, int, int); // r4
  int (__fastcall *v18)(int, int, int); // r4
  int (__fastcall *v19)(int, int, int); // r4
  int (__fastcall *v20)(int, int, int); // r4
  int v21; // t1
  int (__fastcall *v22)(int, int, int); // r4
  _DWORD var4[22]; // [sp+34h] [bp-4h] BYREF
  va_list va; // [sp+34h] [bp-4h]
  int v26; // [sp+8Ch] [bp+54h]
  va_list va1; // [sp+90h] [bp+58h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  var4[0] = va_arg(va1, _DWORD);
  va_arg(va1, _DWORD);
  va_arg(va1, _DWORD);
  va_arg(va1, _DWORD);
  va_arg(va1, _DWORD);
  va_arg(va1, _DWORD);
  va_arg(va1, _DWORD);
  va_arg(va1, _DWORD);
  va_arg(va1, _DWORD);
  va_arg(va1, _DWORD);
  va_arg(va1, _DWORD);
  va_arg(va1, _DWORD);
  va_arg(va1, _DWORD);
  va_arg(va1, _DWORD);
  va_arg(va1, _DWORD);
  va_arg(va1, _DWORD);
  va_arg(va1, _DWORD);
  va_arg(va1, _DWORD);
  va_arg(va1, _DWORD);
  va_arg(va1, _DWORD);
  va_arg(va1, _DWORD);
  va_arg(va1, _DWORD);
  v26 = va_arg(va1, _DWORD);
  if ( ((unsigned int)dword_60CAAA64 & ~(1616051580 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60CAAA64) )
  {
    dword_60CAA974[0] = (int)&sead__SafeStringBase__vtable;
    dword_60CAA978 = (int)"N_DelItemPos1_00";
    dword_60CAA97C = (int)&sead__SafeStringBase__vtable;
    dword_60CAA980 = (int)"N_DelItemPos2_00";
    dword_60CAA984 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA988 = (int)"N_DelItemPos3_00";
    dword_60CAA98C = (int)&sead__SafeStringBase__vtable;
    dword_60CAA990 = (int)"N_DelItemPos4_00";
    dword_60CAA994 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA998 = (int)"N_DelItemPos5_00";
    dword_60CAA99C = (int)&sead__SafeStringBase__vtable;
    dword_60CAA9A0 = (int)"N_DelItemPos1_00";
    dword_60CAA9A4 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA9A8 = (int)"N_DelItemPos2_01";
    dword_60CAA9AC = (int)&sead__SafeStringBase__vtable;
    dword_60CAA9B0 = (int)"N_DelItemPos3_01";
    dword_60CAA9B4 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA9B8 = (int)"N_DelItemPos4_01";
    dword_60CAA9BC = (int)&sead__SafeStringBase__vtable;
    dword_60CAA9C0 = (int)"N_DelItemPos5_01";
    dword_60CAA9C4 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA9C8 = (int)"N_DelItemPos1_00";
    dword_60CAA9CC = (int)&sead__SafeStringBase__vtable;
    dword_60CAA9D0 = (int)"N_DelItemPos2_01";
    dword_60CAA9D4 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA9D8 = (int)"N_DelItemPos3_02";
    dword_60CAA9DC = (int)&sead__SafeStringBase__vtable;
    dword_60CAA9E0 = (int)"N_DelItemPos4_02";
    dword_60CAA9E4 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA9E8 = (int)"N_DelItemPos5_02";
    dword_60CAA9EC = (int)&sead__SafeStringBase__vtable;
    dword_60CAA9F0 = (int)"N_DelItemPos1_00";
    dword_60CAA9F4 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA9F8 = (int)"N_DelItemPos2_01";
    dword_60CAA9FC = (int)&sead__SafeStringBase__vtable;
    dword_60CAAA00 = (int)"N_DelItemPos3_02";
    dword_60CAAA04 = (int)&sead__SafeStringBase__vtable;
    dword_60CAAA08 = (int)"N_DelItemPos4_03";
    dword_60CAAA0C = (int)&sead__SafeStringBase__vtable;
    dword_60CAAA10 = (int)"N_DelItemPos5_03";
    dword_60CAAA14 = (int)&sead__SafeStringBase__vtable;
    dword_60CAAA18 = (int)"N_DelItemPos1_00";
    dword_60CAAA1C = (int)&sead__SafeStringBase__vtable;
    dword_60CAAA20 = (int)"N_DelItemPos2_01";
    dword_60CAAA24 = (int)&sead__SafeStringBase__vtable;
    dword_60CAAA28 = (int)"N_DelItemPos3_02";
    dword_60CAAA2C = (int)&sead__SafeStringBase__vtable;
    dword_60CAAA30 = (int)"N_DelItemPos4_03";
    dword_60CAAA34 = (int)&sead__SafeStringBase__vtable;
    dword_60CAAA38 = (int)"N_DelItemPos5_04";
    dword_60CAAA3C = (int)&sead__SafeStringBase__vtable;
    dword_60CAAA40 = (int)"N_ItemNumPos_00";
    dword_60CAAA44 = (int)&sead__SafeStringBase__vtable;
    dword_60CAAA48 = (int)"N_ItemNumPos_00";
    dword_60CAAA4C = (int)&sead__SafeStringBase__vtable;
    dword_60CAAA50 = (int)"N_ItemNumPos_00";
    dword_60CAAA54 = (int)&sead__SafeStringBase__vtable;
    dword_60CAAA58 = (int)"N_ItemNumPos_00";
    dword_60CAAA5C = (int)&sead__SafeStringBase__vtable;
    dword_60CAAA60 = (int)"N_ItemNumPos_00";
    sub_60000288();
    _cxa_guard_release(dword_60CAAA64);
  }
  v7 = sub_608DE1A4(0xB0u);
  v8 = sub_6085852C(v7, a3);
  v9 = 0;
  *a1 = v8;
  FIELD_U32(v8, 24) = 0;
  FIELD_U32(v8, 28) = 0;
  FIELD_U32(v8, 32) = 0;
  FIELD_U8(v8, 64) |= 0x10u;
  v10 = FIELD_U32(dword_60CCF464, 36);
  do
  {
    v11 = sub_608DE1A4(0xD0u);
    v12 = sub_6085A1FC(v11, var4[v9], v10);
    v13 = &a1[v9];
    v13[1] = v12;
    FIELD_U8(v12, 64) &= ~1u;
    v14 = v13[1];
    FIELD_U32(v14, 24) = 0;
    FIELD_U32(v14, 28) = 0;
    FIELD_U32(v14, 32) = 0;
    FIELD_U8(v14, 64) |= 0x10u;
    sub_608589FC(*a1, v13[1]);
    v15 = sub_608DE1A4(0xD0u);
    sub_6085A1FC(v15, var4[v9 + 11], v10);
    FIELD_U8(v15, 64) |= 1u;
    sub_608589FC(v13[1], v15);
    ++v9;
  }
  while ( v9 != 11 );
  v16 = &dword_60CAA974[10 * v26];
  v17 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 48);
  (*(void (__fastcall **)(int *))(*v16 + 12))(v16);
  a1[12] = v17(a2, v16[1], 1);
  v18 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 48);
  (*(void (__fastcall **)(int *))(v16[2] + 12))(v16 + 2);
  a1[13] = v18(a2, v16[3], 1);
  v19 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 48);
  (*(void (__fastcall **)(int *))(v16[4] + 12))(v16 + 4);
  a1[14] = v19(a2, v16[5], 1);
  v20 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 48);
  (*(void (__fastcall **)(int *))(v16[6] + 12))(v16 + 6);
  a1[15] = v20(a2, v16[7], 1);
  v21 = v16[8];
  v16 += 8;
  v22 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 48);
  (*(void (__fastcall **)(int *))(v21 + 12))(v16);
  a1[16] = v22(a2, v16[1], 1);
  *(_BYTE *)(*a1 + 64) &= ~1u;
  return a1;
}
