/* sub_60918390
 * address: 0x60918390   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60918390(int a1)
{
  int v1; // r0

  v1 = textures_bntx_ref_918268(a1);
  if ( v1 )
    return *(_DWORD *)(FIELD_U32(v1, 56) + 4);
  else
    return 0;
}
