/* sub_6099A0F0
 * address: 0x6099A0F0   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6099A0F0(int a1)
{
  void *v2; // r0

  *(_DWORD *)a1 = off_60C60AC0;
  FIELD_U32(a1, 24) = off_60C60B88;
  sub_608500C8(a1 + 24, 0, 12, 0, 0, 0, 1);
  FIELD_U32(a1, 48) = -1;
  FIELD_U32(a1, 52) = -1;
  FIELD_U8(a1, 40) = 0;
  nullsub_92();
  operator_delete(v2);
}
