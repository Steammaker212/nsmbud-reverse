/* sub_607AFCF8
 * address: 0x607AFCF8   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607AFCF8(int a1)
{
  int v2; // r1
  int v3; // r1
  int v4; // r0
  int result; // r0

  sub_6076FF58(a1);
  v2 = FIELD_U32(a1, 12096);
  if ( !v2 || (v3 = v2 - 1, (FIELD_U32(a1, 12096) = v3) == 0) )
    FIELD_U32(a1, 1224) |= 0x400u;
  v4 = FIELD_U32(a1, 1228);
  if ( (v4 & 0x4000) != 0 && FIELD_F32(a1, 124) < 2.0 )
    FIELD_U32(a1, 1228) = v4 & 0xFFFFBFFF;
  sub_607712D4(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1104))(a1);
  ((void (__fastcall *)(int))loc_60771910)(a1);
  ((void (__fastcall *)(int))loc_60770F74)(a1);
  result = sub_607B184C(a1);
  if ( !result )
    return sub_607AFD98(a1);
  return result;
}
