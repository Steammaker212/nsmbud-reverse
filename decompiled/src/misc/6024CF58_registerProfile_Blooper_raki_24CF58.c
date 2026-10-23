/* registerProfile_Blooper_raki_24CF58
 * address: 0x6024CF58   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_Blooper_raki_24CF58()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C8DCF8 = 0;
  dword_60C8DCFC = 0;
  dword_60C8DD00 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC2701;
  Profile__ctor(&stru_60C8DD04, Actor_Blooper_raki_build, 0x326u, &v1, &stru_60AFD730, 22);
  dword_60C8DD20 = ++CurrentStateID;
  dword_60C8DD24 = 668;
  dword_60C8DD28 = 1;
  dword_60C8DD2C = 672;
  dword_60C8DD30 = 1;
  dword_60C8DD34 = 676;
  dword_60C8DD38 = 1;
  dword_60C8DD1C = (int)&off_60BDA21C;
  dword_60C8DD3C = (int)&dword_60C914BC;
  return &dword_60C8DD1C;
}
