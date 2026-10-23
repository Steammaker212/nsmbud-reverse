/* sub_6071B22C
 * address: 0x6071B22C   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6071B22C(int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r12
  int v4; // r0

  v3 = 0;
  if ( a2 >= 4 )
    a2 = 0;
  v4 = a1 + 176 * a2;
  if ( a3 < 4 )
    v3 = a3;
  return v4 + 44 * v3 + 240;
}
