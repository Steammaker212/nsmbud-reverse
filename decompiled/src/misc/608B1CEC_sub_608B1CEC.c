/* sub_608B1CEC
 * address: 0x608B1CEC   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B1CEC(int a1)
{
  int result; // r0
  int v3; // r1
  char v4; // r2
  int v5; // t1

  result = 0;
  v5 = FIELD_U32(a1, 20);
  v3 = a1 + 20;
  v4 = v5;
  if ( (v5 & 2) != 0 )
    return BYTE1(*(_DWORD *)(v3 + 4 * (v4 & 1) + 4));
  return result;
}
