/* sub_605DC9A0
 * address: 0x605DC9A0   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_605DC9A0(int a1)
{
  unsigned int result; // r0
  int v3; // r1
  int v4; // r6
  int v5; // r0

  result = FIELD_S8(a1, 6336);
  if ( result > 3 )
    return result;
  v3 = PlayerMgr_instance;
  result = PlayerMgr_instance + 4 * result;
  v4 = FIELD_U32(result, 32);
  if ( !v4 )
    return result;
  v5 = FIELD_U32(a1, 6260);
  if ( (v5 & 0x20000) != 0
    || (v5 & 0x10000) != 0 && (v3 = FIELD_U32(a1, 6144), v3 == 9)
    || (v5 & 0x40000) != 0 && FIELD_U32(a1, 6144) == 8 )
  {
LABEL_15:
    FIELD_U32(a1, 6340) = 0;
    return 6340;
  }
  if ( (FIELD_U8(a1, 6265) & 0x80) != 0 )
  {
    if ( FIELD_U32(a1, 6144) != 2 )
      sub_605EAB48(a1 + 6064, 0.0);
    goto LABEL_15;
  }
  result = FIELD_U32(a1, 6340);
  if ( result )
  {
    if ( result == 2 )
    {
      result = sub_605D9F14(a1);
      if ( result )
        return result;
    }
    else if ( result != 1 )
    {
      return result;
    }
    result = sub_605EB988(**(_DWORD **)(FIELD_U32(a1, 6076) + 12), v3);
    if ( result != 1 )
      return result;
    result = 0;
    goto LABEL_21;
  }
  if ( sub_605D9F14(a1) == 1 )
  {
    result = 2;
LABEL_21:
    FIELD_U32(a1, 6340) = result;
    return result;
  }
  result = FIELD_U32(a1, 6144);
  if ( result != ((FIELD_U32(v4, 1212) >> 18) & 8 | 2) )
    return sub_605EAB48(a1 + 6064, 0.0);
  return result;
}
