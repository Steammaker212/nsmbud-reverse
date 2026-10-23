/* sub_6030C3AC
 * address: 0x6030C3AC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6030C3AC(int result, unsigned int a2)
{
  unsigned int v2; // r2
  int v3; // r12

  v2 = a2;
  if ( a2 >= 8 )
    v2 = 0;
  if ( *(unsigned __int8 *)(result + v2 + 7592) != 255 )
  {
    if ( *(_BYTE *)(result + v2 + 7592) )
    {
      return sub_6030D1EC();
    }
    else
    {
      v3 = FIELD_U32(result, 80);
      result += 4 * v2;
      FIELD_U32(result, 7536) = dword_60AF1EC0[(unsigned __int8)((v3 & (1 << a2)) >> a2)];
    }
  }
  return result;
}
