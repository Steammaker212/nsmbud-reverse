/* registerProfile_ice_2_61F118
 * address: 0x6061F118   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_ice_2_61F118()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  dword_60CB3684 = 0;
  dword_60CB3688 = 0;
  dword_60CB368C = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD3DCC;
  Profile__ctor(&stru_60CB3690, Actor_ice_2_build, 0xEBu, &v1, &stru_60B067A4, 2);
  dword_60CB36AC = CurrentStateID + 1;
  dword_60CB36A8 = (int)&off_60C11010;
  dword_60CB36B0 = (int)nullsub_4917;
  dword_60CB36B4 = 0;
  dword_60CB36B8 = (int)sub_6061E1D4;
  dword_60CB36BC = 0;
  dword_60CB36C0 = (int)nullsub_4918;
  dword_60CB36C4 = 0;
  CurrentStateID += 2;
  dword_60CB36CC = CurrentStateID;
  dword_60CB36C8 = (int)&off_60C11010;
  dword_60CB36D0 = (int)sub_6061E1E0;
  dword_60CB36D4 = 0;
  dword_60CB36D8 = (int)sub_6061E1EC;
  dword_60CB36DC = 0;
  dword_60CB36E0 = (int)nullsub_4919;
  dword_60CB36E4 = 0;
  dword_60CB36E8 = 1115684864;
  dword_60CB36EC = 1115684864;
  return &dword_60CB36E8;
}
