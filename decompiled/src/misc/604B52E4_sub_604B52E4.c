/* sub_604B52E4
 * address: 0x604B52E4   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int (__fastcall *sub_604B52E4())(int a1)
{
  dword_60CA1B38 = 0;
  dword_60CA1B3C = 0;
  dword_60CA1B40 = 0;
  dword_60CA1B44 = (int)&sead__SafeStringBase__vtable;
  dword_60CA1B48 = (int)"InOut";
  dword_60CA1B4C = (int)&sead__SafeStringBase__vtable;
  dword_60CA1B50 = (int)"Area4";
  dword_60CA1B54 = (int)&sead__SafeStringBase__vtable;
  dword_60CA1B58 = (int)"Area3";
  dword_60CA1B5C = (int)&sead__SafeStringBase__vtable;
  dword_60CA1B60 = (int)"Area2";
  dword_60CA1B64 = (int)&sead__SafeStringBase__vtable;
  dword_60CA1B68 = (int)"Area1";
  dword_60CA1B6C = (int)&sead__SafeStringBase__vtable;
  dword_60CA1B70 = (int)"Point";
  dword_60CA1B74 = (int)&sead__SafeStringBase__vtable;
  dword_60CA1B78 = (int)"InOutAttention";
  dword_60CA1B7C = (int)&sead__SafeStringBase__vtable;
  dword_60CA1B80 = (int)"TopBottom";
  dword_60CA1B84 = (int)&sead__SafeStringBase__vtable;
  dword_60CA1B88 = (int)"LoopArrow";
  dword_60CA1B8C = (int)&sead__SafeStringBase__vtable;
  dword_60CA1B90 = (int)"OnOffCursor";
  dword_60CA1B98 = CurrentStateID + 1;
  dword_60CA1B94 = (int)&off_60BFDF90;
  dword_60CA1B9C = (int)sub_604B27B8;
  dword_60CA1BA0 = 0;
  dword_60CA1BA4 = (int)sub_604B288C;
  dword_60CA1BA8 = 0;
  dword_60CA1BAC = (int)sub_604B2CD4;
  dword_60CA1BB0 = 0;
  CurrentStateID += 2;
  stru_60CA1BB4.vtable = &off_60BFDF90;
  stru_60CA1BB4.id = CurrentStateID;
  dword_60CA1BBC = (int)sub_604B2CF0;
  dword_60CA1BC0 = 0;
  dword_60CA1BC4 = (int)sub_604B2D4C;
  dword_60CA1BC8 = 0;
  dword_60CA1BCC = (int)sub_604B2D88;
  dword_60CA1BD0 = 0;
  return sub_604B2D88;
}
