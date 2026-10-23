/* sub_60023F2C
 * address: 0x60023F2C   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *(__fastcall *__fastcall sub_60023F2C(int a1))(int a1)
{
  sead_IDisposer *(__fastcall *result)(int); // r0

  result = (sead_IDisposer *(__fastcall *)(int))dword_60C7F558;
  if ( dword_60C7F558 )
    return sub_60022DF8(dword_60C7F558, a1);
  return result;
}
