/* sub_6051B860
 * address: 0x6051B860   size: 788   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6051B860(int a1)
{
  char v1; // r12
  unsigned int v3; // r0
  int v4; // r0
  char v5; // r12
  _DWORD *v6; // r0
  int v8; // r1
  _DWORD v9[2]; // [sp+4h] [bp-1Ch] BYREF
  int v10; // [sp+Ch] [bp-14h] BYREF

  FIELD_U8(a1, 62514) = (FIELD_U32(dword_60CC6D78, 44) & 0x20) != 0;
  v3 = FIELD_U8(LevelInfo_instance, 28);
  switch ( FIELD_U8(LevelInfo_instance, 29) )
  {
    case 0xC:
      v3 = 13;
      goto LABEL_11;
    case 0xD:
      v3 = 14;
      goto LABEL_11;
    case 0xE:
      v3 = 15;
      goto LABEL_11;
    case 0x10:
      v3 = 16;
      goto LABEL_11;
    case 0x13:
      v3 = 12;
      goto LABEL_11;
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
      v3 = 11;
      goto LABEL_11;
    case 0x24:
      v8 = 10;
      if ( v3 == 4 )
        v8 = 9;
      FIELD_U32(a1, 62024) = v8;
      LOWORD(v3) = v8;
      goto LABEL_12;
    default:
      if ( v3 > 0x10 )
        v3 = 0;
LABEL_11:
      FIELD_U32(a1, 62024) = v3;
LABEL_12:
      FIELD_U32(a1, 4) = 3648 * (__int16)v3 + a1 + 8;
      if ( ((unsigned int)&dword_60CA8D50[2] & ~(1615968672 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA8D50[2]) )
      {
        dword_60CA8D68 = (int)&sead__SafeStringBase__vtable;
        dword_60CA8D6C = (int)"T_WorldCourse_00";
        dword_60CA8D70 = (int)&sead__SafeStringBase__vtable;
        dword_60CA8D74 = (int)"T_WorldName_00";
        sub_60000288();
        _cxa_guard_release(&dword_60CA8D50[2]);
      }
      v4 = FIELD_U32(a1, 4);
      v10 = 2;
      sub_60475334(v4, a1 + 62160, &dword_60CA8D68, &v10);
      if ( ((unsigned int)&dword_60CA8D50[3] & ~(1615968836 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA8D50[3]) )
      {
        dword_60CA8D60 = (int)&sead__SafeStringBase__vtable;
        dword_60CA8D64 = (int)"W_Wipe_00";
        sub_60000288();
        _cxa_guard_release(&dword_60CA8D50[3]);
      }
      sub_604754E4(FIELD_U32(a1, 4), (int *)(a1 + 62168), &dword_60CA8D60, 1);
      sub_60473DE4(*(_DWORD **)(a1 + 4), 0, &dword_60CA8BF0, 0);
      v6 = *(_DWORD **)(a1 + 4);
      v9[0] = &sead__SafeStringBase__vtable;
      v9[1] = "G_Loop_00";
      sub_6047467C(v6, 3u, &dword_60CA8BF8, (int)v9, 1.0, 1);
      ((void (__fastcall *)(int))loc_60518138)(a1 + 62552);
      sub_6051BBD0(a1);
      FIELD_U16(a1, 62512) = 0;
      return StateMgr__changeState((StateMgr *)(a1 + 62316), (StateBase *)&dword_60CA8C20);
  }
}
