/* sub_601994E8
 * address: 0x601994E8   size: 868   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601994E8(void *a1)
{
  int v2; // r11
  int v3; // r6
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r7
  int v8; // r7
  _DWORD *v9; // r7
  int v10; // r7
  int v11; // r6
  _DWORD *v12; // r6
  _DWORD *v13; // r6
  int v15; // [sp+Ch] [bp-34h]
  int (**v16)(); // [sp+14h] [bp-2Ch] BYREF
  const char *v17; // [sp+18h] [bp-28h]

  sub_6090B310(dword_60CCF464);
  v2 = dword_60CD0B40;
  v3 = operator_new_8DE25C(0x390u, a1, 4);
  v16 = &sead__SafeStringBase__vtable;
  v17 = "CourseSelect";
  v4 = sub_60443FE0(v3, &v16);
  sub_60444108(v4, 6, 1024, 5, 5, a1);
  v5 = operator_new_8DE25C(0x390u, a1, 4);
  v16 = &sead__SafeStringBase__vtable;
  v15 = v5;
  v17 = "CourseSelectWorld";
  v6 = sub_60443FE0(v5, &v16);
  sub_60444108(v6, 1, 512, 5, 5, a1);
  v16 = &sead__SafeStringBase__vtable;
  v17 = "DepthShadow";
  v7 = operator_new_8DE25C(0x1550u, a1, 4);
  sub_60446220();
  sub_60958220(v2, v7, 5, &v16, 0, a1);
  sub_60443628(v7, v3);
  FIELD_U8(v7, 5449) = 1;
  v16 = &sead__SafeStringBase__vtable;
  v17 = "Reflection";
  v8 = operator_new_8DE25C(0x898u, a1, 4);
  sub_60441B18();
  sub_60958220(v2, v8, 3, &v16, 0, a1);
  sub_60443628(v8, v3);
  v16 = &sead__SafeStringBase__vtable;
  v17 = "2D_Pre3D";
  v9 = (_DWORD *)operator_new_8DE25C(0x1A4u, a1, 4);
  memset(v9, 0, 420);
  sub_60441A3C(v9);
  *v9 = off_60BD5D30;
  v9[4] = &off_60BD5D88;
  sub_60958220(v2, v9, 6, &v16, 0, a1);
  v16 = &sead__SafeStringBase__vtable;
  v17 = "3D";
  v10 = operator_new_8DE25C(0x1FCu, a1, 4);
  sub_6044364C();
  sub_60958220(v2, v10, 7, &v16, 0, a1);
  sub_60443628(v10, v3);
  v16 = &sead__SafeStringBase__vtable;
  v17 = "3D_World";
  v11 = operator_new_8DE25C(0x1FCu, a1, 4);
  sub_6044364C();
  sub_60958220(v2, v11, 9, &v16, 0, a1);
  sub_60443628(v11, v15);
  v16 = &sead__SafeStringBase__vtable;
  v17 = "2D";
  v12 = (_DWORD *)operator_new_8DE25C(0x1A4u, a1, 4);
  memset(v12, 0, 420);
  sub_60441A3C(v12);
  *v12 = off_60BD5D30;
  v12[4] = &off_60BD5D88;
  sub_60958220(v2, v12, 8, &v16, 0, a1);
  *((_BYTE *)v12 + 91) = 4;
  v16 = &sead__SafeStringBase__vtable;
  v17 = "2D_Menu";
  v13 = (_DWORD *)operator_new_8DE25C(0x1A4u, a1, 4);
  memset(v13, 0, 420);
  sub_60441A3C(v13);
  *v13 = off_60BD5D30;
  v13[4] = &off_60BD5D88;
  sub_60958220(v2, v13, 10, &v16, 0, a1);
  *((_BYTE *)v13 + 91) = 4;
  return sub_6090B32C(dword_60CCF464);
}
