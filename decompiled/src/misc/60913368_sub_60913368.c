/* sub_60913368
 * address: 0x60913368   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60913368(int a1, int a2)
{
  int v4; // r6
  int v5; // r7

  if ( !FIELD_U16(a1, 10) )
    return -1;
  v4 = 0;
  v5 = 0;
  while ( !sub_60913448(FIELD_U32(a1, 12) + 16 * v4 + 4, a2, 4) )
  {
    v4 = (unsigned __int16)++v5;
    if ( (unsigned __int16)v5 >= (unsigned int)FIELD_U16(a1, 10) )
      return -1;
  }
  return v4;
}
