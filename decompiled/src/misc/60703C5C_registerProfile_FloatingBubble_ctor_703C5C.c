/* registerProfile_FloatingBubble_ctor_703C5C
 * address: 0x60703C5C   size: 464   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_FloatingBubble_ctor_703C5C())()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD861B;
  Profile__ctor(&stru_60CBC768, FloatingBubble_ctor, 0xECu, &v1, &stru_60B0969C, 2);
  dword_60CBC784 = CurrentStateID + 1;
  dword_60CBC780 = (int)&off_60C20C60;
  dword_60CBC788 = (int)sub_60702BE4;
  dword_60CBC78C = 0;
  dword_60CBC790 = (int)nullsub_5334;
  dword_60CBC794 = 0;
  dword_60CBC798 = (int)nullsub_5335;
  dword_60CBC79C = 0;
  unk_60CBC7A0 = &off_60C20C60;
  unk_60CBC7A4 = CurrentStateID + 2;
  dword_60CBC7A8 = (int)sub_60702C00;
  dword_60CBC7AC = 0;
  dword_60CBC7B0 = (int)&loc_60702C14;
  dword_60CBC7B4 = 0;
  dword_60CBC7B8 = (int)nullsub_5336;
  dword_60CBC7BC = 0;
  unk_60CBC7C0 = &off_60C20C60;
  unk_60CBC7C4 = CurrentStateID + 3;
  dword_60CBC7C8 = (int)sub_60702D14;
  dword_60CBC7CC = 0;
  dword_60CBC7D0 = (int)&loc_60702D28;
  dword_60CBC7D4 = 0;
  dword_60CBC7D8 = (int)nullsub_5337;
  dword_60CBC7DC = 0;
  stru_60CBC7E0.vtable = &off_60C20C60;
  stru_60CBC7E0.id = CurrentStateID + 4;
  dword_60CBC7E8 = (int)nullsub_5338;
  dword_60CBC7EC = 0;
  dword_60CBC7F0 = (int)sub_60702E2C;
  dword_60CBC7F4 = 0;
  dword_60CBC7F8 = (int)nullsub_5339;
  dword_60CBC7FC = 0;
  CurrentStateID += 5;
  dword_60CBC804 = CurrentStateID;
  dword_60CBC800 = (int)&off_60C20C60;
  dword_60CBC808 = (int)nullsub_5340;
  dword_60CBC80C = 0;
  dword_60CBC810 = (int)sub_60702F30;
  dword_60CBC814 = 0;
  dword_60CBC818 = (int)nullsub_5341;
  dword_60CBC81C = 0;
  return nullsub_5341;
}
