/* registerProfile_TrampolineCloud_ctor_6EE6F0
 * address: 0x606EE6F0   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_TrampolineCloud_ctor_6EE6F0())()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  dword_60CBC0B8 = 0;
  dword_60CBC0BC = 0;
  dword_60CBC0C0 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD8374;
  Profile__ctor(&stru_60CBC0C4, TrampolineCloud_ctor, 0x53u, &v1, &stru_60B0929C, 2);
  dword_60CBC0E0 = CurrentStateID + 1;
  dword_60CBC0DC = (int)&off_60C1FEFC;
  dword_60CBC0E4 = (int)nullsub_5304;
  dword_60CBC0E8 = 0;
  dword_60CBC0EC = (int)sub_606EDD58;
  dword_60CBC0F0 = 0;
  dword_60CBC0F4 = (int)nullsub_5305;
  dword_60CBC0F8 = 0;
  CurrentStateID += 2;
  dword_60CBC100 = CurrentStateID;
  dword_60CBC0FC = (int)&off_60C1FEFC;
  dword_60CBC104 = (int)sub_606EDDE0;
  dword_60CBC108 = 0;
  dword_60CBC10C = (int)sub_606EDE00;
  dword_60CBC110 = 0;
  dword_60CBC114 = (int)nullsub_5306;
  dword_60CBC118 = 0;
  return nullsub_5306;
}
