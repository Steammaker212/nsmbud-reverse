/* sub_608B6C28
 * address: 0x608B6C28   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B6C28(int result, int a2)
{
  int v2; // r4
  bool v3; // zf

  v2 = result;
  if ( a2 )
  {
    result = *(_DWORD *)a2;
    if ( *(_DWORD *)a2 == 1263419974 )
    {
      result = FIELD_U16(a2, 4);
      v3 = result == 65279;
      if ( result == 65279 )
      {
        result = FIELD_U32(a2, 8);
        v3 = result == 0x10000;
      }
      if ( v3 )
      {
        *(_DWORD *)v2 = a2;
        result = sub_608D5408(a2);
        if ( *(_DWORD *)result == 1330007625 )
        {
          FIELD_U32(v2, 4) = result + 8;
          FIELD_U8(v2, 8) = 1;
          return 1;
        }
      }
    }
  }
  return result;
}
