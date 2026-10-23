/* sub_6071B2FC
 * address: 0x6071B2FC   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6071B2FC(int a1, unsigned int a2, int a3, unsigned int a4)
{
  unsigned int v4; // r12

  v4 = 0;
  if ( a4 >= 3 )
    a4 = 0;
  if ( a2 < 4 )
    v4 = a2;
  return *(unsigned __int16 *)(*(_DWORD *)(a1 + 12 * v4 + 4 * a4 + 944) + 2 * a3);
}
