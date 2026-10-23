/* registerProfile_water_Lift_668AD0
 * address: 0x60668AD0   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_water_Lift_668AD0())()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD5C21;
  Profile__ctor(&stru_60CB6C3C, Actor_water_Lift_build, 0x166u, &v1, &stru_60B079DC, 2);
  dword_60CB6C58 = CurrentStateID + 1;
  dword_60CB6C54 = (int)&off_60C15110;
  dword_60CB6C5C = (int)sub_60666E28;
  dword_60CB6C60 = 0;
  dword_60CB6C64 = (int)sub_60666E78;
  dword_60CB6C68 = 0;
  dword_60CB6C6C = (int)nullsub_5083;
  dword_60CB6C70 = 0;
  CurrentStateID += 2;
  dword_60CB6C78 = CurrentStateID;
  dword_60CB6C74 = (int)&off_60C15110;
  dword_60CB6C7C = (int)sub_60666EB0;
  dword_60CB6C80 = 0;
  dword_60CB6C84 = (int)SE_OBJ_SUISHA_ref;
  dword_60CB6C88 = 0;
  dword_60CB6C8C = (int)nullsub_5084;
  dword_60CB6C90 = 0;
  return nullsub_5084;
}
