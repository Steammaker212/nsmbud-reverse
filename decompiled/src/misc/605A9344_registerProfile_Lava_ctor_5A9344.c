/* registerProfile_Lava_ctor_5A9344
 * address: 0x605A9344   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_Lava_ctor_5A9344()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD2202;
  Profile__ctor(&stru_60CB009C, Lava_ctor, 0x55u, &v1, &stru_60B04F5C, 1024);
  dword_60CB00B8 = CurrentStateID + 1;
  dword_60CB00BC = 212;
  dword_60CB00C0 = 1;
  dword_60CB00C4 = 216;
  dword_60CB00C8 = 1;
  dword_60CB00CC = 220;
  dword_60CB00D0 = 1;
  dword_60CB00B4 = (int)&off_60C08570;
  dword_60CB00D4 = (int)&dword_60CB0008;
  CurrentStateID += 2;
  unk_60CB00DC = CurrentStateID;
  unk_60CB00E0 = 224;
  unk_60CB00E4 = 1;
  dword_60CB00E8 = 228;
  dword_60CB00EC = 1;
  dword_60CB00F0 = 232;
  dword_60CB00F4 = 1;
  dword_60CB00D8 = (int)&off_60C08570;
  dword_60CB00F8 = (int)&dword_60CB002C;
  return &dword_60CB002C;
}
