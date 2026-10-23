/* registerProfile_CourseSelect_chiyoshi_1BD4FC
 * address: 0x601BD4FC   size: 872   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int registerProfile_CourseSelect_chiyoshi_1BD4FC()
{
  _DWORD *v0; // r0
  _DWORD *v1; // r0
  sead__SafeString v3[4]; // [sp+10h] [bp-20h] BYREF

  dword_60C8AB74 = 0;
  dword_60C8AB78 = 0;
  dword_60C8AB7C = 0;
  v3[0].vtable = &sead__SafeStringBase__vtable;
  v3[0].cstr = (char *)&unk_60ABFEB3;
  Profile__ctor(&stru_60C8AB80, Actor_CourseSelect_chiyoshi_build, 0x358u, v3, 0, 0);
  v3[0].vtable = &sead__SafeStringBase__vtable;
  *v0 = &off_60BD6944;
  v3[0].cstr = (char *)&unk_60ABFECE;
  Profile__ctor(&stru_60C8AB98, Actor_CourseSelect_chiyoshi_build, 0x359u, v3, 0, 0);
  *v1 = &off_60BD6950;
  dword_60C8ABB4 = CurrentStateID + 1;
  dword_60C8ABB8 = 144;
  dword_60C8ABBC = 1;
  dword_60C8ABC0 = 148;
  dword_60C8ABC4 = 1;
  dword_60C8ABC8 = 152;
  dword_60C8ABCC = 1;
  dword_60C8ABB0 = (int)&off_60BD6AE4;
  dword_60C8ABD0 = (int)&NullState;
  dword_60C8ABDC = 156;
  dword_60C8ABE0 = 1;
  dword_60C8ABE4 = 160;
  dword_60C8ABE8 = 1;
  dword_60C8ABEC = 164;
  dword_60C8ABF0 = 1;
  stru_60C8ABD4.vtable = &off_60BD6AE4;
  stru_60C8ABD4.id = CurrentStateID + 2;
  dword_60C8ABF4 = (int)&NullState;
  dword_60C8AC00 = 168;
  dword_60C8AC04 = 1;
  dword_60C8AC08 = 172;
  dword_60C8AC0C = 1;
  dword_60C8AC10 = 176;
  dword_60C8AC14 = 1;
  dword_60C8ABF8 = (int)&off_60BD6AE4;
  *(_DWORD *)algn_60C8ABFC = CurrentStateID + 3;
  dword_60C8AC18 = (int)&NullState;
  dword_60C8AC24 = 180;
  dword_60C8AC28 = 1;
  dword_60C8AC2C = 184;
  dword_60C8AC30 = 1;
  dword_60C8AC34 = 188;
  dword_60C8AC38 = 1;
  dword_60C8AC1C = (int)&off_60BD6AE4;
  unk_60C8AC20 = CurrentStateID + 4;
  dword_60C8AC3C = (int)&NullState;
  dword_60C8AC48 = 192;
  dword_60C8AC4C = 1;
  dword_60C8AC50 = 196;
  dword_60C8AC54 = 1;
  dword_60C8AC58 = 200;
  dword_60C8AC5C = 1;
  dword_60C8AC40 = (int)&off_60BD6AE4;
  *(_DWORD *)algn_60C8AC44 = CurrentStateID + 5;
  dword_60C8AC60 = (int)&NullState;
  dword_60C8AC6C = 204;
  dword_60C8AC70 = 1;
  dword_60C8AC74 = 208;
  dword_60C8AC78 = 1;
  dword_60C8AC7C = 212;
  dword_60C8AC80 = 1;
  dword_60C8AC64 = (int)&off_60BD6AE4;
  unk_60C8AC68 = CurrentStateID + 6;
  dword_60C8AC84 = (int)&NullState;
  dword_60C8AC90 = 216;
  dword_60C8AC94 = 1;
  dword_60C8AC98 = 220;
  dword_60C8AC9C = 1;
  dword_60C8ACA0 = 224;
  dword_60C8ACA4 = 1;
  dword_60C8AC88 = (int)&off_60BD6AE4;
  *(_DWORD *)algn_60C8AC8C = CurrentStateID + 7;
  dword_60C8ACA8 = (int)&NullState;
  dword_60C8ACB4 = 228;
  dword_60C8ACB8 = 1;
  dword_60C8ACBC = 232;
  dword_60C8ACC0 = 1;
  dword_60C8ACC4 = 236;
  dword_60C8ACC8 = 1;
  dword_60C8ACAC = (int)&off_60BD6AE4;
  unk_60C8ACB0 = CurrentStateID + 8;
  dword_60C8ACCC = (int)&NullState;
  dword_60C8ACD8 = 288;
  dword_60C8ACDC = 1;
  dword_60C8ACE0 = 292;
  dword_60C8ACE4 = 1;
  dword_60C8ACE8 = 296;
  dword_60C8ACEC = 1;
  dword_60C8ACD0 = (int)&off_60BD6AE4;
  *(_DWORD *)algn_60C8ACD4 = CurrentStateID + 9;
  dword_60C8ACF0 = (int)&NullState;
  dword_60C8ACFC = 324;
  dword_60C8AD00 = 1;
  dword_60C8AD04 = 328;
  dword_60C8AD08 = 1;
  dword_60C8AD0C = 332;
  dword_60C8AD10 = 1;
  dword_60C8ACF4 = (int)&off_60BD6AE4;
  unk_60C8ACF8 = CurrentStateID + 10;
  dword_60C8AD14 = (int)&NullState;
  CurrentStateID += 11;
  unk_60C8AD1C = CurrentStateID;
  unk_60C8AD20 = 348;
  dword_60C8AD24 = 1;
  dword_60C8AD28 = 352;
  dword_60C8AD2C = 1;
  dword_60C8AD30 = 356;
  dword_60C8AD34 = 1;
  dword_60C8AD18 = (int)&off_60BD6AE4;
  dword_60C8AD38 = (int)&NullState;
  return 1;
}
