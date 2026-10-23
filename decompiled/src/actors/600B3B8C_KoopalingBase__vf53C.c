/* KoopalingBase__vf53C
 * address: 0x600B3B8C   size: 64   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall KoopalingBase__vf53C(int result)
{
  int v1; // r1
  char *v2; // r1

  v1 = FIELD_U32(result, 8116);
  if ( v1 )
  {
    v2 = *(char **)(v1 + 64);
    if ( v2 != "SE_VOC_NO_SOUND" )
      return sub_608134CC(result + 6332, v2, FIELD_S16(result, 6640), 0);
  }
  return result;
}
