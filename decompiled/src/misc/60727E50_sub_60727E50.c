/* sub_60727E50
 * address: 0x60727E50   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60727E50(int a1)
{
  *(_QWORD *)a1 = (unsigned int)off_60C21DE4;
  sub_60913BB4(a1 + 12);
  FIELD_U32(a1, 12) = off_60BFA5B0;
  sub_60913BB4(a1 + 40);
  FIELD_U32(a1, 40) = off_60BFA5B0;
  sub_60919C54(a1 + 72);
  sub_60913BB4(a1 + 3224);
  FIELD_U32(a1, 3224) = off_60C21DF4;
  sub_60913BB4(a1 + 3252);
  FIELD_U32(a1, 3252) = off_60C21DF4;
  sub_60922344(a1 + 3280);
  sub_60921AE8(a1 + 3552);
  agl_TextureSampler_ref(a1 + 3904);
  sub_6090B350(a1 + 4248);
  return a1;
}
