/* sub_60554608
 * address: 0x60554608   size: 668   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60554608(int a1, int a2)
{
  char v4; // r12
  char v5; // r12
  int v6; // r7
  int v7; // r8
  char *v8; // r4
  int v9; // r5
  int v10; // r0
  int v11; // r0
  int result; // r0
  int v13; // [sp+14h] [bp-34h]
  _DWORD v14[2]; // [sp+18h] [bp-30h] BYREF
  int v15; // [sp+20h] [bp-28h] BYREF

  sub_60554900();
  sub_60554A60(a1);
  sub_60554C24(a1);
  if ( ((unsigned int)dword_60CAD33C & ~(1616201280 << v4) & 1) == 0 && _cxa_guard_acquire(dword_60CAD33C) )
  {
    dword_60CAD378 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD37C = (int)"T_WorldName_00";
    dword_60CAD380 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD384 = (int)"T_TotalSCoin_00";
    dword_60CAD388 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD38C = (int)"T_CourseNum_00";
    sub_60000288();
    _cxa_guard_release(dword_60CAD33C);
  }
  v15 = 3;
  sub_60475334(a1, a1 + 3656, &dword_60CAD378, &v15);
  if ( ((unsigned int)&dword_60CAD33C[1] & ~(1616201460 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CAD33C[1]) )
  {
    dword_60CAD350 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD354 = (int)"W_InfoBase_00";
    dword_60CAD358 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD35C = (int)"W_InfoFrame_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CAD33C[1]);
  }
  sub_604754E4(a1, (int *)(a1 + 3668), &dword_60CAD350, 2);
  sub_60473DE4((_DWORD *)a1, 1u, &dword_60CAD2C4, 1);
  v6 = 0;
  v7 = 0;
  v13 = a2;
  v8 = (char *)&unk_60B03BA4 + 144 * a2 + 4;
  do
  {
    v9 = FIELD_U32(a1, 3664);
    v10 = sub_6047482C(a1, 1u);
    sub_60554D9C(
      a1 + 3572 + v7 + 108,
      a1 + 3620,
      a1 + 3668,
      v9,
      v10,
      *(_DWORD *)(a1 + 3572 + v6),
      *(_DWORD *)&v8[3 * v6],
      FIELD_U32(a1, 16));
    v7 += 88;
    v6 += 4;
  }
  while ( v7 != 1056 );
  sub_6047459C(a1, 1u);
  v14[0] = &sead__SafeStringBase__vtable;
  v14[1] = "StarCoinListWin_WorldName_00";
  sub_6047E0EC(v14, FIELD_U32(a1, 3656), 1, v13);
  *(_BYTE *)(FIELD_U32(a1, 3568) + 64) &= ~1u;
  FIELD_U8(a1, 4737) = 0;
  v11 = sub_60473B4C(a1);
  result = (*(int (__fastcall **)(int, const char *, int))(*(_DWORD *)v11 + 48))(v11, "N_All_00", 1);
  FIELD_U32(a1, 3676) = result;
  return result;
}
