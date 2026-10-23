/* sub_609186E8
 * address: 0x609186E8   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609186E8(int a1, int a2)
{
  int v2; // r0

  v2 = *(_DWORD *)(FIELD_U32(a1, 48) + 4 * a2);
  if ( v2 )
    return FIELD_U32(v2, 64);
  else
    return 0;
}
