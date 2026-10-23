/* registerProfile_oburoku_56BFB8
 * address: 0x6056BFB8   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_oburoku_56BFB8()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60CAE6E0 = 0;
  dword_60CAE6E4 = 0;
  dword_60CAE6E8 = 0;
  dword_60CAE6F8 = 0;
  dword_60CAE6F4 = 0;
  dword_60CAE6F0 = 0;
  dword_60CAE6EC = 0;
  dword_60CAE6FC = -1052770304;
  dword_60CAE700 = 1094713344;
  dword_60CAE704 = 1094713344;
  dword_60CAE708 = -1052770304;
  dword_60CAE70C = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD1675;
  Profile__ctor(&stru_60CAE690, Actor_oburoku_build, 0xF8u, &v1, &stru_60B04364, 4098);
  dword_60CAE6AC = ++CurrentStateID;
  dword_60CAE6B0 = 404;
  dword_60CAE6B4 = 1;
  dword_60CAE6B8 = 408;
  dword_60CAE6BC = 1;
  dword_60CAE6C0 = 412;
  dword_60CAE6C4 = 1;
  dword_60CAE6A8 = (int)&off_60C028B8;
  dword_60CAE6C8 = (int)&dword_60CAE2F8;
  return &dword_60CAE6A8;
}
