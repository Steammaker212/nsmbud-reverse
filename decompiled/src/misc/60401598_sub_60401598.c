/* sub_60401598
 * address: 0x60401598   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60401598(void *a1)
{
  int v2; // r9
  int v3; // r6
  int v4; // r7
  _DWORD *v5; // r6
  _DWORD *v6; // r6
  int result; // r0
  int (**v8)(); // [sp+Ch] [bp-2Ch] BYREF
  const char *v9; // [sp+10h] [bp-28h]

  v2 = dword_60CD0B40;
  v3 = operator_new_8DE25C(0x390u, a1, 4);
  v8 = &sead__SafeStringBase__vtable;
  v9 = "Result";
  sub_60443FE0(v3, &v8);
  sub_60444108(v3, 1, 512, 5, 5, a1);
  v8 = &sead__SafeStringBase__vtable;
  v9 = "3D";
  v4 = operator_new_8DE25C(0x1FCu, a1, 4);
  sub_6044364C();
  sub_60958220(v2, v4, 6, &v8, 0, a1);
  sub_60443628(v4, v3);
  FIELD_U8(v4, 91) = 4;
  v8 = &sead__SafeStringBase__vtable;
  v9 = "2D";
  v5 = (_DWORD *)operator_new_8DE25C(0x1A4u, a1, 4);
  memset(v5, 0, 420);
  sub_60441A3C(v5);
  *v5 = off_60BF99A4;
  v5[4] = &off_60BF99FC;
  sub_60958220(v2, v5, 5, &v8, 0, a1);
  *((_BYTE *)v5 + 91) = 4;
  v8 = &sead__SafeStringBase__vtable;
  v9 = "2DFront";
  v6 = (_DWORD *)operator_new_8DE25C(0x1A4u, a1, 4);
  memset(v6, 0, 420);
  sub_60441A3C(v6);
  *v6 = off_60BF99A4;
  v6[4] = &off_60BF99FC;
  result = sub_60958220(v2, v6, 7, &v8, 0, a1);
  *((_BYTE *)v6 + 91) = 4;
  return result;
}
