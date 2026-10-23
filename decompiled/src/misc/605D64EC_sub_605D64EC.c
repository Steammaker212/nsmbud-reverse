/* sub_605D64EC
 * address: 0x605D64EC   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605D64EC(int a1)
{
  int result; // r0
  int v3; // r1
  _DWORD *v4; // r5

  FIELD_U32(a1, 104) = 0;
  if ( FIELD_F32(a1, 124) < 0.0 )
    FIELD_U32(a1, 6260) &= ~0x10000000u;
  result = FIELD_U32(a1, 6804) & 1;
  if ( (FIELD_U32(a1, 6804) & 1) != 0 )
    FIELD_U32(a1, 120) = 0;
  v4 = (_DWORD *)(a1 + 8008);
  v3 = FIELD_U32(a1, 8008);
  if ( v3 == 1 )
  {
    if ( result )
    {
LABEL_12:
      FIELD_U32(a1, 8000) = 0x1000000;
      FIELD_U32(a1, 8004) = 0;
      *v4 = 0;
      return (int)StateMgr__changeState((StateMgr *)(a1 + 6292), (StateBase *)&dword_60CB1690);
    }
  }
  else if ( !v3 )
  {
    result = sub_605EB988(**(_DWORD **)(FIELD_U32(a1, 6076) + 12), 0);
    if ( result == 1 )
    {
      if ( (FIELD_U8(a1, 6804) & 1) == 0 )
      {
        sub_605EAB48(a1 + 6064, 0.0);
        *v4 = 1;
        return 1;
      }
      goto LABEL_12;
    }
  }
  return result;
}
