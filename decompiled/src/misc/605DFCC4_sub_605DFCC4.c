/* sub_605DFCC4
 * address: 0x605DFCC4   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_605DFCC4(int a1)
{
  _DWORD *result; // r0
  int v3; // r1
  int v4; // t1

  v4 = FIELD_U32(a1, 8012);
  result = (_DWORD *)(a1 + 8012);
  v3 = v4;
  if ( v4 == 1 )
  {
    if ( FIELD_F32(a1, 124) < 0.0 )
    {
      FIELD_U32(a1, 8020) = 0;
      StateMgr__changeState((StateMgr *)(a1 + 6740), (StateBase *)&dword_60CB18A0);
      return (_DWORD *)sub_605D9504(a1, 0, FIELD_F32(a1, 120), FIELD_F32(a1, 124));
    }
  }
  else if ( !v3 && (FIELD_U8(a1, 6266) & 0x80) != 0 )
  {
    FIELD_F32(a1, 120) = (float)byte_60B0594C[FIELD_U32(a1, 80)] * 0.5;
    FIELD_U32(a1, 124) = 1084856730;
    FIELD_U32(a1, 128) = 0;
    FIELD_U32(a1, 100) = -1113336054;
    FIELD_U32(a1, 6268) &= 0xFFFFFFFC;
    *result = 1;
  }
  return result;
}
