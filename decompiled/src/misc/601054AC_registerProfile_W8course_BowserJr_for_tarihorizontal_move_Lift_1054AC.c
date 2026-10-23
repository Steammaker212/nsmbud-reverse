/* registerProfile_W8course_BowserJr_for_tarihorizontal_move_Lift_1054AC
 * address: 0x601054AC   size: 580   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_W8course_BowserJr_for_tarihorizontal_move_Lift_1054AC())()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-10h] BYREF

  dword_60C861A0 = (int)(float)((float)(2147500000.0 * 75.0) / 180.0);
  dword_60C861A4 = (int)(float)((float)(2147500000.0 * 40.0) / 180.0);
  dword_60C861A8 = (int)(float)((float)(2147500000.0 * 0.0) / 180.0);
  dword_60C861AC = (int)(float)((float)(2147500000.0 * 0.0) / 180.0);
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60ABE0A5;
  Profile__ctor(
    &stru_60C860D8,
    Actor_W8course_BowserJr_for_tarihorizontal_move_Lift_build,
    0x10Eu,
    &v2,
    &stru_60AF6150,
    2);
  *v0 = &off_60BCFC00;
  dword_60C860F4 = CurrentStateID + 1;
  dword_60C860F0 = (int)&off_60BCFCE4;
  dword_60C860F8 = (int)sub_60103F18;
  dword_60C860FC = 0;
  dword_60C86100 = (int)sub_60103FA4;
  dword_60C86104 = 0;
  dword_60C86108 = (int)sub_60103FE0;
  dword_60C8610C = 0;
  stru_60C86110.vtable = &off_60BCFCE4;
  stru_60C86110.id = CurrentStateID + 2;
  dword_60C86118 = (int)sub_6010401C;
  dword_60C8611C = 0;
  dword_60C86120 = (int)sub_60104054;
  dword_60C86124 = 0;
  dword_60C86128 = (int)nullsub_141;
  dword_60C8612C = 0;
  unk_60C86130 = &off_60BCFCE4;
  unk_60C86134 = CurrentStateID + 3;
  dword_60C86138 = (int)sub_601040BC;
  dword_60C8613C = 0;
  dword_60C86140 = (int)sub_601040E0;
  dword_60C86144 = 0;
  dword_60C86148 = (int)nullsub_142;
  dword_60C8614C = 0;
  unk_60C86150 = &off_60BCFCE4;
  unk_60C86154 = CurrentStateID + 4;
  dword_60C86158 = (int)sub_60104150;
  dword_60C8615C = 0;
  dword_60C86160 = (int)sub_60104208;
  dword_60C86164 = 0;
  dword_60C86168 = (int)sub_60104314;
  dword_60C8616C = 0;
  CurrentStateID += 5;
  dword_60C86174 = CurrentStateID;
  dword_60C86170 = (int)&off_60BCFCE4;
  dword_60C86178 = (int)sub_60104354;
  dword_60C8617C = 0;
  dword_60C86180 = (int)SE_OBJ_CMN_SPLASH_LAVA_ref;
  dword_60C86184 = 0;
  dword_60C86188 = (int)nullsub_2797;
  dword_60C8618C = 0;
  return nullsub_2797;
}
