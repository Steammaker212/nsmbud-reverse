/* sub_60540844
 * address: 0x60540844   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60540844(int a1)
{
  int v2; // r1
  int v3; // r2

  v2 = FIELD_U32(a1, 34720);
  v3 = FIELD_U32(a1, 34716);
  if ( FIELD_U8(a1, 34730) )
  {
    LOBYTE(v2) = v2 + 3;
    LOBYTE(v3) = v3 + 3;
  }
  sub_60829444(dword_60CC6E04, (unsigned __int8)v2, (unsigned __int8)v3);
  sub_60541DF8(a1, FIELD_U32(a1, 34716), 6);
  sub_605324A4(a1 + 24076, FIELD_U32(a1, 34720));
  *(_BYTE *)(FIELD_U32(a1, 31720) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 31724) + 64) |= 1u;
  sub_60473DE4((_DWORD *)(a1 + 28128), 0, &dword_60CABA94, 0);
  *(_BYTE *)(FIELD_U32(a1, 31752) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 31756) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 31760) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 31764) + 64) |= 1u;
  FIELD_U8(a1, 34724) = 1;
  FIELD_U8(a1, 34728) = 0;
  FIELD_U8(a1, 34729) = 1;
  FIELD_U8(a1, 34732) = 0;
  return 34732;
}
