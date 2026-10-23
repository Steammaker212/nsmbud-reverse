/* registerProfile_ball_surekoin_parent_5F3430
 * address: 0x605F3430   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void *registerProfile_ball_surekoin_parent_5F3430()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD2E15;
  Profile__ctor(&stru_60CB2160, Actor_ball_surekoin_parent_build, 0x1B4u, &v1, &stru_60B05D9C, 0);
  dword_60CB217C = CurrentStateID + 1;
  dword_60CB2178 = (int)&off_60C0C340;
  dword_60CB2180 = (int)nullsub_4825;
  dword_60CB2184 = 0;
  dword_60CB2188 = (int)&loc_605F2844;
  dword_60CB218C = 0;
  dword_60CB2190 = (int)nullsub_4826;
  dword_60CB2194 = 0;
  CurrentStateID += 2;
  dword_60CB219C = CurrentStateID;
  dword_60CB2198 = (int)&off_60C0C340;
  dword_60CB21A0 = (int)nullsub_4827;
  dword_60CB21A4 = 0;
  dword_60CB21A8 = (int)sub_605F28FC;
  dword_60CB21AC = 0;
  dword_60CB21B0 = (int)&locret_605F2900;
  dword_60CB21B4 = 0;
  return &locret_605F2900;
}
