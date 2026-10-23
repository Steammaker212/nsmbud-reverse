/* sub_60322150
 * address: 0x60322150   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60322150(int a1)
{
  signed int result; // r0
  bool v3; // zf

  result = SE_OBJ_CMN_SPLASH_GEL_ref(a1);
  v3 = result == 0;
  if ( !result )
  {
    result = FIELD_U16(a1, 6326);
    v3 = result == 0;
  }
  if ( v3 )
    return sub_60321FD0(a1);
  return result;
}
