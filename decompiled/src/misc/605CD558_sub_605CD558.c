/* sub_605CD558
 * address: 0x605CD558   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605CD558(int a1)
{
  int *v2; // r1
  int result; // r0

  if ( FIELD_U8(a1, 103) )
  {
    if ( **(_DWORD **)(a1 + 36) == FIELD_U32(a1, 88)
      && (*(_QWORD *)(EventMgr__instance + 16) & FIELD_U64(a1, 48)) != 0 )
    {
      FIELD_U32(a1, 84) += byte_60AFE3F4[FIELD_U8(a1, 106)] * FIELD_U32(a1, 76);
      v2 = &dword_60CB0FA4;
      return (int)StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)v2);
    }
  }
  else if ( (*(_QWORD *)(EventMgr__instance + 16) & FIELD_U64(a1, 48)) == 0 )
  {
    FIELD_U8(a1, 95) = 1;
    FIELD_U8(a1, 98) = 0;
    v2 = &dword_60CB0F84;
    return (int)StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)v2);
  }
  result = FIELD_U8(a1, 92);
  if ( !FIELD_U8(a1, 92) )
  {
    result = FIELD_U32(a1, 36);
    if ( *(_DWORD *)result != FIELD_U32(a1, 88) )
    {
      sub_6083246C((int *)result, (int *)(a1 + 88), (signed int *)(a1 + 64));
      result = FIELD_U32(a1, 36);
      if ( *(_DWORD *)result == FIELD_U32(a1, 88) )
      {
        *(_DWORD *)result = *(_DWORD *)result;
        result = 1;
        FIELD_U8(a1, 97) = 1;
        if ( FIELD_U8(a1, 94) )
        {
          FIELD_U8(a1, 102) = 1;
          return AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 0, 3, 0, 0);
        }
      }
    }
  }
  return result;
}
