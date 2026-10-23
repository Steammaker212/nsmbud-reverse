/* registerProfile_buroku_5B1CA0
 * address: 0x605B1CA0   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_buroku_5B1CA0()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60CB0390 = 0;
  dword_60CB0394 = 0;
  dword_60CB0398 = 0;
  dword_60CB03A8 = 0;
  dword_60CB03A4 = 0;
  dword_60CB03A0 = 0;
  dword_60CB039C = 0;
  dword_60CB03AC = -1056964608;
  dword_60CB03B0 = 1098907648;
  dword_60CB03B4 = 1090519040;
  dword_60CB03B8 = 0;
  dword_60CB03BC = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD2450;
  Profile__ctor(&stru_60CB0370, Actor_buroku_build, 0x11Fu, &v0, 0, 4098);
}
