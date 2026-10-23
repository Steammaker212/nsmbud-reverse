/* sub_6053FC74
 * address: 0x6053FC74   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6053FC74(int a1)
{
  int v2; // r1
  _DWORD *v3; // r5

  v3 = (_DWORD *)(a1 + 34712);
  v2 = FIELD_U32(a1, 34712);
  if ( FIELD_U8(a1, 34730) )
    LOBYTE(v2) = v2 + 3;
  sub_608293A4(dword_60CC6E04, (unsigned __int8)v2);
  *(_BYTE *)(FIELD_U32(a1, 31776) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 31780) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 31784) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 31788) + 64) |= 1u;
  sub_60541DF8(a1, *v3, 1);
  sub_60473DE4((_DWORD *)(a1 + 28128), 0, &dword_60CABA7C, 0);
  FIELD_U8(a1, 34724) = 1;
  FIELD_U8(a1, 34727) = 0;
  FIELD_U8(a1, 34729) = 1;
  FIELD_U8(a1, 34732) = 0;
  return 34732;
}
