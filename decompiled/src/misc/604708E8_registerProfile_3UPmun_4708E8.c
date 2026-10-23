/* registerProfile_3UPmun_4708E8
 * address: 0x604708E8   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_3UPmun_4708E8()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60C9D844 = 0;
  dword_60C9D848 = 0;
  dword_60C9D84C = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AC99DA;
  Profile__ctor(&stru_60C9D850, Actor_3UPmun_build, 0x257u, &v0, &stru_60B028D8, 16406);
}
