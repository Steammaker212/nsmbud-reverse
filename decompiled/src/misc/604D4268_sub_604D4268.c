/* sub_604D4268
 * address: 0x604D4268   size: 984   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604D4268(int a1, int a2, unsigned int a3)
{
  _BYTE *v6; // r5
  _BYTE *v7; // r0
  char v8; // r9
  int v9; // r5
  char v10; // r12
  char v11; // r12
  int v12; // r0
  int (**v14)(); // [sp+4h] [bp-2Ch] BYREF
  const char *v15; // [sp+8h] [bp-28h]
  int v16; // [sp+Ch] [bp-24h]

  FIELD_U8(a1, 36) = 1;
  FIELD_U32(a1, 6124) = 1;
  FIELD_U32(a1, 6128) = 0;
  StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&unk_60CA3F78);
  v6 = (_BYTE *)(a1 + 6144);
  if ( FIELD_U8(a1, 6144) )
  {
    v16 = 0;
    FIELD_U32(a1, 6136) = 0;
    v14 = &sead__SafeStringBase__vtable;
    v15 = (const char *)InOut_Pos_ref(1);
    sub_60473DE4((_DWORD *)(a1 + 40), 1u, &v14, 0);
    sub_6047455C(a1 + 40, 1u, (float)v16);
    sub_6047459C(a1 + 40, 1u);
    FIELD_U8(a1, 6133) = 0;
    v7 = (_BYTE *)(a1 + 6133);
    if ( a2 != 10 )
      goto LABEL_13;
  }
  else
  {
    if ( a2 != 10 )
    {
      v16 = 0;
      FIELD_U32(a1, 6136) = 0;
      v14 = &sead__SafeStringBase__vtable;
      v15 = (const char *)InOut_Pos_ref(1);
      sub_60473DE4((_DWORD *)(a1 + 40), 1u, &v14, 0);
      sub_6047455C(a1 + 40, 1u, (float)v16);
      sub_6047459C(a1 + 40, 1u);
      FIELD_U8(a1, 6133) = 0;
      goto LABEL_13;
    }
    if ( *(_BYTE *)(sub_603F7EE4(dword_60C99DC8, a3) + 2) == 1 )
    {
      v8 = 1;
      v16 = 1;
      FIELD_U32(a1, 6136) = 1;
    }
    else
    {
      v8 = 0;
      v16 = 0;
      FIELD_U32(a1, 6136) = 0;
    }
    v14 = &sead__SafeStringBase__vtable;
    v15 = (const char *)InOut_Pos_ref(1);
    sub_60473DE4((_DWORD *)(a1 + 40), 1u, &v14, 0);
    sub_6047455C(a1 + 40, 1u, (float)v16);
    sub_6047459C(a1 + 40, 1u);
    FIELD_U8(a1, 6132) = v8;
    FIELD_U8(a1, 6133) = 0;
    v7 = (_BYTE *)(a1 + 6133);
  }
  if ( *v6 && FIELD_U8(dword_60C99DEC, 529) == a3 )
    *v7 = 1;
LABEL_13:
  v9 = (unsigned __int8)*v6;
  v14 = &sead__SafeStringBase__vtable;
  v15 = "CourseSelectVS_World_00";
  sub_6047E0EC(&v14, FIELD_U32(a1, 3612), 1, a2);
  if ( ((unsigned int)dword_60CA4D40 & ~(1615676648 << v10) & 1) == 0 && _cxa_guard_acquire(dword_60CA4D40) )
  {
    dword_60CA4E18 = (int)&sead__SafeStringBase__vtable;
    dword_60CA4E1C = (int)"CourseSelectVS_Text_00";
    dword_60CA4E20 = (int)&sead__SafeStringBase__vtable;
    dword_60CA4E24 = (int)"CourseSelectVS_Text_01";
    sub_60000288();
    _cxa_guard_release(dword_60CA4D40);
  }
  sub_6047E0EC(&dword_60CA4E00[2 * v9 + 6], FIELD_U32(a1, 3608), 0);
  if ( ((unsigned int)&dword_60CA4D40[1] & ~(1615676812 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60CA4D40[1]) )
  {
    dword_60CA4E28 = (int)&sead__SafeStringBase__vtable;
    dword_60CA4E2C = (int)"CourseSelectVSConfirm_BtnL_00";
    dword_60CA4E30 = (int)&sead__SafeStringBase__vtable;
    dword_60CA4E34 = (int)"CourseSelectVSConfirm_BtnL_01";
    sub_60000288();
    _cxa_guard_release(&dword_60CA4D40[1]);
  }
  v12 = (*(int (__fastcall **)(_DWORD, const char *, int))(**(_DWORD **)(a1 + 3620) + 48))(
          FIELD_U32(a1, 3620),
          "T_Btn_00",
          1);
  return sub_6047E0EC(&dword_60CA4E00[2 * v9 + 10], v12, 0);
}
