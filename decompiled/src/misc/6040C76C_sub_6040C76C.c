/* sub_6040C76C
 * address: 0x6040C76C   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6040C76C(void *a1)
{
  int v2; // r5
  int v3; // r9
  int v4; // r7
  int v5; // r5
  _DWORD *v6; // r6
  int (**v8)(); // [sp+Ch] [bp-2Ch] BYREF
  const char *v9; // [sp+10h] [bp-28h]

  v2 = operator_new_8DE25C(0x390u, a1, 4);
  v8 = &sead__SafeStringBase__vtable;
  v9 = "3D";
  sub_60443FE0(v2, &v8);
  sub_60444108(v2, 1, 4096, 1, 1, a1);
  v8 = &sead__SafeStringBase__vtable;
  v9 = "3D";
  v3 = dword_60CD0B40;
  v4 = operator_new_8DE25C(0x1FCu, a1, 4);
  sub_6044364C();
  sub_60958220(v3, v4, 5, &v8, 0, a1);
  sub_60443628(v4, v2);
  FIELD_U8(v4, 91) = 4;
  v8 = &sead__SafeStringBase__vtable;
  v5 = dword_60CD0B40;
  v9 = "2D";
  v6 = (_DWORD *)operator_new_8DE25C(0x1A4u, a1, 4);
  memset(v6, 0, 420);
  sub_60441A3C(v6);
  *v6 = off_60BF9B68;
  v6[4] = &off_60BF9BC0;
  return sub_60958220(v5, v6, 6, &v8, 0, a1);
}
