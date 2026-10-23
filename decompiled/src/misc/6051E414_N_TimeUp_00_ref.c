/* N_TimeUp_00_ref
 * address: 0x6051E414   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int (*N_TimeUp_00_ref())()
{
  dword_60CA8FB8 = 0;
  dword_60CA8FBC = 0;
  dword_60CA8FC0 = 0;
  dword_60CA8FA0 = (int)&sead__SafeStringBase__vtable;
  unk_60CA8FA4 = "Game";
  unk_60CA8FA8 = &sead__SafeStringBase__vtable;
  dword_60CA8FAC = (int)"TimeUp.bflyt";
  dword_60CA8FC4 = (int)&sead__SafeStringBase__vtable;
  dword_60CA8FC8 = (int)"In";
  dword_60CA8FCC = (int)&sead__SafeStringBase__vtable;
  dword_60CA8FD0 = (int)"Out";
  sub_60000288();
  dword_60CA8FB0 = (int)&sead__SafeStringBase__vtable;
  dword_60CA8FB4 = (int)"N_TimeUp_00";
  sub_60000288();
  dword_60CA8F60 = CurrentStateID + 1;
  dword_60CA8F5C = (int)&off_60BFFD88;
  dword_60CA8F64 = (int)sub_6051E5B0;
  dword_60CA8F68 = 0;
  dword_60CA8F6C = (int)nullsub_4286;
  dword_60CA8F70 = 0;
  dword_60CA8F74 = (int)nullsub_4287;
  dword_60CA8F78 = 0;
  CurrentStateID += 2;
  dword_60CA8F80 = CurrentStateID;
  dword_60CA8F7C = (int)&off_60BFFD88;
  dword_60CA8F84 = (int)sub_6051E5C4;
  dword_60CA8F88 = 0;
  dword_60CA8F8C = (int)sub_6051E674;
  dword_60CA8F90 = 0;
  dword_60CA8F94 = (int)nullsub_4288;
  dword_60CA8F98 = 0;
  return nullsub_4288;
}
