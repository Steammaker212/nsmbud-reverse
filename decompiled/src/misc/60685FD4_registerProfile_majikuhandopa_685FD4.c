/* registerProfile_majikuhandopa_685FD4
 * address: 0x60685FD4   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_majikuhandopa_685FD4()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60CB830C = 0;
  dword_60CB8308 = 0;
  dword_60CB8304 = 0;
  dword_60CB8300 = 0;
  dword_60CB8310 = -1023410176;
  dword_60CB8314 = 1090519040;
  dword_60CB8318 = 1124073472;
  dword_60CB831C = -1040187392;
  dword_60CB8320 = 0;
  dword_60CB8324 = 0;
  dword_60CB8328 = 1126170624;
  dword_60CB832C = 0;
  dword_60CB8330 = 0;
  dword_60CB8334 = -1044381696;
  dword_60CB8338 = 1124073472;
  dword_60CB833C = 1106247680;
  dword_60CB8340 = -1021313024;
  dword_60CB8344 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD6547;
  Profile__ctor(&stru_60CB82DC, Actor_majikuhandopa_build, 0x148u, &v0, &stru_60B07D98, 2);
}
