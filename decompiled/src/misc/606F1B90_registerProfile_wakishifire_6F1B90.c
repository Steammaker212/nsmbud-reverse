/* registerProfile_wakishifire_6F1B90
 * address: 0x606F1B90   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_wakishifire_6F1B90())()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD8459;
  Profile__ctor(&stru_60CBC284, Actor_wakishifire_build, 0x23Du, &v1, &stru_60B0942C, 0);
  dword_60CBC2A0 = CurrentStateID + 1;
  dword_60CBC29C = (int)&off_60C20338;
  dword_60CBC2A4 = (int)nullsub_5315;
  dword_60CBC2A8 = 0;
  dword_60CBC2AC = (int)sub_606F17C4;
  dword_60CBC2B0 = 0;
  dword_60CBC2B4 = (int)nullsub_5316;
  dword_60CBC2B8 = 0;
  CurrentStateID += 2;
  dword_60CBC2C0 = CurrentStateID;
  dword_60CBC2BC = (int)&off_60C20338;
  dword_60CBC2C4 = (int)nullsub_5317;
  dword_60CBC2C8 = 0;
  dword_60CBC2CC = (int)sub_606F181C;
  dword_60CBC2D0 = 0;
  dword_60CBC2D4 = (int)nullsub_270;
  dword_60CBC2D8 = 0;
  return nullsub_270;
}
