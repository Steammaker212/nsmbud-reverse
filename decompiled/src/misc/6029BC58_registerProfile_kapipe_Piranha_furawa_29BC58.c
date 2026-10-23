/* registerProfile_kapipe_Piranha_furawa_29BC58
 * address: 0x6029BC58   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_kapipe_Piranha_furawa_29BC58()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C8FF50 = 0;
  dword_60C8FF54 = 0;
  dword_60C8FF58 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC32E1;
  Profile__ctor(&stru_60C8FF5C, Actor_kapipe_Piranha_furawa_build, 0x1EBu, &v1, &stru_60AFE15C, 18);
  dword_60C8FF78 = ++CurrentStateID;
  dword_60C8FF7C = 676;
  dword_60C8FF80 = 1;
  dword_60C8FF84 = 680;
  dword_60C8FF88 = 1;
  dword_60C8FF8C = 684;
  dword_60C8FF90 = 1;
  dword_60C8FF74 = (int)&off_60BE10D0;
  dword_60C8FF94 = (int)&dword_60C8FD58;
  return &dword_60C8FF74;
}
