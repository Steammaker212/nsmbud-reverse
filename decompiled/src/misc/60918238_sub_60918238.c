/* sub_60918238
 * address: 0x60918238   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60918238(int a1, int a2)
{
  int v3; // r0

  v3 = textures_bntx_ref_918268();
  if ( v3 )
    return *(_DWORD *)(*(_DWORD *)(FIELD_U32(v3, 40) + 8 * a2) + 96) + 2;
  else
    return 0;
}
