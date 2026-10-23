/* sub_60918EB8
 * address: 0x60918EB8   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60918EB8(int a1)
{
  char v2; // r1
  char v3; // r2
  unsigned int v4; // r3

  v2 = FIELD_U8(a1, 20);
  v3 = v2 | 1;
  if ( !FIELD_U32(a1, 572) )
    v3 = v2 & 0xFE;
  FIELD_U8(a1, 20) = v3;
  FIELD_U32(a1, 24) = 0;
  dword_60CC77B4(FIELD_U32(a1, 576), FIELD_U32(dword_60CCFC8C, 28));
  dword_60CC77C0(FIELD_U32(a1, 576), nullsub_5639);
  dword_60CC77C4(FIELD_U32(a1, 576), a1);
  dword_60CC77CC(FIELD_U32(a1, 576), FIELD_U32(a1, 40), FIELD_U32(a1, 568));
  v4 = FIELD_U32(a1, 16);
  if ( v4 <= 0x200 )
    v4 = 512;
  dword_60CC77C8(FIELD_U32(a1, 576), FIELD_U32(a1, 4), FIELD_U32(a1, 8), v4);
  dword_60CC77E8(FIELD_U32(a1, 576));
  FIELD_U8(a1, 20) |= 8u;
  return 1;
}
