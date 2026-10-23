/* sub_6071B258
 * address: 0x6071B258   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6071B258(int a1, unsigned int a2, unsigned int a3, int a4)
{
  unsigned int v4; // r12

  v4 = 0;
  if ( a3 >= 4 )
    a3 = 0;
  if ( a2 < 4 )
    v4 = a2;
  return *(unsigned __int16 *)(*(_DWORD *)(a1 + 16 * v4 + 4 * a3 + 112) + 2 * a4);
}
