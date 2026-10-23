/* registerProfile_retaburoku_5C1000
 * address: 0x605C1000   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_retaburoku_5C1000()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60CB09CC = 0;
  dword_60CB09C8 = 0;
  dword_60CB09C4 = 0;
  dword_60CB09C0 = 0;
  dword_60CB09D0 = -1056964608;
  dword_60CB09D4 = 1098907648;
  dword_60CB09D8 = 1090519040;
  dword_60CB09DC = 0;
  dword_60CB09E0 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD2689;
  Profile__ctor(&stru_60CB09E4, Actor_retaburoku_build, 0x120u, &v0, 0, 2);
}
