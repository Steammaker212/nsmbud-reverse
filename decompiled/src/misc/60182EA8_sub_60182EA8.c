/* sub_60182EA8
 * address: 0x60182EA8   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60182EA8(int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r12
  int v4; // r0

  v3 = 0;
  if ( a3 >= 0x100 )
    a3 = 0;
  v4 = a1 + 1096 * a3;
  if ( a2 < 2 )
    v3 = a2;
  return *(_DWORD *)(v4 + 4 * v3 + 1088);
}
