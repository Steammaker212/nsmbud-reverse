/* P_MiiIcon_01_ref
 * address: 0x60507558   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int P_MiiIcon_01_ref()
{
  dword_60CA7A90 = 0;
  dword_60CA7A94 = 0;
  dword_60CA7A98 = 0;
  dword_60CA7A54 = ++CurrentStateID;
  dword_60CA7A50 = (int)&off_60BFF284;
  dword_60CA7A58 = (int)nullsub_4196;
  dword_60CA7A5C = 0;
  dword_60CA7A60 = (int)sub_60506D80;
  dword_60CA7A64 = 0;
  dword_60CA7A68 = (int)nullsub_4197;
  dword_60CA7A6C = 0;
  dword_60CA7A80 = (int)&sead__SafeStringBase__vtable;
  dword_60CA7A84 = (int)"CharaSet";
  sub_60000288();
  dword_60CA7A88 = (int)&sead__SafeStringBase__vtable;
  dword_60CA7A8C = (int)"G_Icon_00";
  sub_60000288();
  dword_60CA7A9C[0] = (int)&sead__SafeStringBase__vtable;
  unk_60CA7AA0 = "P_MiiIcon_00";
  unk_60CA7AA4 = &sead__SafeStringBase__vtable;
  dword_60CA7AA8 = (int)"P_MiiIcon_01";
  return sub_60000288();
}
