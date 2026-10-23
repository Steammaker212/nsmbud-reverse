/* happy_end_ref
 * address: 0x603AABC8   size: 496   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *happy_end_ref()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  dword_60C97B10 = (int)&sead__SafeStringBase__vtable;
  unk_60C97B14 = "peach";
  unk_60C97B18 = &sead__SafeStringBase__vtable;
  dword_60C97B1C = (int)"peach";
  dword_60C97A54 = (int)&sead__SafeStringBase__vtable;
  dword_60C97A58 = (int)"wait";
  dword_60C97A5C = 1065353216;
  dword_60C97A60 = 1;
  byte_60C97A64 = 1;
  dword_60C97A68 = (int)&sead__SafeStringBase__vtable;
  dword_60C97A6C = (int)"happy_end";
  dword_60C97A70 = 1065353216;
  dword_60C97A74 = 0;
  byte_60C97A78 = 1;
  dword_60C97A7C = (int)&sead__SafeStringBase__vtable;
  dword_60C97A80 = (int)"happy_end_st_wait";
  dword_60C97A84 = 1065353216;
  dword_60C97A88 = 1;
  byte_60C97A8C = 1;
  sub_60000288();
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC59D6;
  Profile__ctor(&stru_60C97A90, Actor_ShortPlay_result_level_Peach_build, 0x2E4u, &v1, &stru_60B00AA0, 2);
  dword_60C97AAC = CurrentStateID + 1;
  dword_60C97AA8 = (int)&off_60BF4E1C;
  dword_60C97AB0 = (int)sub_603AAE8C;
  dword_60C97AB4 = 0;
  dword_60C97AB8 = (int)sub_603AAE9C;
  dword_60C97ABC = 0;
  dword_60C97AC0 = (int)nullsub_3536;
  dword_60C97AC4 = 0;
  unk_60C97AC8 = &off_60BF4E1C;
  unk_60C97ACC = CurrentStateID + 2;
  CurrentStateID += 3;
  dword_60C97AEC = CurrentStateID;
  dword_60C97AD0 = (int)sub_603AAEAC;
  dword_60C97AE8 = (int)&off_60BF4E1C;
  dword_60C97AD4 = 0;
  dword_60C97AF0 = (int)sub_603AAF44;
  dword_60C97AD8 = (int)sub_603AAEBC;
  dword_60C97AF4 = 0;
  dword_60C97ADC = 0;
  dword_60C97AF8 = (int)sub_603AAF54;
  dword_60C97AE0 = (int)nullsub_3537;
  dword_60C97AE4 = 0;
  dword_60C97AFC = 0;
  dword_60C97B00 = (int)nullsub_3538;
  dword_60C97B04 = 0;
  return &dword_60C97AE8;
}
