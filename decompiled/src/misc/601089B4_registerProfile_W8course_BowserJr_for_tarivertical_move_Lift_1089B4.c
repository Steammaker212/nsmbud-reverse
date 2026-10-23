/* registerProfile_W8course_BowserJr_for_tarivertical_move_Lift_1089B4
 * address: 0x601089B4   size: 580   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_W8course_BowserJr_for_tarivertical_move_Lift_1089B4())()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-10h] BYREF

  dword_60C8632C = (int)(float)((float)(2147500000.0 * 75.0) / 180.0);
  dword_60C86330 = (int)(float)((float)(2147500000.0 * 40.0) / 180.0);
  dword_60C86334 = (int)(float)((float)(2147500000.0 * 0.0) / 180.0);
  dword_60C86338 = (int)(float)((float)(2147500000.0 * 0.0) / 180.0);
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60ABE162;
  Profile__ctor(
    &stru_60C8626C,
    Actor_W8course_BowserJr_for_tarivertical_move_Lift_build,
    0x10Du,
    &v2,
    &stru_60AF6198,
    2);
  *v0 = &off_60BCFDD8;
  dword_60C86288 = CurrentStateID + 1;
  dword_60C86284 = (int)&off_60BCFEB0;
  dword_60C8628C = (int)sub_601074BC;
  dword_60C86290 = 0;
  dword_60C86294 = (int)sub_60107548;
  dword_60C86298 = 0;
  dword_60C8629C = (int)sub_60107584;
  dword_60C862A0 = 0;
  stru_60C862A4.vtable = &off_60BCFEB0;
  stru_60C862A4.id = CurrentStateID + 2;
  dword_60C862AC = (int)sub_601075C4;
  dword_60C862B0 = 0;
  dword_60C862B4 = (int)sub_601075FC;
  dword_60C862B8 = 0;
  dword_60C862BC = (int)nullsub_143;
  dword_60C862C0 = 0;
  unk_60C862C4 = &off_60BCFEB0;
  unk_60C862C8 = CurrentStateID + 3;
  dword_60C862CC = (int)sub_60107660;
  dword_60C862D0 = 0;
  dword_60C862D4 = (int)sub_60107684;
  dword_60C862D8 = 0;
  dword_60C862DC = (int)nullsub_144;
  dword_60C862E0 = 0;
  unk_60C862E4 = &off_60BCFEB0;
  unk_60C862E8 = CurrentStateID + 4;
  dword_60C862EC = (int)sub_601076EC;
  dword_60C862F0 = 0;
  dword_60C862F4 = (int)sub_601077A4;
  dword_60C862F8 = 0;
  dword_60C862FC = (int)sub_601078B0;
  dword_60C86300 = 0;
  CurrentStateID += 5;
  dword_60C86308 = CurrentStateID;
  dword_60C86304 = (int)&off_60BCFEB0;
  dword_60C8630C = (int)sub_601078F0;
  dword_60C86310 = 0;
  dword_60C86314 = (int)SE_OBJ_CMN_SPLASH_LAVA_ref_107928;
  dword_60C86318 = 0;
  dword_60C8631C = (int)nullsub_2801;
  dword_60C86320 = 0;
  return nullsub_2801;
}
