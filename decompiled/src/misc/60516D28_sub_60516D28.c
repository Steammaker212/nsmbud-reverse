/* sub_60516D28
 * address: 0x60516D28   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60516D28(int a1)
{
  int v2; // r2
  _DWORD *v3; // r5
  _DWORD *v4; // r4
  int v5; // r7
  int v6; // r0
  int v7; // r0
  unsigned int v8; // r5
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int (**v13)(); // [sp+0h] [bp-20h] BYREF
  int v14; // [sp+4h] [bp-1Ch]

  v2 = dword_60C99DD4 + 272;
  if ( !dword_60C99DD4 )
    v2 = dword_60C99DEC + 16;
  v3 = sub_603FD91C((_DWORD *)(dword_60C9A1F0 + 16), FIELD_U8(v2, 564));
  v4 = (_DWORD *)(a1 + 36);
  v13 = &sead__SafeStringBase__vtable;
  v14 = WipeIn_LevelNum_Mode_Loop_Out_ref(0);
  sub_60473DE4(v4, 0, &v13, 0);
  v5 = v3[15];
  v6 = WipeIn_LevelNum_Mode_Loop_Out_ref(1);
  v13 = &sead__SafeStringBase__vtable;
  v14 = v6;
  sub_60473DE4(v4, 1u, &v13, 0);
  v7 = sub_6047482C((int)v4, 1u);
  (*(void (__fastcall **)(int, float))(*(_DWORD *)v7 + 96))(v7, (float)(v5 - 1));
  v8 = sub_603FD93C((int)v3);
  v9 = WipeIn_LevelNum_Mode_Loop_Out_ref(2);
  v13 = &sead__SafeStringBase__vtable;
  v14 = v9;
  sub_60473DE4(v4, 2u, &v13, 0);
  v10 = sub_6047482C((int)v4, 2u);
  (*(void (__fastcall **)(int, float))(*(_DWORD *)v10 + 96))(v10, (float)v8);
  v11 = WipeIn_LevelNum_Mode_Loop_Out_ref(3);
  v13 = &sead__SafeStringBase__vtable;
  v14 = v11;
  return sub_60473DE4(v4, 3u, &v13, 1);
}
