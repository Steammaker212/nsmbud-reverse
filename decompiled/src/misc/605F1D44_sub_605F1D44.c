/* sub_605F1D44
 * address: 0x605F1D44   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605F1D44(int a1)
{
  _DWORD *v2; // r5

  v2 = (_DWORD *)(a1 + 6104);
  MovementHandler__execute((MovementHandler *)(a1 + 6104));
  if ( FIELD_U32(a1, 6152) == 1 && FIELD_U32(a1, 6172) != 1 )
  {
    FIELD_U32(a1, 108) = *v2;
    FIELD_U32(a1, 112) = FIELD_U32(a1, 6108);
    FIELD_U32(a1, 164) = FIELD_U32(a1, 6184);
  }
  StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
