/* sub_602CFFDC
 * address: 0x602CFFDC   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_602CFFDC(_BYTE *a1)
{
  _BYTE *result; // r0
  char v2; // t1

  a1[6710] |= 2u;
  a1[7014] |= 2u;
  a1[7318] |= 2u;
  a1[7622] |= 2u;
  a1[7926] |= 2u;
  a1[8230] |= 2u;
  a1[8534] |= 2u;
  a1[8838] |= 2u;
  a1[9142] |= 2u;
  v2 = a1[9446];
  result = a1 + 9446;
  *result = v2 | 2;
  return result;
}
