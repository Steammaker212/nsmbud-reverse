/* sub_60911618
 * address: 0x60911618   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60911618(int a1)
{
  int v1; // r1

  v1 = FIELD_U32(a1, 20);
  if ( v1 == -1 )
    return -1;
  else
    return **(_DWORD **)(FIELD_U32(a1, 12) + 16 * v1);
}
