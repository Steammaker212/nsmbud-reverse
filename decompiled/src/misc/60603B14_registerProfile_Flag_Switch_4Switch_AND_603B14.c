/* registerProfile_Flag_Switch_4Switch_AND_603B14
 * address: 0x60603B14   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_Flag_Switch_4Switch_AND_603B14()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD336B;
  Profile__ctor(&stru_60CB28D0, Actor_Flag_Switch_4Switch_AND_build, 1u, &v1, &stru_60B0621C, 0);
  dword_60CB28EC = ++CurrentStateID;
  dword_60CB28E8 = (int)&off_60C0EDD4;
  dword_60CB28F0 = (int)nullsub_4849;
  dword_60CB28F4 = 0;
  dword_60CB28F8 = (int)sub_60603854;
  dword_60CB28FC = 0;
  dword_60CB2900 = (int)nullsub_4850;
  dword_60CB2904 = 0;
  return &dword_60CB28E8;
}
