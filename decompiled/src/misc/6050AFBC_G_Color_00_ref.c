/* G_Color_00_ref
 * address: 0x6050AFBC   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int G_Color_00_ref()
{
  dword_60CA7DE4 = ++CurrentStateID;
  dword_60CA7DE0 = (int)&off_60BFF4D0;
  dword_60CA7DE8 = (int)nullsub_4212;
  dword_60CA7DEC = 0;
  dword_60CA7DF0 = (int)sub_6050ABE8;
  dword_60CA7DF4 = 0;
  dword_60CA7DF8 = (int)nullsub_4213;
  dword_60CA7DFC = 0;
  dword_60CA7E00 = (int)&sead__SafeStringBase__vtable;
  dword_60CA7E04 = (int)"Color";
  sub_60000288();
  dword_60CA7E08 = (int)&sead__SafeStringBase__vtable;
  dword_60CA7E0C = (int)"G_Color_00";
  return sub_60000288();
}
