/* sub_604FF248
 * address: 0x604FF248   size: 848   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604FF248(_DWORD *a1)
{
  char v1; // r12
  int v3; // r5
  _DWORD *v4; // r0
  int v5; // r1
  int v6; // r2
  char v7; // r12
  char v8; // r12
  char v9; // r12
  void *v10; // r4
  int v12[7]; // [sp+4h] [bp-1Ch] BYREF

  if ( ((unsigned int)&dword_60CA73F4[1] & ~(1615852136 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA73F4[1]) )
  {
    dword_60CA7470 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7474 = (int)"N_Roll_00";
    dword_60CA7478 = (int)&sead__SafeStringBase__vtable;
    dword_60CA747C = (int)"N_StartPosition_00";
    dword_60CA7480 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7484 = (int)"N_Heading_00";
    dword_60CA7488 = (int)&sead__SafeStringBase__vtable;
    dword_60CA748C = (int)"N_SpaceL_00";
    dword_60CA7490 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7494 = (int)"N_SpaceS_00";
    dword_60CA7498 = (int)&sead__SafeStringBase__vtable;
    dword_60CA749C = (int)"N_Post_00";
    dword_60CA74A0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA74A4 = (int)"N_Name_00";
    dword_60CA74A8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA74AC = (int)"N_CopyRight_00";
    dword_60CA74B0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA74B4 = (int)"N_EndPosition_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA73F4[1]);
  }
  v12[0] = 9;
  v3 = (int)(a1 + 535);
  sub_6047518C((int)(a1 + 535), (int)(a1 + 3735), &dword_60CA7470, v12);
  v4 = (_DWORD *)a1[3736];
  v5 = v4[6];
  v6 = v4[7];
  a1[3998] = v4[8];
  a1[3997] = v6;
  a1[3996] = v5;
  if ( ((unsigned int)&dword_60CA73F4[2] & ~(1615852472 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60CA73F4[2]) )
  {
    dword_60CA7458 = (int)&sead__SafeStringBase__vtable;
    dword_60CA745C = (int)"T_Heading_00";
    dword_60CA7460 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7464 = (int)"T_CopyRight_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA73F4[2]);
  }
  v12[0] = 2;
  sub_60475334((int)(a1 + 535), (int)(a1 + 3744), &dword_60CA7458, v12);
  if ( ((unsigned int)&dword_60CA73F4[3] & ~(1615852632 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60CA73F4[3]) )
  {
    dword_60CA7438 = (int)&sead__SafeStringBase__vtable;
    dword_60CA743C = (int)"T_Post_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA73F4[3]);
  }
  memset(a1 + 3746, 0, 200);
  v12[0] = 1;
  sub_60475334((int)(a1 + 535), (int)(a1 + 3746), &dword_60CA7438, v12);
  if ( ((unsigned int)&dword_60CA73F4[4] & ~(1615852796 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60CA73F4[4]) )
  {
    dword_60CA7440 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7444 = (int)"T_Name_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA73F4[4]);
  }
  v10 = a1 + 3796;
  memset(v10, 0, 800);
  v12[0] = 1;
  return sub_60475334(v3, (int)v10, &dword_60CA7440, v12);
}
