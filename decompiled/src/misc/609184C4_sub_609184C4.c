/* sub_609184C4
 * address: 0x609184C4   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609184C4(int a1, int a2)
{
  int v3; // r0

  v3 = textures_bntx_ref(a1);
  if ( v3 )
    return *(_DWORD *)(FIELD_U32(v3, 40) + 8 * a2);
  else
    return 0;
}
