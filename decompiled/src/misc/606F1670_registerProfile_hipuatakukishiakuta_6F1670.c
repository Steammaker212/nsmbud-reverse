/* registerProfile_hipuatakukishiakuta_6F1670
 * address: 0x606F1670   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_hipuatakukishiakuta_6F1670()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD842B;
  Profile__ctor(&stru_60CBC244, Actor_hipuatakukishiakuta_build, 0x1C6u, &v1, &stru_60B093D0, 2);
  dword_60CBC260 = ++CurrentStateID;
  dword_60CBC25C = (int)&off_60C2025C;
  dword_60CBC264 = (int)nullsub_5312;
  dword_60CBC268 = 0;
  dword_60CBC26C = (int)&loc_606F1254;
  dword_60CBC270 = 0;
  dword_60CBC274 = (int)nullsub_5313;
  dword_60CBC278 = 0;
  return &dword_60CBC25C;
}
