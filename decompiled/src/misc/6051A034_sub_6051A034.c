/* sub_6051A034
 * address: 0x6051A034   size: 648   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6051A034(int a1)
{
  int v2; // r0
  int v3; // r6
  unsigned int v4; // r1
  int v5; // r8
  int v6; // r7
  _DWORD *v7; // r4
  int v8; // s0
  int v9; // r6
  float v10; // s16
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  unsigned int v18; // r5
  int v19; // r0
  int (**v21)(); // [sp+4h] [bp-44h] BYREF
  int v22; // [sp+8h] [bp-40h]
  _DWORD v23[3]; // [sp+Ch] [bp-3Ch] BYREF
  _DWORD v24[12]; // [sp+18h] [bp-30h] BYREF

  nullsub_5761();
  v3 = v2;
  v4 = FIELD_U32(dword_60C9A1E0, 532);
  v5 = FIELD_U32(dword_60C9A1E0, 540);
  if ( v4 >= 0x20 )
    v4 = 0;
  v6 = *(_DWORD *)(dword_60C9A1E0 + 16 * v4 + 24);
  v7 = (_DWORD *)(a1 + 36);
  v24[0] = &sead__SafeStringBase__vtable;
  v24[1] = sub_6051A8DC(3);
  sub_60473DE4(v7, 3u, v24, 0);
  v8 = v3;
  v9 = 8 - v6;
  v10 = (float)v8;
  v11 = sub_6047482C((int)v7, 3u);
  if ( v10 <= (float)(unsigned int)sub_608502E4(v11) )
  {
    v12 = sub_6047482C((int)v7, 3u);
    (*(void (__fastcall **)(int, float))(*(_DWORD *)v12 + 96))(v12, v10);
  }
  v13 = sub_6051A8DC(2);
  v24[0] = &sead__SafeStringBase__vtable;
  v24[1] = v13;
  sub_60473DE4(v7, 2u, v24, 0);
  v14 = sub_6047482C((int)v7, 2u);
  if ( (float)v9 <= (float)(unsigned int)sub_608502E4(v14) )
  {
    v15 = sub_6047482C((int)v7, 2u);
    (*(void (__fastcall **)(int, float))(*(_DWORD *)v15 + 96))(v15, (float)v9);
  }
  v16 = sub_6051A8DC(5);
  v24[0] = &sead__SafeStringBase__vtable;
  v24[1] = v16;
  sub_60473DE4(v7, 4u, v24, 0);
  v17 = sub_6047482C((int)v7, 4u);
  (*(void (__fastcall **)(int, float))(*(_DWORD *)v17 + 96))(v17, 0.0);
  sub_60473B58(v7, 0xEu, 0);
  v24[3] = 0;
  BYTE1(v24[2]) = 0;
  HIWORD(v24[2]) = 0;
  v23[1] = v24;
  strcpy((char *)v24, "G_Place_");
  v23[0] = &BufferedSafeStringBase_char_vtable_probably;
  v23[2] = 16;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)v23);
  if ( v5 == v6 - 1 )
    sub_608FDE40((int)v23, "07");
  else
    sub_608FDE40((int)v23, "%02d", v5);
  v21 = &sead__SafeStringBase__vtable;
  v22 = sub_6051A8DC(4);
  v18 = sub_604746E4((int)v7, &v21, v23);
  v19 = sub_6051A8DC(4);
  v21 = &sead__SafeStringBase__vtable;
  v22 = v19;
  return sub_604742D0(v7, 4u, &v21, v18, 1.0, 1);
}
