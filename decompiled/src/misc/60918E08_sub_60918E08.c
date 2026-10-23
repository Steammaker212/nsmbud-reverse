/* sub_60918E08
 * address: 0x60918E08   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__int64 __fastcall sub_60918E08(__int64 result, int a2)
{
  __int64 v2; // r2
  char v3; // r2

  if ( !*(_DWORD *)HIDWORD(result) )
    a2 = 0;
  FIELD_U32(result, 16) = a2;
  v2 = *(_QWORD *)HIDWORD(result);
  FIELD_U32(result, 12) = *(_DWORD *)(HIDWORD(result) + 8);
  FIELD_U64(result, 4) = v2;
  v3 = FIELD_U8(result, 20) & 0xFC;
  HIDWORD(result) = 0;
  if ( FIELD_U32(result, 572) )
    v3 |= 1u;
  FIELD_U8(result, 20) = v3;
  FIELD_U32(result, 24) = 0;
  return result;
}
