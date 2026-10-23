/* sub_606C2840
 * address: 0x606C2840   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606C2840(int result)
{
  if ( !FIELD_U8(dword_60CC6D78, 2096) )
  {
    sub_603F471C(AreaTask_intance, FIELD_S8(result, 6850));
    result = dword_60CC6D78;
    FIELD_U8(dword_60CC6D78, 2096) = 1;
  }
  return result;
}
