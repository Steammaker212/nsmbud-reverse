/* sub_60182E68
 * address: 0x60182E68   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60182E68(int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // r12
  int v5; // r0
  int v6; // r1

  v4 = 0;
  if ( a3 >= 0x100 )
    a3 = 0;
  if ( a2 >= 2 )
    a2 = 0;
  v5 = a1 + 1096 * a3;
  v6 = 5 * a2;
  if ( a4 < 4 )
    v4 = a4;
  return v5 + 16 * v6 + 20 * v4 + 64;
}
