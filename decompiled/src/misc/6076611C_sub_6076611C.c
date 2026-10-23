/* sub_6076611C
 * address: 0x6076611C   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076611C(int result, int a2, int a3)
{
  if ( a2 > a3 )
    a2 = a3;
  FIELD_F32(result, 9632) = (float)((float)a2 * 0.6) / (float)a3;
  FIELD_U32(result, 9624) = 1;
  return result;
}
