/* sub_60497964
 * address: 0x60497964   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60497964(int a1)
{
  int v2; // r0
  int v3; // t1
  int v4; // r0

  FIELD_U8(a1, 146868) = 0;
  v2 = a1 + 146868;
  FIELD_U8(v2, 5) = 0;
  FIELD_U8(v2, 4) = 0;
  FIELD_U8(v2, 3) = 0;
  FIELD_U8(v2, 2) = 0;
  FIELD_U8(v2, 1) = 0;
  FIELD_U8(v2, 6) = 0;
  *(_DWORD *)(v2 - 141140) |= 0x10u;
  *(_BYTE *)(v2 - 120598) = 0;
  *(_DWORD *)(v2 - 120584) |= 0x10u;
  *(_BYTE *)(v2 - 100042) = 0;
  *(_DWORD *)(v2 - 100028) |= 0x10u;
  *(_BYTE *)(v2 - 79486) = 0;
  v3 = *(_DWORD *)(v2 - 79472);
  v2 -= 79472;
  *(_DWORD *)v2 = v3 | 0x10;
  FIELD_U8(v2, 20542) = 0;
  v4 = dword_60C99E24;
  if ( dword_60C99E24 )
  {
    FIELD_U32(dword_60C99E24, 160480) = FIELD_U32(a1, 146864);
    sub_603FEFE8(v4);
  }
  FIELD_U8(a1, 146852) = 0;
  return 146852;
}
