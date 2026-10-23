/* registerProfile_bana_2_59F82C
 * address: 0x6059F82C   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateBase *registerProfile_bana_2_59F82C()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD2138;
  Profile__ctor(&stru_60CAFC68, Actor_bana_2_build, 0xE2u, &v1, &stru_60B04E0C, 2);
  dword_60CAFC84 = CurrentStateID + 1;
  dword_60CAFC80 = (int)&off_60C07CF4;
  dword_60CAFC88 = (int)sub_6059EEF0;
  dword_60CAFC8C = 0;
  dword_60CAFC90 = (int)sub_6059EF1C;
  dword_60CAFC94 = 0;
  dword_60CAFC98 = (int)nullsub_4703;
  dword_60CAFC9C = 0;
  dword_60CAFCA4 = CurrentStateID + 2;
  dword_60CAFCA8 = 228;
  dword_60CAFCAC = 1;
  dword_60CAFCB0 = 232;
  dword_60CAFCB4 = 1;
  dword_60CAFCB8 = 236;
  dword_60CAFCBC = 1;
  dword_60CAFCA0 = (int)&off_60C07D08;
  dword_60CAFCC0 = (int)&dword_60CAFAC4;
  CurrentStateID += 3;
  unk_60CAFCC8 = CurrentStateID;
  unk_60CAFCCC = 196;
  unk_60CAFCD0 = 1;
  unk_60CAFCD4 = 200;
  dword_60CAFCD8 = 1;
  dword_60CAFCDC = 204;
  dword_60CAFCE0 = 1;
  dword_60CAFCC4 = (int)&off_60C07D08;
  dword_60CAFCE4 = (int)&stru_60CAFAE8;
  return &stru_60CAFAE8;
}
