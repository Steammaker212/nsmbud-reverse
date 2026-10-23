/* registerProfile_koinmakikoin_72CC9C
 * address: 0x6072CC9C   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_koinmakikoin_72CC9C()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60CBD954 = 0;
  dword_60CBD958 = 0;
  dword_60CBD95C = 0;
  dword_60CBD964 = ++CurrentStateID;
  dword_60CBD960 = (int)&off_60C2224C;
  dword_60CBD968 = (int)sub_6072C710;
  dword_60CBD96C = 0;
  dword_60CBD970 = (int)sub_6072C768;
  dword_60CBD974 = 0;
  dword_60CBD978 = (int)nullsub_5361;
  dword_60CBD97C = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD951A;
  Profile__ctor(&stru_60CBD980, Actor_koinmakikoin_build, 0x1B6u, &v0, &stru_60B0A220, 0);
}
