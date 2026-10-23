/* Back2DTV_ref
 * address: 0x603F6084   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Back2DTV_ref(void *a1)
{
  int v2; // r6
  int v3; // r8
  int v4; // r7
  _DWORD *v5; // r6
  _DWORD *v6; // r6
  int (**v8)(); // [sp+8h] [bp-28h] BYREF
  const char *v9; // [sp+Ch] [bp-24h]

  v2 = operator_new_8DE25C(0x390u, a1, 4);
  v8 = &sead__SafeStringBase__vtable;
  v9 = "3D";
  sub_60443FE0(v2, &v8);
  sub_60444108(v2, 1, 4096, 5, 26, a1);
  v8 = &sead__SafeStringBase__vtable;
  v9 = "3D";
  v3 = dword_60CD0B40;
  v4 = operator_new_8DE25C(0x1FCu, a1, 4);
  sub_6044364C();
  sub_60958220(v3, v4, 6, &v8, 0, a1);
  sub_60443628(v4, v2);
  FIELD_U8(v4, 91) = 12;
  v8 = &sead__SafeStringBase__vtable;
  v9 = "Back2DTV";
  v5 = (_DWORD *)operator_new_8DE25C(0x1A4u, a1, 4);
  memset(v5, 0, 420);
  sub_60441A3C(v5);
  *v5 = off_60BF9FE4;
  v5[4] = &off_60BFA03C;
  sub_60958220(v3, v5, 5, &v8, 0, a1);
  v8 = &sead__SafeStringBase__vtable;
  v9 = "2D";
  v6 = (_DWORD *)operator_new_8DE25C(0x1A4u, a1, 4);
  memset(v6, 0, 420);
  sub_60441A3C(v6);
  *v6 = off_60BF9FE4;
  v6[4] = &off_60BFA03C;
  return sub_60958220(v3, v6, 7, &v8, 0, a1);
}
