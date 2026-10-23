/* sub_60508334
 * address: 0x60508334   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_60508334()
{
  dword_60CA7AB0 = ++CurrentStateID;
  dword_60CA7AAC = (int)&off_60BFF2F4;
  dword_60CA7AB4 = (int)nullsub_4198;
  dword_60CA7AB8 = 0;
  dword_60CA7ABC = (int)sub_605076A4;
  dword_60CA7AC0 = 0;
  dword_60CA7AC4 = (int)nullsub_4199;
  dword_60CA7AC8 = 0;
  dword_60CA7AE0 = (int)&sead__SafeStringBase__vtable;
  dword_60CA7AE4 = (int)"In";
  dword_60CA7AE8 = (int)&sead__SafeStringBase__vtable;
  dword_60CA7AEC = (int)"Jump";
  dword_60CA7AF0 = (int)&sead__SafeStringBase__vtable;
  dword_60CA7AF4 = (int)"Out";
  sub_60000288();
  dword_60CA7AD0 = (int)&sead__SafeStringBase__vtable;
  dword_60CA7AD4 = (int)"G_All_00";
  sub_60000288();
  dword_60CA7AD8 = (int)&sead__SafeStringBase__vtable;
  dword_60CA7ADC = (int)"T_CourseClear_00";
  return sub_60000288();
}
