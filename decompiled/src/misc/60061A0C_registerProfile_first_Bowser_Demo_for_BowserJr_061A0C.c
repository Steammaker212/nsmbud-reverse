/* registerProfile_first_Bowser_Demo_for_BowserJr_061A0C
 * address: 0x60061A0C   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_first_Bowser_Demo_for_BowserJr_061A0C())()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-10h] BYREF

  dword_60C80F50 = 0;
  dword_60C80F54 = 0;
  dword_60C80F58 = 0;
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60ABB83E;
  Profile__ctor(&stru_60C80F5C, Actor_first_Bowser_Demo_for_BowserJr_build, 0x2D0u, &v2, 0, 0);
  *v0 = &off_60BC5BA8;
  dword_60C80F78 = CurrentStateID + 1;
  dword_60C80F74 = (int)&off_60BC604C;
  dword_60C80F7C = (int)jc_demo_W8_appear_ref;
  dword_60C80F80 = 0;
  dword_60C80F84 = (int)SE_VOC_JR_ref_2;
  dword_60C80F88 = 0;
  dword_60C80F8C = (int)nullsub_2554;
  dword_60C80F90 = 0;
  unk_60C80F94 = &off_60BC604C;
  unk_60C80F98 = CurrentStateID + 2;
  dword_60C80F9C = (int)jc_demo_W8_magic_ref;
  dword_60C80FA0 = 0;
  dword_60C80FA4 = (int)nullsub_2555;
  dword_60C80FA8 = 0;
  dword_60C80FAC = (int)nullsub_2556;
  dword_60C80FB0 = 0;
  CurrentStateID += 3;
  dword_60C80FB8 = CurrentStateID;
  dword_60C80FB4 = (int)&off_60BC604C;
  dword_60C80FBC = (int)nullsub_2557;
  dword_60C80FC0 = 0;
  dword_60C80FC4 = (int)nullsub_2558;
  dword_60C80FC8 = 0;
  dword_60C80FCC = (int)nullsub_2559;
  dword_60C80FD0 = 0;
  return nullsub_2559;
}
