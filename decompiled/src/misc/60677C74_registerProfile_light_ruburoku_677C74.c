/* registerProfile_light_ruburoku_677C74
 * address: 0x60677C74   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_light_ruburoku_677C74()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD623D;
  Profile__ctor(&stru_60CB7C94, Actor_light_ruburoku_build, 0x184u, &v1, &stru_60B07C40, 6166);
  dword_60CB7CB0 = ++CurrentStateID;
  dword_60CB7CB4 = 208;
  dword_60CB7CB8 = 1;
  dword_60CB7CBC = 212;
  dword_60CB7CC0 = 1;
  dword_60CB7CC4 = 216;
  dword_60CB7CC8 = 1;
  dword_60CB7CAC = (int)&off_60C1623C;
  dword_60CB7CCC = (int)&dword_60CB0CA4;
  dword_60CB7CD0 = 0;
  unk_60CB7CD4 = 1090519040;
  unk_60CB7CD8 = 0;
  dword_60CB7CDC = 0;
  dword_60CB7CE0 = -1056964608;
  dword_60CB7CE4 = 1090519040;
  dword_60CB7CE8[0] = 1090519040;
  dword_60CB7CE8[1] = -1056964608;
  dword_60CB7CE8[2] = 0;
  return dword_60CB7CE8;
}
