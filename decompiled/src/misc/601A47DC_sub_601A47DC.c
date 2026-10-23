/* sub_601A47DC
 * address: 0x601A47DC   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A47DC(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4; // r1
  int v5; // r0

  v4 = a3 + 2 * a2;
  if ( v4 >= 0x12 )
    v4 = 0;
  v5 = sub_60178780(*(_DWORD *)(a1 + 4 * v4 + 100), a4);
  if ( v5 )
    return FIELD_U32(v5, 92);
  else
    return -1;
}
