/* registerProfile_chibiyoshi_cloud_5EE390
 * address: 0x605EE390   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_chibiyoshi_cloud_5EE390()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD2CD5;
  Profile__ctor(&stru_60CB1E24, Actor_chibiyoshi_cloud_build, 0x1C2u, &v1, &stru_60B05C7C, 2070);
  dword_60CB1E40 = ++CurrentStateID;
  dword_60CB1E44 = 292;
  dword_60CB1E48 = 1;
  dword_60CB1E4C = 296;
  dword_60CB1E50 = 1;
  dword_60CB1E54 = 300;
  dword_60CB1E58 = 1;
  dword_60CB1E3C = (int)&off_60C0BC6C;
  dword_60CB1E5C = (int)&dword_60CB1828;
  return &dword_60CB1E3C;
}
