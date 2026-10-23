/* registerProfile_puroperaburoku_6BF200
 * address: 0x606BF200   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_puroperaburoku_6BF200()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD77B5;
  Profile__ctor(&stru_60CBA7BC, Actor_puroperaburoku_build, 0x185u, &v1, &stru_60B088A4, 6166);
  dword_60CBA7D8 = ++CurrentStateID;
  dword_60CBA7DC = 208;
  dword_60CBA7E0 = 1;
  dword_60CBA7E4 = 212;
  dword_60CBA7E8 = 1;
  dword_60CBA7EC = 216;
  dword_60CBA7F0 = 1;
  dword_60CBA7D4 = (int)&off_60C1B94C;
  dword_60CBA7F4 = (int)&dword_60CB0CA4;
  dword_60CBA7F8 = 0;
  unk_60CBA7FC = 1090519040;
  unk_60CBA800 = 0;
  dword_60CBA804 = 0;
  dword_60CBA808 = -1056964608;
  dword_60CBA80C = 1090519040;
  dword_60CBA810[0] = 1090519040;
  dword_60CBA810[1] = -1056964608;
  dword_60CBA810[2] = 0;
  return dword_60CBA810;
}
