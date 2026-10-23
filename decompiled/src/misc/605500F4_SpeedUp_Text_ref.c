/* SpeedUp_Text_ref
 * address: 0x605500F4   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*SpeedUp_Text_ref())()
{
  dword_60CACF00 = (int)&sead__SafeStringBase__vtable;
  dword_60CACF04 = (int)"InOut";
  dword_60CACF08 = (int)&sead__SafeStringBase__vtable;
  dword_60CACF0C = (int)"SpeedUp_Text_00";
  dword_60CACF10 = (int)&sead__SafeStringBase__vtable;
  dword_60CACF14 = (int)"SpeedUp_Text_01";
  dword_60CACF1C = CurrentStateID + 1;
  dword_60CACF18 = (int)&off_60C00AF0;
  dword_60CACF20 = (int)nullsub_4538;
  dword_60CACF24 = 0;
  dword_60CACF28 = (int)nullsub_4539;
  dword_60CACF2C = 0;
  dword_60CACF30 = (int)nullsub_4540;
  dword_60CACF34 = 0;
  CurrentStateID += 2;
  dword_60CACF3C = CurrentStateID;
  dword_60CACF38 = (int)&off_60C00AF0;
  dword_60CACF40 = (int)sub_6054FBB4;
  dword_60CACF44 = 0;
  dword_60CACF48 = (int)sub_6054FBD0;
  dword_60CACF4C = 0;
  dword_60CACF50 = (int)nullsub_4541;
  dword_60CACF54 = 0;
  return nullsub_4541;
}
