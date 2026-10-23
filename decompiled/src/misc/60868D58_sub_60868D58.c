/* sub_60868D58
 * address: 0x60868D58   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60868D58(int a1, int a2)
{
  int v2; // r1

  v2 = *(_DWORD *)(FIELD_U32(a2, 192) + 32);
  if ( v2 )
    return v2 + FIELD_U32(a1, 36);
  else
    return 0;
}
