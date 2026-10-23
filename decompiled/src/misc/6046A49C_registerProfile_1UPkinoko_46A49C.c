/* registerProfile_1UPkinoko_46A49C
 * address: 0x6046A49C   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_1UPkinoko_46A49C()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60C9D500 = 0;
  dword_60C9D504 = 0;
  dword_60C9D508 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AC991E;
  Profile__ctor(&stru_60C9D50C, Actor_1UPkinoko_build, 0x255u, &v0, &stru_60B02794, 16406);
}
