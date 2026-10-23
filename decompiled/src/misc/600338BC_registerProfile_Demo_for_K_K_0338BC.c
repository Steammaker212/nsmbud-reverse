/* registerProfile_Demo_for_K_K_0338BC
 * address: 0x600338BC   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_Demo_for_K_K_0338BC())()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-10h] BYREF

  dword_60C7FC70 = 0;
  dword_60C7FC74 = 0;
  dword_60C7FC78 = 0;
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = "デモ用K.K.";
  Profile__ctor(&stru_60C7FC7C, Actor_Demo_for_K_K_build, 0x2D4u, &v2, 0, 0);
  *v0 = &off_60BC23A4;
  dword_60C7FC98 = CurrentStateID + 1;
  dword_60C7FC94 = (int)&off_60BC2628;
  dword_60C7FC9C = (int)nullsub_2491;
  dword_60C7FCA0 = 0;
  dword_60C7FCA4 = (int)nullsub_2492;
  dword_60C7FCA8 = 0;
  dword_60C7FCAC = (int)nullsub_2493;
  dword_60C7FCB0 = 0;
  unk_60C7FCB4 = &off_60BC2628;
  unk_60C7FCB8 = CurrentStateID + 2;
  dword_60C7FCBC = (int)power_up_ref;
  dword_60C7FCC0 = 0;
  dword_60C7FCC4 = (int)sub_60033168;
  dword_60C7FCC8 = 0;
  dword_60C7FCCC = (int)nullsub_129;
  dword_60C7FCD0 = 0;
  CurrentStateID += 3;
  dword_60C7FCD8 = CurrentStateID;
  dword_60C7FCD4 = (int)&off_60BC2628;
  dword_60C7FCDC = (int)demo_scale_up_ref;
  dword_60C7FCE0 = 0;
  dword_60C7FCE4 = (int)nullsub_2494;
  dword_60C7FCE8 = 0;
  dword_60C7FCEC = (int)nullsub_2495;
  dword_60C7FCF0 = 0;
  return nullsub_2495;
}
