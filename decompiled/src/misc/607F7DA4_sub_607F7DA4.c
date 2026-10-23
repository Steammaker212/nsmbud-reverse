/* sub_607F7DA4
 * address: 0x607F7DA4   size: 488   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F7DA4(int a1)
{
  _DWORD *v1; // r10
  int v2; // r11
  int v3; // r7
  _DWORD *v4; // r4
  _DWORD *v5; // r4
  int (**v8)(); // [sp+Ch] [bp-2Ch] BYREF
  const char *v9; // [sp+10h] [bp-28h]

  sub_60023F4C();
  system_ref_426530(dword_60C9BBD4);
  v1 = (_DWORD *)operator_new(0x390u);
  v8 = &sead__SafeStringBase__vtable;
  v9 = "3D";
  sub_60443FE0((int)v1, (int)&v8);
  sub_60444108(v1, 1, 128, 5, 26, 0);
  v8 = &sead__SafeStringBase__vtable;
  v9 = "3D";
  v2 = dword_60CD0B40;
  v3 = operator_new_8DE25C(0x1FCu, 0, 4);
  sub_6044364C();
  sub_60958220(v2, v3, 6, &v8, 0, 0);
  v8 = &sead__SafeStringBase__vtable;
  v9 = "BackLayout";
  v4 = (_DWORD *)operator_new_8DE25C(0x1A4u, 0, 4);
  memset(v4, 0, 420);
  sub_60441A3C();
  *v4 = off_60BF9FE4;
  v4[4] = &off_60BFA03C;
  sub_60958220(v2, v4, 5, &v8, 0, 0);
  v8 = &sead__SafeStringBase__vtable;
  v9 = "FrontLayout";
  v5 = (_DWORD *)operator_new_8DE25C(0x1A4u, 0, 4);
  memset(v5, 0, 420);
  sub_60441A3C();
  *v5 = off_60BF9FE4;
  v5[4] = &off_60BFA03C;
  sub_60958220(v2, v5, 7, &v8, 0, 0);
  sub_60443628(v3, (int)v1);
  sub_603F7FF8(0);
  sub_60401BB8(0);
  sub_60559110(a1 + 232);
  sub_604B633C(a1 + 3828);
  sub_603F807C(dword_60C99DD0);
  sub_60401ED4(dword_60C99E68);
  sub_608EF6A8(a1);
  return sub_600240A4();
}
