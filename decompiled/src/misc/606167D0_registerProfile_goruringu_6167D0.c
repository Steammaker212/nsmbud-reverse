/* registerProfile_goruringu_6167D0
 * address: 0x606167D0   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_goruringu_6167D0())()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60CB3230 = 0;
  dword_60CB3234 = 0;
  dword_60CB3238 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD3AA0;
  Profile__ctor(&stru_60CB323C, Actor_goruringu_build, 0x2F3u, &v1, &stru_60B065B0, 2);
  dword_60CB3258 = CurrentStateID + 1;
  dword_60CB3254 = (int)&off_60C1018C;
  dword_60CB325C = (int)nullsub_4897;
  dword_60CB3260 = 0;
  dword_60CB3264 = (int)sub_60615EE8;
  dword_60CB3268 = 0;
  dword_60CB326C = (int)nullsub_4898;
  dword_60CB3270 = 0;
  unk_60CB3274 = &off_60C1018C;
  unk_60CB3278 = CurrentStateID + 2;
  dword_60CB327C = (int)nullsub_4899;
  dword_60CB3280 = 0;
  dword_60CB3284 = (int)SE_SYS_GOAL_RING_ref;
  dword_60CB3288 = 0;
  dword_60CB328C = (int)nullsub_4900;
  dword_60CB3290 = 0;
  CurrentStateID += 3;
  dword_60CB3298 = CurrentStateID;
  dword_60CB3294 = (int)&off_60C1018C;
  dword_60CB329C = (int)nullsub_4901;
  dword_60CB32A0 = 0;
  dword_60CB32A4 = (int)nullsub_4902;
  dword_60CB32A8 = 0;
  dword_60CB32AC = (int)nullsub_4903;
  dword_60CB32B0 = 0;
  return nullsub_4903;
}
