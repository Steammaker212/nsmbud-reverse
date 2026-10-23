/* registerProfile_ball_surekoin_child_5F268C
 * address: 0x605F268C   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_ball_surekoin_child_5F268C()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD2DF3;
  Profile__ctor(&stru_60CB2128, Actor_ball_surekoin_child_build, 0x1B5u, &v1, &stru_60B05D78, 2);
  dword_60CB2144 = ++CurrentStateID;
  dword_60CB2140 = (int)&off_60C0C264;
  dword_60CB2148 = (int)sub_605F2044;
  dword_60CB214C = 0;
  dword_60CB2150 = (int)sub_605F20A0;
  dword_60CB2154 = 0;
  dword_60CB2158 = (int)nullsub_4824;
  dword_60CB215C = 0;
  return &dword_60CB2140;
}
