/* sub_604E3808
 * address: 0x604E3808   size: 1192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604E3808(int a1)
{
  _DWORD *v2; // r5
  char v3; // r12
  char v4; // r12
  char v5; // r12
  int v6; // r5
  int v8[8]; // [sp+8h] [bp-20h] BYREF

  v2 = (_DWORD *)(a1 + 40);
  sub_604734E4((_DWORD *)(a1 + 40), 0);
  sub_60475C8C((int)v2);
  v8[0] = (int)&sead__SafeStringBase__vtable;
  v8[1] = (int)"GameOver.bflyt";
  message_ref(v2, v8, 0, 0, 0);
  if ( ((unsigned int)dword_60CA5950 & ~(1615739020 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60CA5950) )
  {
    dword_60CA5964 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5968 = dword_60CA56A8;
    dword_60CA596C = (int)&sead__SafeStringBase__vtable;
    dword_60CA5970 = dword_60CA56B0;
    dword_60CA5974 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5978 = dword_60CA56B8;
    dword_60CA597C = (int)&sead__SafeStringBase__vtable;
    dword_60CA5980 = dword_60CA56C0;
    dword_60CA5984 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5988 = dword_60CA56C8;
    sub_60000288();
    _cxa_guard_release(dword_60CA5950);
  }
  v8[0] = 5;
  sub_60476030((int)v2, &dword_60CA5964, v8);
  if ( ((unsigned int)&dword_60CA5950[1] & ~(1615739240 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CA5950[1]) )
  {
    dword_60CA58CC = (int)&sead__SafeStringBase__vtable;
    dword_60CA58D0 = (int)"N_GameOver_00";
    dword_60CA58D4 = (int)&sead__SafeStringBase__vtable;
    dword_60CA58D8 = (int)"N_4PPos_00";
    dword_60CA58DC = (int)&sead__SafeStringBase__vtable;
    dword_60CA58E0 = (int)"N_4PPos_01";
    dword_60CA58E4 = (int)&sead__SafeStringBase__vtable;
    dword_60CA58E8 = (int)"N_4PPos_02";
    dword_60CA58EC = (int)&sead__SafeStringBase__vtable;
    dword_60CA58F0 = (int)"N_4PPos_03";
    dword_60CA58F4 = (int)&sead__SafeStringBase__vtable;
    dword_60CA58F8 = (int)"N_4P_00";
    dword_60CA58FC = (int)&sead__SafeStringBase__vtable;
    dword_60CA5900 = (int)"N_3P_00";
    dword_60CA5904 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5908 = (int)"N_3PPos_00";
    dword_60CA590C = (int)&sead__SafeStringBase__vtable;
    dword_60CA5910 = (int)"N_3PPos_01";
    dword_60CA5914 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5918 = (int)"N_3PPos_02";
    dword_60CA591C = (int)&sead__SafeStringBase__vtable;
    dword_60CA5920 = (int)"N_2P_00";
    dword_60CA5924 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5928 = (int)"N_2PPos_00";
    dword_60CA592C = (int)&sead__SafeStringBase__vtable;
    dword_60CA5930 = (int)"N_2PPos_01";
    dword_60CA5934 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5938 = (int)"N_1P_00";
    dword_60CA593C = (int)&sead__SafeStringBase__vtable;
    dword_60CA5940 = (int)"N_1PPos_00";
    dword_60CA5944 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5948 = (int)"N_ContinuePos_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA5950[1]);
  }
  v8[0] = 16;
  sub_6047518C((int)v2, a1 + 18408, &dword_60CA58CC, v8);
  if ( ((unsigned int)&dword_60CA5950[2] & ~(1615739640 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA5950[2]) )
  {
    dword_60CA595C = (int)&sead__SafeStringBase__vtable;
    dword_60CA5960 = (int)"T_GameOver_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA5950[2]);
  }
  v8[0] = 1;
  sub_60475334((int)v2, a1 + 18472, &dword_60CA595C, v8);
  v6 = dword_60C99DEC;
  sub_604BA7C0(a1 + 3608, dword_60C99DEC + 36);
  if ( !FIELD_U8(v6, 36) || FIELD_S32(v6, 40) >= 1 )
    FIELD_U8(a1, 7305) = 0;
  sub_604BA7C0(a1 + 7308, v6 + 108);
  if ( !FIELD_U8(v6, 108) || FIELD_S32(v6, 112) >= 1 )
    FIELD_U8(a1, 11005) = 0;
  sub_604BA7C0(a1 + 11008, v6 + 180);
  if ( !FIELD_U8(v6, 180) || FIELD_S32(v6, 184) >= 1 )
    FIELD_U8(a1, 14705) = 0;
  sub_604BA7C0(a1 + 14708, v6 + 252);
  if ( !FIELD_U8(v6, 252) || FIELD_S32(v6, 256) >= 1 )
    FIELD_U8(a1, 18405) = 0;
  sub_6045BF58(a1 + 18492, 0);
  sub_6045BF58(a1 + 18896, 1);
  sub_6045BF58(a1 + 19300, 2);
  sub_6045BF58(a1 + 19704, 3);
  return sub_6045BF58(a1 + 20108, 4);
}
