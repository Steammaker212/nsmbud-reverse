/* sub_605E0140
 * address: 0x605E0140   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E0140(int result)
{
  _DWORD *v1; // r1
  int v2; // r2
  int v3; // t1
  int v4; // t1

  v1 = (_DWORD *)(result + 8012);
  v2 = FIELD_U32(result, 8012);
  if ( v2 == 2 )
  {
    v3 = FIELD_U32(result, 6260);
    result += 6260;
    *(_DWORD *)result = v3 | 0x20000000;
  }
  else if ( v2 == 1 )
  {
    if ( !FIELD_U32(result, 8016) )
    {
      v4 = FIELD_U32(result, 6260);
      result += 6260;
      *(_DWORD *)result = v4 & 0xCFFFFFFF | 0x20000000;
      *v1 = 2;
    }
  }
  else if ( !v2 && (FIELD_U8(result, 6266) & 0x80) != 0 )
  {
    FIELD_U32(result, 8016) = 25;
    FIELD_U32(result, 6260) &= ~0x10000000u;
    *v1 = 2;
    return 2;
  }
  return result;
}
