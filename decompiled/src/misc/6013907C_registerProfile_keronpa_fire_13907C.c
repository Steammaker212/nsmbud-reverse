/* registerProfile_keronpa_fire_13907C
 * address: 0x6013907C   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int registerProfile_keronpa_fire_13907C()
{
  sead__SafeString v1; // [sp+10h] [bp-20h] BYREF

  dword_60C87974 = 0;
  dword_60C87978 = 0;
  dword_60C8797C = 0;
  dword_60C87980 = 1065353216;
  dword_60C87984 = 1065353216;
  dword_60C87988 = 1065353216;
  dword_60C8798C = 1072064102;
  dword_60C87990 = 1072064102;
  dword_60C87994 = 1072064102;
  dword_60C87970 = (int)(float)((float)(2147500000.0 * 11.25) / 180.0);
  dword_60C87998 = 0;
  dword_60C8799C = 0;
  dword_60C879A0 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60ABEBF1;
  Profile__ctor(&stru_60C878DC, Actor_keronpa_fire_build, 0x22Eu, &v1, &stru_60AF670C, 2);
  dword_60C878F8 = CurrentStateID + 1;
  dword_60C878FC = 192;
  dword_60C87900 = 1;
  dword_60C87904 = 196;
  dword_60C87908 = 1;
  dword_60C8790C = 200;
  dword_60C87910 = 1;
  dword_60C878F4 = (int)&off_60BD2770;
  dword_60C87914 = (int)&NullState;
  dword_60C87924 = 1;
  dword_60C87928 = 208;
  dword_60C8792C = 1;
  dword_60C87930 = 212;
  dword_60C87934 = 1;
  stru_60C87918.vtable = &off_60BD2770;
  stru_60C87918.id = CurrentStateID + 2;
  unk_60C87920 = 204;
  dword_60C87938 = (int)&NullState;
  CurrentStateID += 3;
  stru_60C8793C.id = CurrentStateID;
  unk_60C87944 = 216;
  dword_60C87948 = 1;
  dword_60C8794C = 220;
  dword_60C87950 = 1;
  dword_60C87954 = 224;
  dword_60C87958 = 1;
  stru_60C8793C.vtable = &off_60BD2770;
  dword_60C8795C = (int)&NullState;
  return 1;
}
