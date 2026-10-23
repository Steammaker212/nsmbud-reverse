/* registerProfile_sub_606D9680_6D9BD0
 * address: 0x606D9BD0   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_sub_606D9680_6D9BD0()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60CBB82C = 0;
  dword_60CBB828 = 0;
  dword_60CBB824 = 0;
  dword_60CBB820 = 0;
  dword_60CBB830 = -1056964608;
  dword_60CBB834 = 1098907648;
  dword_60CBB838 = 1090519040;
  dword_60CBB83C = -1048576000;
  dword_60CBB840 = 0;
  dword_60CBB848 = ++CurrentStateID;
  dword_60CBB844 = (int)&off_60C1E93C;
  dword_60CBB84C = (int)nullsub_5257;
  dword_60CBB850 = 0;
  dword_60CBB854 = (int)nullsub_5258;
  dword_60CBB858 = 0;
  dword_60CBB85C = (int)nullsub_5259;
  dword_60CBB860 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD7EB3;
  Profile__ctor(&stru_60CBB864, sub_606D9680, 0x2A0u, &v0, &stru_60B08EC4, 0);
}
