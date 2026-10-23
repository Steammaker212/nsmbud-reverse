/* sub_60090950
 * address: 0x60090950   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60090950(int a1)
{
  int v1; // r2

  if ( FIELD_U32(a1, 15252) == 3 )
    v1 = 27;
  else
    v1 = 30;
  sub_603F0040(dword_60C99D6C, FIELD_U32(a1, 15240), v1, 1);
  return 1;
}
