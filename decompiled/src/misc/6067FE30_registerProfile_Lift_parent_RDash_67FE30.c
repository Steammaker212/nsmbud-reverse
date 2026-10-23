/* registerProfile_Lift_parent_RDash_67FE30
 * address: 0x6067FE30   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_Lift_parent_RDash_67FE30()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD63DC;
  Profile__ctor(&stru_60CB8080, Actor_Lift_parent_RDash_build, 0xB9u, &v1, &stru_60B07D18, 2);
  dword_60CB809C = ++CurrentStateID;
  dword_60CB8098 = (int)&off_60C16AEC;
  dword_60CB80A0 = (int)nullsub_5129;
  dword_60CB80A4 = 0;
  dword_60CB80A8 = (int)sub_6067FBB8;
  dword_60CB80AC = 0;
  dword_60CB80B0 = (int)nullsub_5130;
  dword_60CB80B4 = 0;
  return &dword_60CB8098;
}
