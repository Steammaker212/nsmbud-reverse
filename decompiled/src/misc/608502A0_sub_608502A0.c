/* sub_608502A0
 * address: 0x608502A0   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_608502A0(unsigned __int8 **a1)
{
  int v1; // r2
  unsigned int v2; // r1
  int v3; // r3

  v1 = (int)*a1;
  v2 = **a1;
  if ( v2 > 0xDF || (unsigned __int8)(v2 + 127) <= 0x1Eu )
  {
    v2 = FIELD_U8(v1, 1) | (v2 << 8);
    v3 = 2;
  }
  else
  {
    v3 = 1;
  }
  *a1 = (unsigned __int8 *)(v1 + v3);
  return v2;
}
