/* registerProfile_mid_61A440
 * address: 0x6061A440   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_mid_61A440()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-10h] BYREF

  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60AD3B70;
  Profile__ctor(&stru_60CB3434, Actor_mid_build, 0xBBu, &v2, &stru_60B066AC, 2);
  *v0 = &off_60C10800;
  dword_60CB3450 = ++CurrentStateID;
  dword_60CB3454 = 192;
  dword_60CB3458 = 1;
  dword_60CB345C = 196;
  dword_60CB3460 = 1;
  dword_60CB3464 = 200;
  dword_60CB3468 = 1;
  dword_60CB344C = (int)&off_60C108FC;
  dword_60CB346C = (int)&dword_60CB7C70;
  return &dword_60CB344C;
}
