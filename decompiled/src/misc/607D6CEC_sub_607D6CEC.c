/* sub_607D6CEC
 * address: 0x607D6CEC   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D6CEC(int a1)
{
  int v2; // r0
  bool v3; // zf

  v2 = sub_60766708(a1);
  v3 = v2 == 0;
  if ( !v2 )
    v3 = (FIELD_U8(a1, 1224) & 8) == 0;
  if ( !v3 || (FIELD_U8(a1, 6904) & 0x10) != 0 )
    return 0;
  else
    return sub_607D1570(a1) ^ 1;
}
