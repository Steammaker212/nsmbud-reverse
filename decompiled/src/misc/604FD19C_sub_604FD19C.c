/* sub_604FD19C
 * address: 0x604FD19C   size: 1616   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604FD19C(int a1)
{
  char v1; // r12
  char v3; // r12
  char v4; // r12
  char v5; // r12
  int v6; // r6
  int *v7; // r7
  char v8; // r12
  char v9; // r12
  char v10; // r12
  int v12[10]; // [sp+8h] [bp-28h] BYREF

  if ( ((unsigned int)&dword_60CA72A0[2] & ~(1615843772 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA72A0[2]) )
  {
    dword_60CA72C4 = (int)&sead__SafeStringBase__vtable;
    dword_60CA72C8 = (int)"N_MiiSelect_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA72A0[2]);
  }
  v12[0] = 1;
  sub_6047518C(a1 + 31900, a1 + 37592, &dword_60CA72C4, v12);
  if ( ((unsigned int)&dword_60CA72A0[3] & ~(1615843928 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CA72A0[3]) )
  {
    dword_60CA71F8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA71FC = (int)"Pa_MiiBtn_00";
    dword_60CA7200 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7204 = (int)"Pa_MiiBtn_01";
    dword_60CA7208 = (int)&sead__SafeStringBase__vtable;
    dword_60CA720C = (int)"Pa_MiiBtn_02";
    dword_60CA7210 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7214 = (int)"Pa_MiiBtn_03";
    dword_60CA7218 = (int)&sead__SafeStringBase__vtable;
    dword_60CA721C = (int)"Pa_MiiBtn_04";
    dword_60CA7220 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7224 = (int)"Pa_MiiBtn_05";
    dword_60CA7228 = (int)&sead__SafeStringBase__vtable;
    dword_60CA722C = (int)"Pa_MiiBtn_06";
    dword_60CA7230 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7234 = (int)"Pa_MiiBtn_07";
    dword_60CA7238 = (int)&sead__SafeStringBase__vtable;
    dword_60CA723C = (int)"Pa_MiiBtn_08";
    dword_60CA7240 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7244 = (int)"Pa_MiiBtn_09";
    dword_60CA7248 = (int)&sead__SafeStringBase__vtable;
    dword_60CA724C = (int)"Pa_MiiBtn_10";
    dword_60CA7250 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7254 = (int)"Pa_MiiBtn_11";
    dword_60CA7258 = (int)&sead__SafeStringBase__vtable;
    dword_60CA725C = (int)"Pa_MiiBtn_12";
    dword_60CA7260 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7264 = (int)"Pa_MiiBtn_13";
    dword_60CA7268 = (int)&sead__SafeStringBase__vtable;
    dword_60CA726C = (int)"Pa_MiiBtn_14";
    dword_60CA7270 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7274 = (int)"Pa_MiiBtn_15";
    dword_60CA7278 = (int)&sead__SafeStringBase__vtable;
    dword_60CA727C = (int)"Pa_MiiBtn_16";
    dword_60CA7280 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7284 = (int)"Pa_MiiBtn_17";
    dword_60CA7288 = (int)&sead__SafeStringBase__vtable;
    dword_60CA728C = (int)"Pa_ArrowBtnL_00";
    dword_60CA7290 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7294 = (int)"Pa_ArrowBtnR_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA72A0[3]);
  }
  v12[0] = 20;
  sub_604756E0(a1 + 31900, a1 + 37596, &dword_60CA71F8, v12);
  if ( ((unsigned int)&dword_60CA72A0[4] & ~(1615844392 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CA72A0[4]) )
  {
    dword_60CA72F4 = (int)&sead__SafeStringBase__vtable;
    dword_60CA72F8 = (int)"P_ArrowL_00";
    dword_60CA72FC = (int)&sead__SafeStringBase__vtable;
    dword_60CA7300 = (int)"P_ArrowR_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA72A0[4]);
  }
  v12[0] = 2;
  __Player__applyPowerUpTransform(a1 + 31900, a1 + 37676, (int)&dword_60CA72F4, v12);
  if ( ((unsigned int)&dword_60CA72A0[5] & ~(1615844560 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA72A0[5]) )
  {
    dword_60CA72CC = (int)&sead__SafeStringBase__vtable;
    dword_60CA72D0 = (int)"P_MiiIcon_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA72A0[5]);
  }
  v6 = 0;
  v7 = &dword_60CA71F8;
  do
  {
    v12[0] = 1;
    sub_60475618(a1 + 31900, a1 + 37684 + v6, v7, (int)&dword_60CA72CC, v12);
    v6 += 4;
    v7 += 2;
  }
  while ( v6 != 72 );
  if ( ((unsigned int)&dword_60CA72A0[6] & ~(1615844756 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60CA72A0[6]) )
  {
    dword_60CA72D4 = (int)&sead__SafeStringBase__vtable;
    dword_60CA72D8 = (int)"T_Page_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA72A0[6]);
  }
  v12[0] = 1;
  sub_60475334(a1 + 31900, a1 + 37756, &dword_60CA72D4, v12);
  if ( ((unsigned int)&dword_60CA72A0[7] & ~(1615844908 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60CA72A0[7]) )
  {
    dword_60CA7304 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7308 = (int)"G_ArrowL_00";
    dword_60CA730C = (int)&sead__SafeStringBase__vtable;
    dword_60CA7310 = (int)"G_ArrowR_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA72A0[7]);
  }
  FIELD_U32(a1, 39788) = -1;
  FIELD_U32(a1, 39792) = -1;
  FIELD_U32(a1, 39788) = sub_604746E4(a1 + 31900, &dword_60CA70A0, &dword_60CA7304);
  FIELD_U32(a1, 39792) = sub_604746E4(a1 + 31900, &dword_60CA70A0, &dword_60CA730C);
  sub_605028F0(a1 + 35508, &unk_60B035A4, 1);
  sub_605028F0(a1 + 35508, &unk_60B035A8, 1);
  if ( ((unsigned int)&dword_60CA72A0[8] & ~(1615845168 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60CA72A0[8]) )
  {
    dword_60CA72DC = (int)&sead__SafeStringBase__vtable;
    dword_60CA72E0 = (int)"B_Arrow_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA72A0[8]);
  }
  v12[0] = 1;
  sub_604755C4(a1 + 31900, a1 + 37760, &dword_60CA7288, (int)&dword_60CA72DC, v12);
  v12[0] = 1;
  return sub_604755C4(a1 + 31900, a1 + 37764, &dword_60CA7290, (int)&dword_60CA72DC, v12);
}
