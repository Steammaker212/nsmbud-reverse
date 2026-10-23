/* sub_6040C424
 * address: 0x6040C424   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6040C424(int a1)
{
  int result; // r0
  int v3; // r0

  result = sub_607F6904(dword_60CC62E4);
  if ( !result )
  {
    result = FIELD_U8(a1, 2084);
    if ( FIELD_U8(a1, 2084) )
    {
      v3 = FIELD_U32(a1, 2076);
      if ( v3 )
        FIELD_U32(a1, 2076) = v3 - 1;
      return (int)StateMgr__execute((StateMgr *)(a1 + 36));
    }
  }
  return result;
}
