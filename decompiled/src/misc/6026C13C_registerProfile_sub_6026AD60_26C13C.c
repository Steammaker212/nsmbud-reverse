/* registerProfile_sub_6026AD60_26C13C
 * address: 0x6026C13C   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_sub_6026AD60_26C13C()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60C8E768 = 0;
  dword_60C8E76C = 0;
  dword_60C8E770 = 0;
  dword_60C8E778 = ++CurrentStateID;
  dword_60C8E774 = (int)&off_60BDC540;
  dword_60C8E77C = (int)sub_6026AA50;
  dword_60C8E780 = 0;
  dword_60C8E784 = (int)&loc_6026AAE8;
  dword_60C8E788 = 0;
  dword_60C8E78C = (int)nullsub_3114;
  dword_60C8E790 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AC2B14;
  Profile__ctor(&stru_60C8E794, sub_6026AD60, 0x274u, &v0, &stru_60AFDB1C, 16);
}
