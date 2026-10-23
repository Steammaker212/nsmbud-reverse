/* registerProfile_akutaburokucloud_5680C0
 * address: 0x605680C0   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_akutaburokucloud_5680C0()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60CAE4E0 = 0;
  dword_60CAE4E4 = 0;
  dword_60CAE4E8 = 0;
  dword_60CAE4F8 = 0;
  dword_60CAE4F4 = 0;
  dword_60CAE4F0 = 0;
  dword_60CAE4EC = 0;
  dword_60CAE4FC = -1052770304;
  dword_60CAE500 = 1103101952;
  dword_60CAE504 = 1094713344;
  dword_60CAE508 = 0;
  dword_60CAE50C = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD1469;
  Profile__ctor(&stru_60CAE46C, Actor_akutaburokucloud_build, 0x138u, &v1, &stru_60B04220, 4);
  dword_60CAE488 = CurrentStateID + 1;
  dword_60CAE48C = 404;
  dword_60CAE490 = 1;
  dword_60CAE494 = 408;
  dword_60CAE498 = 1;
  dword_60CAE49C = 412;
  dword_60CAE4A0 = 1;
  dword_60CAE484 = (int)&off_60C01BB4;
  dword_60CAE4A4 = (int)&dword_60CAE2F8;
  CurrentStateID += 2;
  unk_60CAE4AC = CurrentStateID;
  unk_60CAE4B0 = 416;
  unk_60CAE4B4 = 1;
  dword_60CAE4B8 = 420;
  dword_60CAE4BC = 1;
  dword_60CAE4C0 = 424;
  dword_60CAE4C4 = 1;
  dword_60CAE4A8 = (int)&off_60C01BB4;
  dword_60CAE4C8 = (int)&dword_60CAE31C;
  return &dword_60CAE31C;
}
