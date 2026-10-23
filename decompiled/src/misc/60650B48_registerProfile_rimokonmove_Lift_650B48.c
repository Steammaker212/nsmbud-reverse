/* registerProfile_rimokonmove_Lift_650B48
 * address: 0x60650B48   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_rimokonmove_Lift_650B48())()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60CB612C = 0;
  dword_60CB6130 = 0;
  dword_60CB6134 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD56B8;
  Profile__ctor(&stru_60CB6138, Actor_rimokonmove_Lift_build, 0xF4u, &v1, &stru_60B075A4, 2);
  dword_60CB6154 = CurrentStateID + 1;
  dword_60CB6150 = (int)&off_60C13FAC;
  dword_60CB6158 = (int)nullsub_250;
  dword_60CB615C = 0;
  dword_60CB6160 = (int)SE_OBJ_RC_CONTROL_ON_ref_3;
  dword_60CB6164 = 0;
  dword_60CB6168 = (int)nullsub_5024;
  dword_60CB616C = 0;
  stru_60CB6170.vtable = &off_60C13FAC;
  stru_60CB6170.id = CurrentStateID + 2;
  dword_60CB6178 = (int)nullsub_5025;
  dword_60CB617C = 0;
  dword_60CB6180 = (int)&loc_6064F258;
  dword_60CB6184 = 0;
  dword_60CB6188 = (int)nullsub_5026;
  dword_60CB618C = 0;
  CurrentStateID += 3;
  dword_60CB6194 = CurrentStateID;
  dword_60CB6190 = (int)&off_60C13FAC;
  dword_60CB6198 = (int)nullsub_5027;
  dword_60CB619C = 0;
  dword_60CB61A0 = (int)sub_6064F8E8;
  dword_60CB61A4 = 0;
  dword_60CB61A8 = (int)nullsub_251;
  dword_60CB61AC = 0;
  return nullsub_251;
}
