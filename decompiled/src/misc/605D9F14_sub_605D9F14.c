/* sub_605D9F14
 * address: 0x605D9F14   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605D9F14(int a1)
{
  _BOOL4 v2; // r1
  int result; // r0
  unsigned int v4; // r1
  int v5; // r0

  v2 = sub_6040E4C8(LevelInfo_instance);
  result = 0;
  if ( !v2 )
  {
    v4 = (unsigned __int8)(FIELD_U8(dword_60C9CF0C, 1362) - 1);
    if ( v4 <= 2 )
    {
      v5 = a1 + 6064;
      if ( FIELD_U32(a1, 6144) == dword_60B059A4[v4] )
        sub_605EB89C(v5, 3.0);
      else
        sub_605EAB48(v5, 0.0);
      return 1;
    }
  }
  return result;
}
