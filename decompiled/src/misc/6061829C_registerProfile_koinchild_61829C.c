/* registerProfile_koinchild_61829C
 * address: 0x6061829C   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_koinchild_61829C()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD3AE7;
  Profile__ctor(&stru_60CB3374, Actor_koinchild_build, 0x78u, &v1, &stru_60B065F8, 2);
  dword_60CB3390 = ++CurrentStateID;
  dword_60CB338C = (int)&off_60C103AC;
  dword_60CB3394 = 216;
  dword_60CB3398 = 1;
  dword_60CB339C = 220;
  dword_60CB33A0 = 1;
  dword_60CB33A4 = 224;
  dword_60CB33A8 = 1;
  return &dword_60CB338C;
}
