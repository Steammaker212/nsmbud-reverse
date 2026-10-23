/* registerProfile_shadou_2_6D5AB8
 * address: 0x606D5AB8   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_shadou_2_6D5AB8()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60CBB698 = (int)&sead__SafeStringBase__vtable;
  dword_60CBB69C = (int)"shadowkun";
  dword_60CBB6A0 = (int)&sead__SafeStringBase__vtable;
  v1.vtable = &sead__SafeStringBase__vtable;
  dword_60CBB6A4 = (int)"fukuro";
  v1.cstr = (char *)&unk_60AD7E46;
  Profile__ctor(&stru_60CBB660, Actor_shadou_2_build, 0x1CCu, &v1, 0, 2);
  dword_60CBB67C = ++CurrentStateID;
  dword_60CBB678 = (int)&off_60C1E194;
  dword_60CBB680 = (int)nullsub_5250;
  dword_60CBB684 = 0;
  dword_60CBB688 = (int)nullsub_5251;
  dword_60CBB68C = 0;
  dword_60CBB690 = (int)nullsub_5252;
  dword_60CBB694 = 0;
  return &dword_60CBB678;
}
