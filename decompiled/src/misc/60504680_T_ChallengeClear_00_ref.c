/* T_ChallengeClear_00_ref
 * address: 0x60504680   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int T_ChallengeClear_00_ref()
{
  dword_60CA77AC = ++CurrentStateID;
  dword_60CA77A8 = (int)&off_60BFF140;
  dword_60CA77B0 = (int)nullsub_4194;
  dword_60CA77B4 = 0;
  dword_60CA77B8 = (int)sub_60503BD8;
  dword_60CA77BC = 0;
  dword_60CA77C0 = (int)nullsub_4195;
  dword_60CA77C4 = 0;
  dword_60CA77E0 = (int)&sead__SafeStringBase__vtable;
  dword_60CA77E4 = (int)"In";
  dword_60CA77E8 = (int)&sead__SafeStringBase__vtable;
  dword_60CA77EC = (int)"Out";
  sub_60000288();
  dword_60CA77D0 = (int)&sead__SafeStringBase__vtable;
  dword_60CA77D4 = (int)"G_All_00";
  sub_60000288();
  dword_60CA77D8 = (int)&sead__SafeStringBase__vtable;
  dword_60CA77DC = (int)"T_ChallengeClear_00";
  return sub_60000288();
}
