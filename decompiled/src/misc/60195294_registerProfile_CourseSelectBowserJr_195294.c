/* registerProfile_CourseSelectBowserJr_195294
 * address: 0x60195294   size: 944   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_CourseSelectBowserJr_195294()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+Ch] [bp-2Ch] BYREF

  dword_60C89CA0 = 0;
  dword_60C89CA4 = 0;
  dword_60C89CA8 = 0;
  dword_60C89CAC = (int)&sead__SafeStringBase__vtable;
  unk_60C89CB0 = "jc_wait";
  unk_60C89CB4 = &sead__SafeStringBase__vtable;
  unk_60C89CB8 = "jc_demo_W5_excite";
  dword_60C89CBC = (int)&sead__SafeStringBase__vtable;
  dword_60C89CC0 = (int)"jc_delight";
  dword_60C89CC4 = (int)&sead__SafeStringBase__vtable;
  dword_60C89CC8 = (int)"cs_demo_W7";
  sub_60000288();
  dword_60C89CCC = (int)&sead__SafeStringBase__vtable;
  unk_60C89CD0 = "jc_wait";
  unk_60C89CD4 = &sead__SafeStringBase__vtable;
  unk_60C89CD8 = "jc_demo_W5_excite";
  dword_60C89CDC = (int)&sead__SafeStringBase__vtable;
  dword_60C89CE0 = (int)"jc_delight";
  dword_60C89CE4 = (int)&sead__SafeStringBase__vtable;
  dword_60C89CE8 = (int)"cs_demo_W7";
  sub_60000288();
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60ABF9FC;
  Profile__ctor(&stru_60C89B38, Actor_CourseSelectBowserJr_build, 0x38Au, &v2, 0, 0);
  *v0 = &off_60BD5C54;
  dword_60C89B54 = CurrentStateID + 1;
  dword_60C89B50 = (int)&off_60BD5CC0;
  dword_60C89B58 = (int)nullsub_2896;
  dword_60C89B5C = 0;
  dword_60C89B60 = (int)sub_601958D4;
  dword_60C89B64 = 0;
  dword_60C89B68 = (int)nullsub_2897;
  dword_60C89B6C = 0;
  unk_60C89B70 = &off_60BD5CC0;
  unk_60C89B74 = CurrentStateID + 2;
  dword_60C89B78 = (int)nullsub_2898;
  dword_60C89B7C = 0;
  dword_60C89B80 = (int)sub_6019596C;
  dword_60C89B84 = 0;
  dword_60C89B88 = (int)nullsub_2899;
  dword_60C89B8C = 0;
  unk_60C89B90 = &off_60BD5CC0;
  unk_60C89B94 = CurrentStateID + 3;
  dword_60C89B98 = (int)sub_60195B90;
  dword_60C89B9C = 0;
  dword_60C89BA0 = (int)sub_60195D60;
  dword_60C89BA4 = 0;
  dword_60C89BA8 = (int)nullsub_2900;
  dword_60C89BAC = 0;
  unk_60C89BB0 = &off_60BD5CC0;
  unk_60C89BB4 = CurrentStateID + 4;
  dword_60C89BB8 = (int)nullsub_2901;
  dword_60C89BBC = 0;
  dword_60C89BC0 = (int)sub_60195DF0;
  dword_60C89BC4 = 0;
  dword_60C89BC8 = (int)nullsub_2902;
  dword_60C89BCC = 0;
  unk_60C89BD0 = &off_60BD5CC0;
  unk_60C89BD4 = CurrentStateID + 5;
  dword_60C89BD8 = (int)sub_60195E38;
  dword_60C89BDC = 0;
  dword_60C89BE0 = (int)skl_root_ref_196010;
  dword_60C89BE4 = 0;
  dword_60C89BE8 = (int)nullsub_2903;
  dword_60C89BEC = 0;
  unk_60C89BF0 = &off_60BD5CC0;
  unk_60C89BF4 = CurrentStateID + 6;
  dword_60C89BF8 = (int)sub_60196600;
  dword_60C89BFC = 0;
  dword_60C89C00 = (int)sub_60196734;
  dword_60C89C04 = 0;
  dword_60C89C08 = (int)nullsub_2904;
  dword_60C89C0C = 0;
  unk_60C89C10 = &off_60BD5CC0;
  unk_60C89C14 = CurrentStateID + 7;
  dword_60C89C18 = (int)sub_60196AE8;
  dword_60C89C1C = 0;
  dword_60C89C20 = (int)sub_60196C38;
  dword_60C89C24 = 0;
  dword_60C89C28 = (int)nullsub_2905;
  dword_60C89C2C = 0;
  unk_60C89C30 = &off_60BD5CC0;
  unk_60C89C34 = CurrentStateID + 8;
  dword_60C89C38 = (int)sub_60196E38;
  dword_60C89C3C = 0;
  dword_60C89C40 = (int)&loc_60196E44;
  dword_60C89C44 = 0;
  dword_60C89C48 = (int)nullsub_2906;
  dword_60C89C4C = 0;
  unk_60C89C50 = &off_60BD5CC0;
  unk_60C89C54 = CurrentStateID + 9;
  CurrentStateID += 10;
  dword_60C89C74 = CurrentStateID;
  dword_60C89C58 = (int)nullsub_2907;
  dword_60C89C70 = (int)&off_60BD5CC0;
  dword_60C89C5C = 0;
  dword_60C89C78 = (int)sub_60197380;
  dword_60C89C60 = (int)sub_60197320;
  dword_60C89C7C = 0;
  dword_60C89C64 = 0;
  dword_60C89C80 = (int)sub_60197394;
  dword_60C89C68 = (int)nullsub_2908;
  dword_60C89C6C = 0;
  dword_60C89C84 = 0;
  dword_60C89C88 = (int)nullsub_2909;
  dword_60C89C8C = 0;
  return &dword_60C89C70;
}
