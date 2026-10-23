/* sub_607F0CCC
 * address: 0x607F0CCC   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F0CCC(int result, int a2)
{
  int v2; // r4
  int v4; // r6

  v2 = result;
  if ( FIELD_F32(result, 488) > 0.0 )
  {
    v4 = MosaicCapture_ref(FIELD_U32(result, 568), a2);
    sub_60441758(*(_DWORD **)(v2 + 568), a2, v4, FIELD_F32(v2, 488));
    return sub_60441918(FIELD_U32(v2, 568), v4);
  }
  return result;
}
