/* sub_608EDA7C
 * address: 0x608EDA7C   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608EDA7C(int a1)
{
  _DWORD *result; // r0

  result = (_DWORD *)sub_608ED438(a1);
  *result = off_60C5C5E0;
  result[10] = 0;
  result[11] = &sead__SafeStringBase__vtable;
  result[12] = &byte_60ABC94D;
  result[13] = &sead__SafeStringBase__vtable;
  result[14] = &byte_60ABC94D;
  result[15] = &sead__SafeStringBase__vtable;
  result[16] = &byte_60ABC94D;
  result[17] = 0;
  result[18] = 0;
  result[19] = sub_608EDAF0;
  return result;
}
