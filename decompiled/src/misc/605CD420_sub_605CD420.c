/* sub_605CD420
 * address: 0x605CD420   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605CD420(int a1)
{
  int result; // r0

  if ( (*(_QWORD *)(EventMgr__instance + 16) & FIELD_U64(a1, 48)) != 0 )
    return (int)StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&dword_60CB0FA4);
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
