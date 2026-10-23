/* registerProfile_CourseSelectretaairship_BowserJr_1F37F4
 * address: 0x601F37F4   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_CourseSelectretaairship_BowserJr_1F37F4())()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-10h] BYREF

  dword_60C8B92C = 0;
  dword_60C8B930 = 0;
  dword_60C8B934 = 0;
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60AC1B61;
  Profile__ctor(&stru_60C8B938, Actor_CourseSelectretaairship_BowserJr_build, 0x36Fu, &v2, 0, 0);
  *v0 = &off_60BD733C;
  dword_60C8B954 = CurrentStateID + 1;
  dword_60C8B950 = (int)&off_60BD73B0;
  dword_60C8B958 = (int)nullsub_2972;
  dword_60C8B95C = 0;
  dword_60C8B960 = (int)nullsub_2973;
  dword_60C8B964 = 0;
  dword_60C8B968 = (int)nullsub_2974;
  dword_60C8B96C = 0;
  stru_60C8B970.vtable = &off_60BD73B0;
  stru_60C8B970.id = CurrentStateID + 2;
  dword_60C8B978 = (int)nullsub_2975;
  dword_60C8B97C = 0;
  dword_60C8B980 = (int)nullsub_2976;
  dword_60C8B984 = 0;
  dword_60C8B988 = (int)nullsub_2977;
  dword_60C8B98C = 0;
  unk_60C8B990 = &off_60BD73B0;
  unk_60C8B994 = CurrentStateID + 3;
  dword_60C8B998 = (int)sub_601F3048;
  dword_60C8B99C = 0;
  dword_60C8B9A0 = (int)dword_601F3060;
  dword_60C8B9A4 = 0;
  dword_60C8B9A8 = (int)nullsub_2978;
  dword_60C8B9AC = 0;
  CurrentStateID += 4;
  dword_60C8B9B4 = CurrentStateID;
  dword_60C8B9B0 = (int)&off_60BD73B0;
  dword_60C8B9B8 = (int)sub_601F3114;
  dword_60C8B9BC = 0;
  dword_60C8B9C0 = (int)nullsub_2979;
  dword_60C8B9C4 = 0;
  dword_60C8B9C8 = (int)nullsub_2980;
  dword_60C8B9CC = 0;
  return nullsub_2980;
}
