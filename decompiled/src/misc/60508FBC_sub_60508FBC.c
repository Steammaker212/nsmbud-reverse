/* sub_60508FBC
 * address: 0x60508FBC   size: 640   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_60508FBC()
{
  dword_60CA7B58 = 0;
  dword_60CA7B5C = 0;
  dword_60CA7B60 = 0;
  dword_60CA7AFC = CurrentStateID + 1;
  dword_60CA7AF8 = (int)&off_60BFF364;
  dword_60CA7B00 = (int)sub_60508488;
  dword_60CA7B04 = 0;
  dword_60CA7B08 = (int)sub_605084AC;
  dword_60CA7B0C = 0;
  dword_60CA7B10 = (int)nullsub_4200;
  dword_60CA7B14 = 0;
  CurrentStateID += 2;
  dword_60CA7B1C = CurrentStateID;
  dword_60CA7B18 = (int)&off_60BFF364;
  dword_60CA7B20 = (int)nullsub_4201;
  dword_60CA7B24 = 0;
  dword_60CA7B28 = (int)nullsub_4202;
  dword_60CA7B2C = 0;
  dword_60CA7B30 = (int)nullsub_4203;
  dword_60CA7B34 = 0;
  dword_60CA7C40[0] = (int)&sead__SafeStringBase__vtable;
  unk_60CA7C44 = "Label";
  unk_60CA7C48 = &sead__SafeStringBase__vtable;
  dword_60CA7C4C = (int)"ScrollL";
  dword_60CA7C50 = (int)&sead__SafeStringBase__vtable;
  dword_60CA7C54 = (int)"ScrollR";
  dword_60CA7C58 = (int)&sead__SafeStringBase__vtable;
  dword_60CA7C5C = (int)"Select";
  dword_60CA7C60 = (int)&sead__SafeStringBase__vtable;
  dword_60CA7C64 = (int)"Grey";
  dword_60CA7C68 = (int)&sead__SafeStringBase__vtable;
  dword_60CA7C6C = (int)"UnselectOutL";
  dword_60CA7C70 = (int)&sead__SafeStringBase__vtable;
  dword_60CA7C74 = (int)"UnselectInL";
  dword_60CA7C78 = (int)&sead__SafeStringBase__vtable;
  dword_60CA7C7C = (int)"UnselectOutR";
  dword_60CA7C80 = (int)&sead__SafeStringBase__vtable;
  dword_60CA7C84 = (int)"UnselectInR";
  dword_60CA7C88 = (int)&sead__SafeStringBase__vtable;
  dword_60CA7C8C = (int)"InNew";
  dword_60CA7C90 = (int)&sead__SafeStringBase__vtable;
  dword_60CA7C94 = (int)"InBest";
  dword_60CA7C98 = (int)&sead__SafeStringBase__vtable;
  dword_60CA7C9C = (int)"OutNew";
  dword_60CA7CA0 = (int)&sead__SafeStringBase__vtable;
  dword_60CA7CA4 = (int)"OutBest";
  dword_60CA7CA8 = (int)&sead__SafeStringBase__vtable;
  dword_60CA7CAC = (int)"WaitNew";
  sub_60000288();
  dword_60CA7CB0[0] = (int)&sead__SafeStringBase__vtable;
  unk_60CA7CB4 = "G_Label_00";
  unk_60CA7CB8 = &sead__SafeStringBase__vtable;
  dword_60CA7CBC = (int)"G_Scroll_00";
  dword_60CA7CC0 = (int)&sead__SafeStringBase__vtable;
  dword_60CA7CC4 = (int)"G_Scroll_00";
  dword_60CA7CC8 = (int)&sead__SafeStringBase__vtable;
  dword_60CA7CCC = (int)"G_Pack_00";
  dword_60CA7CD0 = (int)&sead__SafeStringBase__vtable;
  dword_60CA7CD4 = (int)"G_Pack_00";
  dword_60CA7CD8 = (int)&sead__SafeStringBase__vtable;
  dword_60CA7CDC = (int)"G_Pack_00";
  dword_60CA7CE0 = (int)&sead__SafeStringBase__vtable;
  dword_60CA7CE4 = (int)"G_Pack_00";
  dword_60CA7CE8 = (int)&sead__SafeStringBase__vtable;
  dword_60CA7CEC = (int)"G_Pack_00";
  dword_60CA7CF0 = (int)&sead__SafeStringBase__vtable;
  dword_60CA7CF4 = (int)"G_Pack_00";
  dword_60CA7CF8 = (int)&sead__SafeStringBase__vtable;
  dword_60CA7CFC = (int)"G_New_00";
  dword_60CA7D00 = (int)&sead__SafeStringBase__vtable;
  dword_60CA7D04 = (int)"G_BestTime_00";
  dword_60CA7D08 = (int)&sead__SafeStringBase__vtable;
  dword_60CA7D0C = (int)"G_New_00";
  dword_60CA7D10 = (int)&sead__SafeStringBase__vtable;
  dword_60CA7D14 = (int)"G_BestTime_00";
  dword_60CA7D18 = (int)&sead__SafeStringBase__vtable;
  dword_60CA7D1C = (int)"G_Loop_00";
  return sub_60000288();
}
