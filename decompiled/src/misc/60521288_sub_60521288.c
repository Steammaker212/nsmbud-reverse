/* sub_60521288
 * address: 0x60521288   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_60521288(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r1
  int v5; // r0
  _BYTE *result; // r0

  v2 = FIELD_U32(a1, 4304);
  FIELD_U32(a1, 3904) = v2;
  FIELD_U32(a1, 3908) = v2;
  FIELD_U32(a1, 3912) = v2;
  StateMgr__execute((StateMgr *)(a1 + 20));
  v3 = FIELD_U32(a1, 3784);
  v4 = FIELD_U32(v3, 92);
  v5 = FIELD_U32(v3, 108);
  FIELD_U32(a1, 3892) = v4;
  FIELD_U32(a1, 3896) = v5;
  FIELD_U32(a1, 3900) = -1018691584;
  FIELD_U8(a1, 3916) = 1;
  sub_603F62C0(a1 + 3868);
  FIELD_U8(a1, 3916) = 1;
  result = (_BYTE *)(a1 + 4302);
  if ( FIELD_U8(a1, 4303) )
  {
    *result = 1;
  }
  else if ( !*result )
  {
    return result;
  }
  *result = 0;
  return (_BYTE *)sub_60473B58((_DWORD *)(a1 + 36), 0xEu, 0);
}
