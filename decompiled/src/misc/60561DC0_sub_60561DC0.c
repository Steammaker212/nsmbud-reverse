/* sub_60561DC0
 * address: 0x60561DC0   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

const char *sub_60561DC0()
{
  dword_60CAE184 = CurrentStateID + 1;
  dword_60CAE180 = (int)&off_60C010C4;
  dword_60CAE188 = (int)nullsub_4613;
  dword_60CAE18C = 0;
  dword_60CAE190 = (int)sub_60560970;
  dword_60CAE194 = 0;
  dword_60CAE198 = (int)nullsub_4614;
  dword_60CAE19C = 0;
  CurrentStateID += 2;
  dword_60CAE1A4 = CurrentStateID;
  dword_60CAE1A0 = (int)&off_60C010C4;
  dword_60CAE1A8 = (int)sub_60560988;
  dword_60CAE1AC = 0;
  dword_60CAE1B0 = (int)sub_60560A90;
  dword_60CAE1B4 = 0;
  dword_60CAE1B8 = (int)sub_60560B08;
  dword_60CAE1BC = 0;
  dword_60CAE1C0 = (int)&sead__SafeStringBase__vtable;
  dword_60CAE1C4 = (int)"In";
  dword_60CAE1C8 = (int)&sead__SafeStringBase__vtable;
  dword_60CAE1CC = (int)"Out";
  dword_60CAE1D0 = (int)&sead__SafeStringBase__vtable;
  dword_60CAE1D4 = (int)"InBlackDown";
  dword_60CAE1D8 = (int)&sead__SafeStringBase__vtable;
  dword_60CAE1DC = (int)"OutBlackUp";
  dword_60CAE1E0 = (int)&sead__SafeStringBase__vtable;
  dword_60CAE1E4 = (int)"OutBlackDown";
  dword_60CAE1E8 = (int)&sead__SafeStringBase__vtable;
  dword_60CAE1EC = (int)"InBlackUp";
  dword_60CAE1F0 = (int)&sead__SafeStringBase__vtable;
  dword_60CAE1F4 = (int)"FadeIn";
  dword_60CAE1F8 = (int)&sead__SafeStringBase__vtable;
  dword_60CAE1FC = (int)"FadeOut";
  return "FadeOut";
}
