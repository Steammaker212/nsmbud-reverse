/* sub_60538018
 * address: 0x60538018   size: 2636   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60538018(int a1)
{
  char v1; // r12
  _DWORD *v3; // r10
  char v4; // r12
  char v5; // r12
  char v6; // r12
  char v7; // r12
  char v8; // r12
  char v9; // r12
  unsigned int v10; // r1
  int v11; // r0
  int result; // r0
  _BYTE *v13; // r11
  int v14; // t1
  StateMgr *v15; // r6
  float v16; // s0
  StateBase *CurrentState; // r0
  int v18; // r4
  float v19; // s0
  int v20; // [sp+8h] [bp-30h] BYREF
  int v21[11]; // [sp+Ch] [bp-2Ch] BYREF

  if ( ((unsigned int)&dword_60CAB270[2] & ~(1616085048 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CAB270[2]) )
  {
    dword_60CAB308 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB30C = (int)"Pa_CancelDelete_00";
    dword_60CAB310 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB314 = (int)"Pa_CancelCopy_00";
    dword_60CAB318 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB31C = (int)"Pa_CancelWhich_00";
    dword_60CAB320 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB324 = (int)"Pa_Return_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CAB270[2]);
  }
  if ( ((unsigned int)&dword_60CAB270[3] & ~(1616085220 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CAB270[3]) )
  {
    dword_60CAB2A0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB2A4 = (int)"N_Btn_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CAB270[3]);
  }
  v3 = (_DWORD *)(a1 + 12092);
  v21[0] = 1;
  sub_6047566C(a1 + 12092, a1 + 52516, &dword_60CAB308, &dword_60CAB2A0, v21);
  v21[0] = 1;
  sub_6047566C(a1 + 12092, a1 + 52520, &dword_60CAB310, &dword_60CAB2A0, v21);
  v21[0] = 1;
  sub_6047566C(a1 + 12092, a1 + 52524, &dword_60CAB318, &dword_60CAB2A0, v21);
  v21[0] = 1;
  sub_6047566C(a1 + 12092, a1 + 52528, &dword_60CAB320, &dword_60CAB2A0, v21);
  if ( ((unsigned int)&dword_60CAB270[4] & ~(1616085492 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CAB270[4]) )
  {
    dword_60CAB380 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB384 = (int)"N_All_00";
    dword_60CAB388 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB38C = (int)"N_Delete_00";
    dword_60CAB390 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB394 = (int)"N_Copy_00";
    dword_60CAB398 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB39C = (int)"N_ModeBtn_00";
    dword_60CAB3A0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB3A4 = (int)"N_DeleteSelect_00";
    dword_60CAB3A8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB3AC = (int)"N_CopySelect_00";
    dword_60CAB3B0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB3B4 = (int)"N_CopyWhich_00";
    dword_60CAB3B8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB3BC = (int)"N_Return_00";
    dword_60CAB3C0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB3C4 = (int)"N_Window_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CAB270[4]);
  }
  v21[0] = 9;
  sub_6047518C(a1 + 12092, a1 + 52548, &dword_60CAB380, v21);
  if ( ((unsigned int)&dword_60CAB270[5] & ~(1616085788 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CAB270[5]) )
  {
    dword_60CAB2A8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB2AC = (int)"P_Base_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CAB270[5]);
  }
  v21[0] = 1;
  sub_60475618(a1 + 12092, a1 + 52584, &dword_60CAB308, (int)&dword_60CAB2A8, v21);
  v21[0] = 1;
  sub_60475618(a1 + 12092, a1 + 52588, &dword_60CAB310, (int)&dword_60CAB2A8, v21);
  v21[0] = 1;
  sub_60475618(a1 + 12092, a1 + 52592, &dword_60CAB318, (int)&dword_60CAB2A8, v21);
  v21[0] = 1;
  sub_60475618(a1 + 12092, a1 + 52596, &dword_60CAB320, (int)&dword_60CAB2A8, v21);
  v21[0] = 4;
  sub_604756E0(a1 + 12092, a1 + 52600, &dword_60CAB308, v21);
  if ( ((unsigned int)&dword_60CAB270[6] & ~(1616086084 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60CAB270[6]) )
  {
    dword_60CAB2F0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB2F4 = (int)"Pa_DLBtn_00";
    dword_60CAB2F8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB2FC = (int)"Pa_MovieBtn_00";
    dword_60CAB300 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB304 = (int)"Pa_HelpBtn_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CAB270[6]);
  }
  v21[0] = 3;
  sub_604756E0(a1 + 12092, a1 + 52616, &dword_60CAB2F0, v21);
  if ( ((unsigned int)&dword_60CAB270[7] & ~(1616086276 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60CAB270[7]) )
  {
    dword_60CAB2B0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB2B4 = (int)"T_Btn_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CAB270[7]);
  }
  v21[0] = (int)&sead__SafeStringBase__vtable;
  v21[1] = (int)"Pa_DLBtn_00";
  v20 = 1;
  sub_60475570(a1 + 12092, a1 + 52628, v21, (int)&dword_60CAB2B0, &v20);
  if ( ((unsigned int)&dword_60CAB270[8] & ~(1616086464 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60CAB270[8]) )
  {
    dword_60CAB350 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB354 = (int)"Pa_SaveData_00";
    dword_60CAB358 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB35C = (int)"Pa_SaveData_01";
    dword_60CAB360 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB364 = (int)"Pa_SaveData_02";
    dword_60CAB368 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB36C = (int)"Pa_DLBtn_00";
    dword_60CAB370 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB374 = (int)"Pa_MovieBtn_00";
    dword_60CAB378 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB37C = (int)"Pa_HelpBtn_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CAB270[8]);
  }
  if ( ((unsigned int)&dword_60CAB270[9] & ~(1616086668 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60CAB270[9]) )
  {
    dword_60CAB2B8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB2BC = (int)"B_Btn_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CAB270[9]);
  }
  v21[0] = 1;
  sub_604755C4(a1 + 12092, a1 + 52632, &dword_60CAB350, (int)&dword_60CAB2B8, v21);
  v21[0] = 1;
  sub_604755C4(a1 + 12092, a1 + 52636, &dword_60CAB358, (int)&dword_60CAB2B8, v21);
  v21[0] = 1;
  sub_604755C4(a1 + 12092, a1 + 52640, &dword_60CAB360, (int)&dword_60CAB2B8, v21);
  v21[0] = 1;
  sub_604755C4(a1 + 12092, a1 + 52644, &dword_60CAB368, (int)&dword_60CAB2B8, v21);
  v21[0] = 1;
  sub_604755C4(a1 + 12092, a1 + 52648, &dword_60CAB370, (int)&dword_60CAB2B8, v21);
  v21[0] = 1;
  sub_604755C4(a1 + 12092, a1 + 52652, &dword_60CAB378, (int)&dword_60CAB2B8, v21);
  v21[0] = 1;
  sub_604755C4(a1 + 12092, a1 + 52656, &dword_60CAB308, (int)&dword_60CAB2B8, v21);
  v21[0] = 1;
  sub_604755C4(a1 + 12092, a1 + 52660, &dword_60CAB310, (int)&dword_60CAB2B8, v21);
  v21[0] = 1;
  sub_604755C4(a1 + 12092, a1 + 52664, &dword_60CAB318, (int)&dword_60CAB2B8, v21);
  v21[0] = 1;
  sub_604755C4(a1 + 12092, a1 + 52668, &dword_60CAB320, (int)&dword_60CAB2B8, v21);
  if ( ((unsigned int)&dword_60CAB270[10] & ~(1616087128 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60CAB270[10]) )
  {
    dword_60CAB2C0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB2C4 = (int)"G_StoryIndex_00";
    dword_60CAB2C8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB2CC = (int)"G_WithMiiIndex_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CAB270[10]);
  }
  FIELD_U32(a1, 54696) = sub_604746E4(a1 + 12092, &dword_60CAADB4, &dword_60CAB2C0);
  FIELD_U32(a1, 54700) = sub_604746E4(a1 + 12092, &dword_60CAADB4, &dword_60CAB2C8);
  v10 = *(unsigned __int8 *)(FIELD_U32(dword_60CC6E04, 40) + 7);
  if ( v10 > 2 )
    v10 = 0;
  v11 = dword_60B03A3C[v10];
  FIELD_U32(a1, 83576) = v11;
  FIELD_U32(a1, 83572) = v11;
  sub_60541978(a1 + 17780);
  result = dword_60CC6D8C;
  FIELD_U8(a1, 83634) = FIELD_U8(dword_60CC6D8C, 16);
  if ( !FIELD_U8(dword_60C99DEC, 524) )
  {
    result = FIELD_U8(result, 17);
    if ( !result )
    {
      v14 = FIELD_U8(a1, 83627);
      v13 = (_BYTE *)(a1 + 83627);
      v15 = (StateMgr *)(v13 - 83591);
      if ( !v14 )
      {
        do
          StateMgr__execute(v15);
        while ( !*v13 );
      }
      v16 = sub_604745C0((int)v3, 0);
      sub_6047455C((int)v3, 0, v16);
      sub_60473B58(v3, 5u, 0);
      StateMgr__execute(v15);
      CurrentState = StateMgr__getCurrentState(v15);
      v18 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      result = (*(int (**)(void))(dword_60CAAE44 + 8))();
      if ( v18 == result )
      {
        StateMgr__execute(v15);
        v19 = sub_604745C0((int)v3, 1u);
        sub_6047455C((int)v3, 1u, v19);
        return sub_60473B58(v3, 5u, 0);
      }
    }
  }
  return result;
}
