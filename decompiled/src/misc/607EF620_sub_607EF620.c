/* sub_607EF620
 * address: 0x607EF620   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607EF620(int a1)
{
  int v2; // r9
  _DWORD *v3; // r6
  _DWORD *v4; // r6
  int (**v6)(); // [sp+8h] [bp-28h] BYREF
  const char *v7; // [sp+Ch] [bp-24h]

  v2 = dword_60CD0B40;
  v6 = &sead__SafeStringBase__vtable;
  v7 = "BackLayout";
  v3 = (_DWORD *)operator_new_8DE25C(0x1A4u, 0, 4);
  memset(v3, 0, 420);
  sub_60441A3C();
  *v3 = off_60BF9FE4;
  v3[4] = &off_60BFA03C;
  sub_60958220(v2, v3, 5, &v6, 0, 0);
  v6 = &sead__SafeStringBase__vtable;
  v7 = "FrontLayout";
  v4 = (_DWORD *)operator_new_8DE25C(0x1A4u, 0, 4);
  memset(v4, 0, 420);
  sub_60441A3C();
  *v4 = off_60BF9FE4;
  v4[4] = &off_60BFA03C;
  sub_60958220(v2, v4, 6, &v6, 0, 0);
  sub_6045BF58(a1 + 196, 0);
  sub_6045BF58(a1 + 600, 1);
  sub_6045BF58(a1 + 1004, 2);
  sub_6045BF58(a1 + 1408, 3);
  sub_6045BF58(a1 + 1812, 4);
  sub_60401BB8(0);
  sub_604EBE38(a1 + 2648);
  sub_60401ED4(dword_60C99E68);
  return sub_608EF6A8(a1);
}
