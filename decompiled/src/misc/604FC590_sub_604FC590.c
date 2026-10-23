/* sub_604FC590
 * address: 0x604FC590   size: 1824   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604FC590(int a1, unsigned int a2)
{
  _DWORD *v4; // r8
  char v5; // r12
  int v6; // r5
  int v7; // r2
  int v8; // r0
  int v9; // r1
  int v10; // r6
  char v11; // r12
  _DWORD *v12; // r7
  void (__fastcall *v13)(_DWORD *, int *, int *); // r3
  int result; // r0
  unsigned int v15; // [sp+8h] [bp-78h]
  int v16; // [sp+Ch] [bp-74h]
  int v17; // [sp+10h] [bp-70h] BYREF
  int v18; // [sp+14h] [bp-6Ch] BYREF
  const char *v19; // [sp+18h] [bp-68h]
  int (**v20)(); // [sp+1Ch] [bp-64h]
  const char *v21; // [sp+20h] [bp-60h]
  int (**v22)(); // [sp+24h] [bp-5Ch]
  const char *v23; // [sp+28h] [bp-58h]
  int (**v24)(); // [sp+2Ch] [bp-54h]
  const char *v25; // [sp+30h] [bp-50h]
  int (**v26)(); // [sp+34h] [bp-4Ch]
  const char *v27; // [sp+38h] [bp-48h]
  int (**v28)(); // [sp+3Ch] [bp-44h]
  const char *v29; // [sp+40h] [bp-40h]
  int (**v30)(); // [sp+44h] [bp-3Ch]
  const char *v31; // [sp+48h] [bp-38h]
  int (**v32)(); // [sp+4Ch] [bp-34h]
  const char *v33; // [sp+50h] [bp-30h]
  int (**v34)(); // [sp+54h] [bp-2Ch]
  const char *v35; // [sp+58h] [bp-28h]

  v4 = (_DWORD *)(a1 + 31900);
  sub_604734E4((_DWORD *)(a1 + 31900), 0);
  sub_60475C8C((int)v4);
  v18 = (int)&sead__SafeStringBase__vtable;
  v19 = "MiiSelectWindow.bflyt";
  message_ref(v4, &v18, a1 + 35548, 0, 0);
  if ( ((unsigned int)dword_60CA72A0 & ~(1615840804 << v5) & 1) == 0 && _cxa_guard_acquire(dword_60CA72A0) )
  {
    dword_60CA7320 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7324 = dword_60CA70A4;
    dword_60CA7328 = (int)&sead__SafeStringBase__vtable;
    dword_60CA732C = dword_60CA70AC;
    dword_60CA7330 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7334 = dword_60CA70B4;
    dword_60CA7338 = (int)&sead__SafeStringBase__vtable;
    dword_60CA733C = dword_60CA70BC;
    sub_60000288();
    _cxa_guard_release(dword_60CA72A0);
  }
  v6 = a1 + 35508;
  v18 = 4;
  sub_60476030((int)v4, &dword_60CA7320, &v18);
  v7 = 19;
  FIELD_U8(a1, 36562) = 1;
  if ( a2 <= 3 )
    v7 = dword_60AF2934[a2];
  v15 = a2;
  sub_60502210(a1 + 35508, &unk_60B035A0, v7);
  v18 = (int)&sead__SafeStringBase__vtable;
  v19 = "MiiSelectButton";
  sead__SafeStringBase__operator_assign(a1 + 36520, (int)&v18);
  sub_6050292C(a1 + 35508, 15);
  sub_605029C8(a1 + 35508, 15);
  sub_605029FC(v6, &unk_60B035AC, "SE_SYS_PAGE");
  sub_605028F0(v6, &unk_60B035AC, 1);
  v16 = a1;
  *(_DWORD *)(sub_608DE61C(a1 + 35560, 18) - FIELD_U32(a1, 35572) + 184) = "SE_SYS_PAGE";
  sub_605029FC(v6, &unk_60B035B0, "SE_SYS_PAGE");
  sub_605028F0(v6, &unk_60B035B0, 1);
  v8 = sub_608DE61C(a1 + 35560, 19);
  v9 = FIELD_U32(a1, 35572);
  v10 = 0;
  *(_DWORD *)(v8 - v9 + 184) = "SE_SYS_PAGE";
  sub_60502A24(v6, &unk_60B035B4, 9, 0);
  v18 = (int)&sead__SafeStringBase__vtable;
  v19 = "Pa_MiiBtn_09";
  v20 = &sead__SafeStringBase__vtable;
  v21 = "Pa_MiiBtn_10";
  v22 = &sead__SafeStringBase__vtable;
  v23 = "Pa_MiiBtn_11";
  v24 = &sead__SafeStringBase__vtable;
  v25 = "Pa_MiiBtn_12";
  v26 = &sead__SafeStringBase__vtable;
  v27 = "Pa_MiiBtn_13";
  v28 = &sead__SafeStringBase__vtable;
  v29 = "Pa_MiiBtn_14";
  v30 = &sead__SafeStringBase__vtable;
  v31 = "Pa_MiiBtn_15";
  v32 = &sead__SafeStringBase__vtable;
  v33 = "Pa_MiiBtn_16";
  v34 = &sead__SafeStringBase__vtable;
  v35 = "Pa_MiiBtn_17";
  if ( ((unsigned int)&dword_60CA72A0[1] & ~(1615841464 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60CA72A0[1]) )
  {
    dword_60CA72E4 = (int)&sead__SafeStringBase__vtable;
    dword_60CA72E8 = dword_60CA70C4;
    dword_60CA72EC = (int)&sead__SafeStringBase__vtable;
    dword_60CA72F0 = dword_60CA70CC;
    sub_60000288();
    _cxa_guard_release(&dword_60CA72A0[1]);
  }
  v12 = (_DWORD *)(v16 + 40);
  do
  {
    sub_604734E4(v12, 0);
    sub_60476388(v12, (int)v4, (int *)((char *)&v18 + v10));
    v13 = *(void (__fastcall **)(_DWORD *, int *, int *))(*v12 + 8);
    v17 = 2;
    v13(v12, &dword_60CA72E4, &v17);
    v10 += 8;
    v12 += 885;
  }
  while ( v10 != 72 );
  (*(void (__fastcall **)(_DWORD, signed __int64 (__fastcall *)(_QWORD *, int), _DWORD))(**(_DWORD **)(v16 + 35420) + 12))(
    FIELD_U32(v16, 35420),
    sub_609909D8,
    0);
  sub_6045BF58(v16 + 37768, 0);
  sub_609094C4(v16 + 37768, 240, 40, 5);
  sub_6045BF58(v16 + 38172, 1);
  sub_609094C4(v16 + 38172, 240, 40, 5);
  sub_6045BF58(v16 + 38576, 2);
  sub_609094C4(v16 + 38576, 240, 40, 5);
  sub_6045BF58(v16 + 38980, 3);
  sub_609094C4(v16 + 38980, 240, 40, 5);
  sub_6045BF58(v16 + 39384, 4);
  sub_609094C4(v16 + 39384, 240, 40, 5);
  FIELD_U32(v16, 40076) = v15;
  result = sub_608DE334(0x1B8u, 0, 4);
  if ( result )
  {
    *(_DWORD *)result = 24;
    FIELD_U32(result, 4) = 18;
    FIELD_U32(result, 16) = -1;
    FIELD_U32(result, 20) = -1;
    FIELD_U32(result, 8) = off_60BFDB94;
    result += 8;
    FIELD_U16(result, 16) = 0;
    FIELD_U16(result, 18) = 0;
    FIELD_U32(result, 36) = -1;
    FIELD_U32(result, 32) = -1;
    FIELD_U32(result, 24) = off_60BFDB94;
    FIELD_U16(result, 40) = 0;
    FIELD_U16(result, 42) = 0;
    FIELD_U32(result, 60) = -1;
    FIELD_U32(result, 56) = -1;
    FIELD_U32(result, 48) = off_60BFDB94;
    FIELD_U16(result, 64) = 0;
    FIELD_U16(result, 66) = 0;
    FIELD_U32(result, 84) = -1;
    FIELD_U32(result, 80) = -1;
    FIELD_U32(result, 72) = off_60BFDB94;
    FIELD_U16(result, 88) = 0;
    FIELD_U16(result, 90) = 0;
    FIELD_U32(result, 108) = -1;
    FIELD_U32(result, 104) = -1;
    FIELD_U32(result, 96) = off_60BFDB94;
    FIELD_U16(result, 112) = 0;
    FIELD_U16(result, 114) = 0;
    FIELD_U32(result, 132) = -1;
    FIELD_U32(result, 128) = -1;
    FIELD_U32(result, 120) = off_60BFDB94;
    FIELD_U16(result, 136) = 0;
    FIELD_U16(result, 138) = 0;
    FIELD_U32(result, 156) = -1;
    FIELD_U32(result, 152) = -1;
    FIELD_U32(result, 144) = off_60BFDB94;
    FIELD_U16(result, 160) = 0;
    FIELD_U16(result, 162) = 0;
    FIELD_U32(result, 180) = -1;
    FIELD_U32(result, 176) = -1;
    FIELD_U32(result, 168) = off_60BFDB94;
    FIELD_U16(result, 184) = 0;
    FIELD_U16(result, 186) = 0;
    FIELD_U32(result, 204) = -1;
    FIELD_U32(result, 200) = -1;
    FIELD_U32(result, 192) = off_60BFDB94;
    FIELD_U16(result, 208) = 0;
    FIELD_U16(result, 210) = 0;
    FIELD_U32(result, 228) = -1;
    FIELD_U32(result, 224) = -1;
    FIELD_U32(result, 216) = off_60BFDB94;
    FIELD_U16(result, 232) = 0;
    FIELD_U16(result, 234) = 0;
    FIELD_U32(result, 252) = -1;
    FIELD_U32(result, 248) = -1;
    FIELD_U32(result, 240) = off_60BFDB94;
    FIELD_U16(result, 256) = 0;
    FIELD_U16(result, 258) = 0;
    FIELD_U32(result, 276) = -1;
    FIELD_U32(result, 272) = -1;
    FIELD_U32(result, 264) = off_60BFDB94;
    FIELD_U16(result, 280) = 0;
    FIELD_U16(result, 282) = 0;
    FIELD_U32(result, 300) = -1;
    FIELD_U32(result, 296) = -1;
    FIELD_U32(result, 288) = off_60BFDB94;
    FIELD_U16(result, 304) = 0;
    FIELD_U16(result, 306) = 0;
    FIELD_U32(result, 324) = -1;
    FIELD_U32(result, 320) = -1;
    FIELD_U32(result, 312) = off_60BFDB94;
    FIELD_U16(result, 328) = 0;
    FIELD_U16(result, 330) = 0;
    FIELD_U32(result, 348) = -1;
    FIELD_U32(result, 344) = -1;
    FIELD_U32(result, 336) = off_60BFDB94;
    FIELD_U16(result, 352) = 0;
    FIELD_U16(result, 354) = 0;
    FIELD_U32(result, 372) = -1;
    FIELD_U32(result, 368) = -1;
    FIELD_U32(result, 360) = off_60BFDB94;
    FIELD_U16(result, 376) = 0;
    FIELD_U16(result, 378) = 0;
    FIELD_U32(result, 396) = -1;
    FIELD_U32(result, 392) = -1;
    FIELD_U32(result, 384) = off_60BFDB94;
    FIELD_U16(result, 400) = 0;
    FIELD_U16(result, 402) = 0;
    FIELD_U32(result, 416) = -1;
    FIELD_U32(result, 420) = -1;
    FIELD_U32(result, 408) = off_60BFDB94;
    FIELD_U16(result, 424) = 0;
    FIELD_U16(result, 426) = 0;
    FIELD_U32(v16, 40068) = 18;
    FIELD_U32(v16, 40072) = result;
  }
  return result;
}
