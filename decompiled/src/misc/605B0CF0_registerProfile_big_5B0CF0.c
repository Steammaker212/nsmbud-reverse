/* registerProfile_big_5B0CF0
 * address: 0x605B0CF0   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_big_5B0CF0()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD2400;
  Profile__ctor(&stru_60CB0338, Actor_big_build, 0x320u, &v1, &stru_60B0529C, 2);
  dword_60CB0354 = ++CurrentStateID;
  dword_60CB0350 = (int)&off_60C0918C;
  dword_60CB0358 = (int)nullsub_4730;
  dword_60CB035C = 0;
  dword_60CB0360 = (int)nullsub_4731;
  dword_60CB0364 = 0;
  dword_60CB0368 = (int)nullsub_4732;
  dword_60CB036C = 0;
  return &dword_60CB0350;
}
