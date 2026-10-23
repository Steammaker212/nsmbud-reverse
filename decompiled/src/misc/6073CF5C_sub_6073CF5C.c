/* sub_6073CF5C
 * address: 0x6073CF5C   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6073CF5C(int result)
{
  _WORD *v1; // r4

  v1 = (_WORD *)(result + 8036);
  if ( !FIELD_U16(result, 8036) && !FIELD_U16(result, 8038) )
  {
    ((void (__fastcall *)(int, int, float, float, float))loc_605EA46C)(result + 6064, 12, 3.0, 1.0, 0.0);
    result = (unsigned __int16)*v1 + 1;
    *v1 = result;
  }
  return result;
}
