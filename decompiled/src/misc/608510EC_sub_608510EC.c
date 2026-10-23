/* sub_608510EC
 * address: 0x608510EC   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608510EC(int result, int a2)
{
  int v2; // r12
  bool v3; // zf
  int v4; // r2

  v3 = FIELD_U8(result, 20) == 0;
  if ( FIELD_U8(result, 20) )
  {
    v2 = FIELD_U16(result, 32);
    v3 = v2 == 0;
  }
  if ( !v3 )
  {
    v4 = 0;
    while ( *(_DWORD *)(FIELD_U32(result, 28) + 8 * v4) != a2 )
    {
      if ( ++v4 >= v2 )
        return result;
    }
    return (*(int (__fastcall **)(int))(*(_DWORD *)result + 76))(result);
  }
  return result;
}
