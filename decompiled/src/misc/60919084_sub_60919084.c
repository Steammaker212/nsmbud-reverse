/* sub_60919084
 * address: 0x60919084   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60919084(int a1, int *a2, int a3, int a4)
{
  int v4; // r5
  int v7; // r1
  int v8; // r2
  unsigned int v9; // r3

  v4 = a3;
  if ( a4 == 1 )
    sub_60913B5C(a2, a3);
  v7 = a2[1];
  v8 = a2[2];
  if ( !*a2 )
    v4 = 0;
  FIELD_U32(a1, 4) = *a2;
  FIELD_U32(a1, 8) = v7;
  FIELD_U32(a1, 12) = v8;
  FIELD_U32(a1, 16) = v4;
  FIELD_U8(a1, 20) = FIELD_U8(a1, 20) & 0xFC | (FIELD_U32(a1, 572) != 0);
  FIELD_U32(a1, 24) = 0;
  dword_60CC77B4(FIELD_U32(a1, 576), FIELD_U32(dword_60CCFC8C, 28));
  dword_60CC77C0(FIELD_U32(a1, 576), nullsub_5639);
  dword_60CC77C4(FIELD_U32(a1, 576), a1);
  dword_60CC77CC(FIELD_U32(a1, 576), FIELD_U32(a1, 40), FIELD_U32(a1, 568));
  v9 = FIELD_U32(a1, 16);
  if ( v9 <= 0x200 )
    v9 = 512;
  dword_60CC77C8(FIELD_U32(a1, 576), FIELD_U32(a1, 4), FIELD_U32(a1, 8), v9);
  dword_60CC77E8(FIELD_U32(a1, 576));
  FIELD_U8(a1, 20) |= 8u;
  return 1;
}
