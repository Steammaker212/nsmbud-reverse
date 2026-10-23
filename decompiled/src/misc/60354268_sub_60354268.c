/* sub_60354268
 * address: 0x60354268   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_60354268(float *result)
{
  if ( result[27] < (float)(FIELD_F32(dword_60CC6484, 112) + -16.0) )
    return (float *)(*(int (__fastcall **)(float *, int *))(*(_DWORD *)result + 192))(result, &dword_60C95098);
  return result;
}
