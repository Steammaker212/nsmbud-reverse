/* sub_6084F96C
 * address: 0x6084F96C   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6084F96C(int a1, int a2, int *a3)
{
  int v3; // lr
  int v4; // r12
  int v5; // r4
  int v6; // r4

  if ( (a2 & 0xFFFFFFFE) != 0xE )
    return sub_6084C4B4(a1, a2, a3);
  v3 = a3[1];
  v4 = 4;
  v5 = *(unsigned __int8 *)(v3 - 1);
  if ( v5 == 15 )
  {
    v6 = 6;
  }
  else
  {
    if ( v5 != 14 )
      return v4;
    v6 = FIELD_U16(v3, 5) + 8;
  }
  if ( v3 - 1 + v6 > (unsigned int)a3[2] )
    return v4;
  v4 = 0;
  if ( FIELD_U16(v3, 1) || FIELD_U16(v3, 3) )
    return v4;
  return sub_6084FBBC(a1);
}
