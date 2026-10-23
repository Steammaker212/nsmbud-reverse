/* sub_60509DC8
 * address: 0x60509DC8   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_60509DC8()
{
  dword_60CA7D70 = 0;
  dword_60CA7D74 = 0;
  dword_60CA7D78 = 0;
  dword_60CA7D24 = CurrentStateID + 1;
  dword_60CA7D20 = (int)&off_60BFF3F0;
  dword_60CA7D28 = (int)nullsub_4205;
  dword_60CA7D2C = 0;
  dword_60CA7D30 = (int)sub_60509A98;
  dword_60CA7D34 = 0;
  dword_60CA7D38 = (int)nullsub_4206;
  dword_60CA7D3C = 0;
  CurrentStateID += 2;
  dword_60CA7D44 = CurrentStateID;
  dword_60CA7D40 = (int)&off_60BFF3F0;
  dword_60CA7D48 = (int)nullsub_4207;
  dword_60CA7D4C = 0;
  dword_60CA7D50 = (int)nullsub_4208;
  dword_60CA7D54 = 0;
  dword_60CA7D58 = (int)nullsub_4209;
  dword_60CA7D5C = 0;
  dword_60CA7D60 = (int)&sead__SafeStringBase__vtable;
  dword_60CA7D64 = (int)"CharaSet";
  sub_60000288();
  dword_60CA7D68 = (int)&sead__SafeStringBase__vtable;
  dword_60CA7D6C = (int)"G_Icon_00";
  return sub_60000288();
}
