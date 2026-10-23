/* registerProfile_W8course_BowserJr_for_atarimove_Lift_parentchild_obuje_107014
 * address: 0x60107014   size: 512   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_W8course_BowserJr_for_atarimove_Lift_parentchild_obuje_107014()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60C86260 = 0;
  dword_60C86264 = 0;
  dword_60C86268 = 0;
  dword_60C861B4 = CurrentStateID + 1;
  dword_60C861B0 = (int)&off_60BCFDC4;
  dword_60C861B8 = (int)sub_6010577C;
  dword_60C861BC = 0;
  dword_60C861C0 = (int)sub_60105808;
  dword_60C861C4 = 0;
  dword_60C861C8 = (int)sub_60105850;
  dword_60C861CC = 0;
  dword_60C861D0 = (int)&off_60BCFDC4;
  *(_DWORD *)algn_60C861D4 = CurrentStateID + 2;
  dword_60C861D8 = (int)nullsub_2798;
  dword_60C861DC = 0;
  dword_60C861E0 = (int)sub_601058A0;
  dword_60C861E4 = 0;
  dword_60C861E8 = (int)nullsub_2799;
  dword_60C861EC = 0;
  stru_60C861F0.vtable = &off_60BCFDC4;
  stru_60C861F0.id = CurrentStateID + 3;
  dword_60C861F8 = (int)sub_601058A8;
  dword_60C861FC = 0;
  dword_60C86200 = (int)sub_60105960;
  dword_60C86204 = 0;
  dword_60C86208 = (int)sub_60105A68;
  dword_60C8620C = 0;
  CurrentStateID += 4;
  dword_60C86214 = CurrentStateID;
  dword_60C86210 = (int)&off_60BCFDC4;
  dword_60C86218 = (int)sub_60105AA8;
  dword_60C8621C = 0;
  dword_60C86220 = (int)SE_OBJ_CMN_SPLASH_LAVA_ref_105AE0;
  dword_60C86224 = 0;
  dword_60C86228 = (int)nullsub_2800;
  dword_60C8622C = 0;
  dword_60C86250 = (int)(float)((float)(2147500000.0 * 75.0) / 180.0);
  dword_60C86254 = (int)(float)((float)(2147500000.0 * 40.0) / 180.0);
  dword_60C86258 = (int)(float)((float)(2147500000.0 * 0.0) / 180.0);
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60ABE111;
  dword_60C8625C = (int)(float)((float)(2147500000.0 * 0.0) / 180.0);
  Profile__ctor(
    &stru_60C86230,
    Actor_W8course_BowserJr_for_atarimove_Lift_parentchild_obuje_build,
    0x10Fu,
    &v0,
    &stru_60AF6174,
    2);
}
