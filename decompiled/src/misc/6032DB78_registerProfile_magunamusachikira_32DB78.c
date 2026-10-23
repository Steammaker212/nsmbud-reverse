/* registerProfile_magunamusachikira_32DB78
 * address: 0x6032DB78   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_magunamusachikira_32DB78()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C93D38 = 0;
  dword_60C93D3C = 0;
  dword_60C93D40 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC4A7C;
  Profile__ctor(&stru_60C93D44, Actor_magunamusachikira_build, 0x278u, &v1, &stru_60AFF8D0, 18);
  dword_60C93D60 = ++CurrentStateID;
  dword_60C93D5C = (int)&off_60BEC274;
  dword_60C93D64 = (int)sub_6032D0D0;
  dword_60C93D68 = 0;
  dword_60C93D6C = (int)&loc_6032D198;
  dword_60C93D70 = 0;
  dword_60C93D74 = (int)nullsub_3353;
  dword_60C93D78 = 0;
  return &dword_60C93D5C;
}
