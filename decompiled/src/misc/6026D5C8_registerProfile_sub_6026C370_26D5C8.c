/* registerProfile_sub_6026C370_26D5C8
 * address: 0x6026D5C8   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_sub_6026C370_26D5C8()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60C8E7B4 = 0;
  dword_60C8E7B8 = 0;
  dword_60C8E7BC = 0;
  dword_60C8E7C4 = ++CurrentStateID;
  dword_60C8E7C0 = (int)&off_60BDC620;
  dword_60C8E7C8 = (int)sub_6026C250;
  dword_60C8E7CC = 0;
  dword_60C8E7D0 = (int)sub_6026C260;
  dword_60C8E7D4 = 0;
  dword_60C8E7D8 = (int)nullsub_3115;
  dword_60C8E7DC = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AC2B21;
  Profile__ctor(&stru_60C8E7E0, sub_6026C370, 0x75u, &v0, &stru_60AFDB88, 0);
}
