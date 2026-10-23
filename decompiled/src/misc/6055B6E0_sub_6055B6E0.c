/* sub_6055B6E0
 * address: 0x6055B6E0   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6055B6E0(int a1)
{
  int result; // r0

  result = SE_SYS_COURSE_IN_ref_55BF48();
  if ( !result )
    return SE_SYS_COURSE_IN_ref_55C048(a1);
  return result;
}
