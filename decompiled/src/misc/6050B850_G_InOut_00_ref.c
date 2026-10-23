/* G_InOut_00_ref
 * address: 0x6050B850   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int G_InOut_00_ref()
{
  dword_60CA7EA4 = ++CurrentStateID;
  dword_60CA7EA0 = (int)&off_60BFF554;
  dword_60CA7EA8 = (int)nullsub_4215;
  dword_60CA7EAC = 0;
  dword_60CA7EB0 = (int)sub_6050B3F4;
  dword_60CA7EB4 = 0;
  dword_60CA7EB8 = (int)nullsub_4216;
  dword_60CA7EBC = 0;
  dword_60CA7EC4 = (int)&sead__SafeStringBase__vtable;
  dword_60CA7EC8 = (int)"In";
  dword_60CA7ECC = (int)&sead__SafeStringBase__vtable;
  dword_60CA7ED0 = (int)"Out";
  dword_60CA7ED4 = (int)&sead__SafeStringBase__vtable;
  dword_60CA7ED8 = (int)"G_InOut_00";
  return sub_60000288();
}
