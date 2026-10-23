/* sub_6047467C
 * address: 0x6047467C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6047467C(_DWORD *a1, unsigned int a2, _DWORD *a3, int a4, float a5, int a6)
{
  unsigned int v10; // r3

  v10 = sub_604746E4(a1, a3, a4, a5);
  if ( v10 == -1 )
    return 0;
  sub_604742D0(a1, a2, a3, v10, a5, a6);
  return 1;
}
