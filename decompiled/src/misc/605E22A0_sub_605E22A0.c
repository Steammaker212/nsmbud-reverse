/* sub_605E22A0
 * address: 0x605E22A0   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E22A0(int a1, _DWORD *a2)
{
  int v2; // r2

  v2 = 0;
  if ( (FIELD_U8(a1, 6265) & 0x40) != 0 )
  {
    FIELD_U32(a1, 108) = *a2;
    FIELD_U32(a1, 112) = a2[1];
    FIELD_U32(a1, 116) = a2[2];
    FIELD_U32(a1, 584) = *a2;
    FIELD_U32(a1, 588) = a2[1];
    FIELD_U32(a1, 592) = a2[2];
    FIELD_U32(a1, 608) = *a2;
    FIELD_U32(a1, 612) = a2[1];
    v2 = 1;
    FIELD_U32(a1, 616) = a2[2];
  }
  return v2;
}
