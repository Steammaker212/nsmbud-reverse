/* sub_603F1020
 * address: 0x603F1020   size: 792   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F1020(void *a1)
{
  int v2; // r10
  int v3; // r0
  int v4; // r7
  int v5; // r0
  int v6; // r9
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r6
  int v11; // r5
  int v12; // r5
  int v13; // r5
  _DWORD *v14; // r5
  int v15; // r5
  int v17; // [sp+Ch] [bp-34h]
  int (**v18)(); // [sp+14h] [bp-2Ch] BYREF
  const char *v19; // [sp+18h] [bp-28h]

  sub_6090B310(dword_60CCF464);
  v2 = operator_new_8DE25C(0x390u, a1, 4);
  v18 = &sead__SafeStringBase__vtable;
  v19 = "DistantView";
  v3 = sub_60443FE0(v2, &v18);
  sub_60444108(v3, 1, 512, 1, 1, a1);
  v4 = operator_new_8DE25C(0x390u, a1, 4);
  v18 = &sead__SafeStringBase__vtable;
  v19 = "BGUpdate";
  v5 = sub_60443FE0(v4, &v18);
  sub_60444108(v5, 1, 128, 1, 1, a1);
  v6 = operator_new_8DE25C(0x390u, a1, 4);
  v18 = &sead__SafeStringBase__vtable;
  v19 = "3D";
  v7 = sub_60443FE0(v6, &v18);
  sub_60444108(v7, 1, 4096, 5, 26, a1);
  v8 = operator_new_8DE25C(0x390u, a1, 4);
  v18 = &sead__SafeStringBase__vtable;
  v17 = v8;
  v19 = "Menu3D";
  v9 = sub_60443FE0(v8, &v18);
  sub_60444108(v9, 1, 512, 5, 26, a1);
  v18 = &sead__SafeStringBase__vtable;
  v10 = dword_60CD0B40;
  v19 = (const char *)&unk_60AC65BB;
  v11 = operator_new_8DE25C(0x1FCu, a1, 4);
  sub_6044364C();
  sub_60958220(v10, v11, 5, &v18, 0, a1);
  sub_60443628(v11, v2);
  v18 = &sead__SafeStringBase__vtable;
  v19 = (const char *)&unk_60AC65C2;
  v12 = operator_new_8DE25C(0x1FCu, a1, 4);
  sub_6044364C();
  sub_60958220(v10, v12, 6, &v18, 0, a1);
  sub_60443628(v12, v4);
  v18 = &sead__SafeStringBase__vtable;
  v19 = "3D";
  v13 = operator_new_8DE25C(0x1FCu, a1, 4);
  sub_6044364C();
  sub_60958220(v10, v13, 9, &v18, 0, a1);
  sub_60443628(v13, v6);
  v18 = &sead__SafeStringBase__vtable;
  v19 = "2D";
  v14 = (_DWORD *)operator_new_8DE25C(0x1A4u, a1, 4);
  memset(v14, 0, 420);
  sub_60441A3C(v14);
  *v14 = off_60BF9354;
  v14[4] = &off_60BF93AC;
  sub_60958220(v10, v14, 10, &v18, 0, a1);
  v18 = &sead__SafeStringBase__vtable;
  v19 = "Menu3D";
  v15 = operator_new_8DE25C(0x1FCu, a1, 4);
  sub_6044364C();
  sub_60958220(v10, v15, 15, &v18, 0, a1);
  sub_60443628(v15, v17);
  return sub_6090B32C(dword_60CCF464);
}
