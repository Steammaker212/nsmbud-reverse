/* SE_VCO_YS_DAMAGE_ref
 * address: 0x607D34F0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_VCO_YS_DAMAGE_ref(int a1)
{
  int v2; // r0

  if ( !FIELD_U32(a1, 11356) )
  {
    v2 = sub_607CBC00(a1);
    if ( v2 )
      FIELD_U32(v2, 324) = 0;
  }
  PlayerBase_dispatchVirtual3(a1 + 11364, 148, 0.0);
  return sub_607734E8((unsigned __int8 *)a1, (int)"SE_VCO_YS_DAMAGE", 0, 0);
}
