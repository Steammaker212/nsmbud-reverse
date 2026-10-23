/* Player_ref
 * address: 0x6051AD94   size: 372   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*Player_ref())()
{
  dword_60CA89E8 = 0;
  dword_60CA89EC = 0;
  dword_60CA89F0 = 0;
  dword_60CA89F4 = (int)&sead__SafeStringBase__vtable;
  dword_60CA89F8 = (int)"Player";
  dword_60CA89FC = (int)&sead__SafeStringBase__vtable;
  dword_60CA8A00 = (int)"Indi";
  dword_60CA8A04 = (int)&sead__SafeStringBase__vtable;
  dword_60CA8A08 = (int)"Meter";
  dword_60CA8A0C = (int)&sead__SafeStringBase__vtable;
  dword_60CA8A10 = (int)"Empty";
  dword_60CA8A18 = CurrentStateID + 1;
  dword_60CA8A14 = (int)&off_60BFFBF8;
  dword_60CA8A1C = (int)SE_SYS_BM_COURSE_PAGE_IN_ref;
  dword_60CA8A20 = 0;
  dword_60CA8A24 = (int)sub_60519090;
  dword_60CA8A28 = 0;
  dword_60CA8A2C = (int)sub_605190CC;
  dword_60CA8A30 = 0;
  dword_60CA8A38 = CurrentStateID + 2;
  dword_60CA8A34 = (int)&off_60BFFBF8;
  dword_60CA8A3C = (int)SE_SYS_BM_COURSE_PAGE_OUT_ref;
  dword_60CA8A40 = 0;
  dword_60CA8A44 = (int)nullsub_4260;
  dword_60CA8A48 = 0;
  dword_60CA8A4C = (int)nullsub_4261;
  dword_60CA8A50 = 0;
  CurrentStateID += 3;
  dword_60CA8A58 = CurrentStateID;
  dword_60CA8A54 = (int)&off_60BFFBF8;
  dword_60CA8A5C = (int)nullsub_4262;
  dword_60CA8A60 = 0;
  dword_60CA8A64 = (int)nullsub_4263;
  dword_60CA8A68 = 0;
  dword_60CA8A6C = (int)nullsub_4264;
  dword_60CA8A70 = 0;
  return nullsub_4264;
}
