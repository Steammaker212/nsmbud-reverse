/* sub_6053E53C
 * address: 0x6053E53C   size: 2080   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6053E53C(int a1)
{
  char v1; // r12
  _DWORD *v3; // r10
  char v4; // r12
  char v5; // r12
  char v6; // r12
  char v7; // r12
  char v8; // r12
  unsigned int v9; // r0
  unsigned int v10; // r0
  int v11; // r0
  _BYTE *v12; // r4
  int v13; // t1
  StateMgr *v14; // r6
  float v15; // s0
  float v16; // s0
  int v18; // [sp+10h] [bp-48h] BYREF
  _DWORD v19[2]; // [sp+14h] [bp-44h] BYREF
  _DWORD v20[2]; // [sp+1Ch] [bp-3Ch] BYREF
  _DWORD v21[2]; // [sp+24h] [bp-34h] BYREF
  _DWORD v22[11]; // [sp+2Ch] [bp-2Ch] BYREF

  v19[0] = &sead__SafeStringBase__vtable;
  v19[1] = "Pa_CancelDelete_00";
  v20[0] = &sead__SafeStringBase__vtable;
  v20[1] = "Pa_CancelCopy_00";
  v21[0] = &sead__SafeStringBase__vtable;
  v21[1] = "Pa_CancelWhich_00";
  v22[0] = &sead__SafeStringBase__vtable;
  v22[1] = "Pa_Return_00";
  if ( ((unsigned int)&dword_60CAB920[2] & ~(1616111016 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CAB920[2]) )
  {
    dword_60CAB948 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB94C = (int)"N_Btn_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CAB920[2]);
  }
  v3 = (_DWORD *)(a1 + 12092);
  v18 = 1;
  sub_6047566C(a1 + 12092, a1 + 52496, v19, &dword_60CAB948, &v18);
  v18 = 1;
  sub_6047566C(a1 + 12092, a1 + 52500, v20, &dword_60CAB948, &v18);
  v18 = 1;
  sub_6047566C(a1 + 12092, a1 + 52504, v21, &dword_60CAB948, &v18);
  v18 = 1;
  sub_6047566C(a1 + 12092, a1 + 52508, v22, &dword_60CAB948, &v18);
  if ( ((unsigned int)&dword_60CAB920[3] & ~(1616111296 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CAB920[3]) )
  {
    dword_60CAB9D0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB9D4 = (int)"N_All_00";
    dword_60CAB9D8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB9DC = (int)"N_Delete_00";
    dword_60CAB9E0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB9E4 = (int)"N_Copy_00";
    dword_60CAB9E8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB9EC = (int)"N_DeleteSelect_00";
    dword_60CAB9F0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB9F4 = (int)"N_CopySelect_00";
    dword_60CAB9F8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB9FC = (int)"N_CopyWhich_00";
    dword_60CABA00 = (int)&sead__SafeStringBase__vtable;
    dword_60CABA04 = (int)"N_Return_00";
    dword_60CABA08 = (int)&sead__SafeStringBase__vtable;
    dword_60CABA0C = (int)"N_Window_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CAB920[3]);
  }
  v18 = 8;
  sub_6047518C(a1 + 12092, a1 + 52512, &dword_60CAB9D0, &v18);
  if ( ((unsigned int)&dword_60CAB920[4] & ~(1616111572 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CAB920[4]) )
  {
    dword_60CAB950 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB954 = (int)"P_Base_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CAB920[4]);
  }
  v18 = 1;
  sub_60475618(a1 + 12092, a1 + 52544, v19, (int)&dword_60CAB950, &v18);
  v18 = 1;
  sub_60475618(a1 + 12092, a1 + 52548, v20, (int)&dword_60CAB950, &v18);
  v18 = 1;
  sub_60475618(a1 + 12092, a1 + 52552, v21, (int)&dword_60CAB950, &v18);
  v18 = 1;
  sub_60475618(a1 + 12092, a1 + 52556, v22, (int)&dword_60CAB950, &v18);
  v18 = 4;
  sub_604756E0(a1 + 12092, a1 + 52560, v19, &v18);
  if ( ((unsigned int)&dword_60CAB920[5] & ~(1616111860 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60CAB920[5]) )
  {
    dword_60CAB958 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB95C = (int)"Pa_MarioUBtn_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CAB920[5]);
  }
  v18 = 1;
  sub_604756E0(a1 + 12092, a1 + 52576, &dword_60CAB958, &v18);
  if ( ((unsigned int)&dword_60CAB920[6] & ~(1616112008 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60CAB920[6]) )
  {
    dword_60CAB990 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB994 = (int)"Pa_SaveData_00";
    dword_60CAB998 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB99C = (int)"Pa_SaveData_01";
    dword_60CAB9A0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB9A4 = (int)"Pa_SaveData_02";
    dword_60CAB9A8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB9AC = (int)"Pa_MarioUBtn_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CAB920[6]);
  }
  if ( ((unsigned int)&dword_60CAB920[7] & ~(1616112180 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60CAB920[7]) )
  {
    dword_60CAB960 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB964 = (int)"B_Btn_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CAB920[7]);
  }
  v18 = 1;
  sub_604755C4(a1 + 12092, a1 + 52580, &dword_60CAB990, (int)&dword_60CAB960, &v18);
  v18 = 1;
  sub_604755C4(a1 + 12092, a1 + 52584, &dword_60CAB998, (int)&dword_60CAB960, &v18);
  v18 = 1;
  sub_604755C4(a1 + 12092, a1 + 52588, &dword_60CAB9A0, (int)&dword_60CAB960, &v18);
  v18 = 1;
  sub_604755C4(a1 + 12092, a1 + 52592, &dword_60CAB9A8, (int)&dword_60CAB960, &v18);
  v18 = 1;
  sub_604755C4(a1 + 12092, a1 + 52596, v19, (int)&dword_60CAB960, &v18);
  v18 = 1;
  sub_604755C4(a1 + 12092, a1 + 52600, v20, (int)&dword_60CAB960, &v18);
  v18 = 1;
  sub_604755C4(a1 + 12092, a1 + 52604, v21, (int)&dword_60CAB960, &v18);
  v18 = 1;
  sub_604755C4(a1 + 12092, a1 + 52608, v22, (int)&dword_60CAB960, &v18);
  if ( ((unsigned int)&dword_60CAB920[8] & ~(1616112568 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60CAB920[8]) )
  {
    dword_60CAB968 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB96C = (int)"G_StoryIndex_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CAB920[8]);
  }
  FIELD_U32(a1, 54636) = sub_604746E4(a1 + 12092, &dword_60CAB444, &dword_60CAB968);
  v9 = *(unsigned __int8 *)(FIELD_U32(dword_60CC6E04, 40) + 7);
  if ( v9 <= 3 )
    LOBYTE(v9) = 3;
  v10 = (unsigned __int8)(v9 - 3);
  if ( v10 > 2 )
    v10 = 0;
  v11 = dword_60B03A88[v10];
  FIELD_U32(a1, 83512) = v11;
  FIELD_U32(a1, 83508) = v11;
  sub_60541978(a1 + 17760);
  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    v13 = FIELD_U8(a1, 83567);
    v12 = (_BYTE *)(a1 + 83567);
    v14 = (StateMgr *)(v12 - 83531);
    if ( !v13 )
    {
      do
        StateMgr__execute(v14);
      while ( !*v12 );
    }
    v15 = sub_604745C0((int)v3, 0);
    sub_6047455C((int)v3, 0, v15);
    sub_60473B58(v3, 5u, 0);
    StateMgr__execute(v14);
  }
  sub_60473DE4(v3, 1u, &dword_60CAB45C, 0);
  v16 = sub_604745C0((int)v3, 1u);
  sub_6047455C((int)v3, 1u, v16);
  return sub_60473B58(v3, 5u, 0);
}
