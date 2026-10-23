/* sub_6067D2B4
 * address: 0x6067D2B4   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_6067D2B4()
{
  dword_60CB7FC0 = 0x2000000;
  dword_60CB7FD4 = (int)&sead__SafeStringBase__vtable;
  dword_60CB7FD8 = (int)"lift_torokkoA";
  dword_60CB7FDC = (int)&sead__SafeStringBase__vtable;
  dword_60CB7FE0 = (int)"lift_torokkoB";
  dword_60CB7FE4 = (int)&sead__SafeStringBase__vtable;
  dword_60CB7FE8 = (int)"lift_torokkoC";
  sub_60000288();
  dword_60CB7FEC = (int)&sead__SafeStringBase__vtable;
  dword_60CB7FF0 = (int)"normal";
  dword_60CB7FF4 = (int)&sead__SafeStringBase__vtable;
  dword_60CB7FF8 = (int)"shock";
  dword_60CB7FFC = (int)&sead__SafeStringBase__vtable;
  dword_60CB8000 = (int)"shock_head";
  dword_60CB8004 = (int)&sead__SafeStringBase__vtable;
  dword_60CB8008 = (int)"normal_head";
  dword_60CB800C = (int)&sead__SafeStringBase__vtable;
  dword_60CB8010 = (int)"touch_head";
  sub_60000288();
  dword_60CB7FC4 = (int)&sead__SafeStringBase__vtable;
  unk_60CB7FC8 = "lift_torokkoA2";
  unk_60CB7FCC = &sead__SafeStringBase__vtable;
  unk_60CB7FD0 = "lift_torokkoA";
  return sub_60000288();
}
