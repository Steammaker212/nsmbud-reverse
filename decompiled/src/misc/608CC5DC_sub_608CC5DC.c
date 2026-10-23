/* sub_608CC5DC
 * address: 0x608CC5DC   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_608CC5DC(int a1, unsigned int a2, unsigned int a3)
{
  unsigned int result; // r0
  int *v5; // r0

  result = *(unsigned __int8 *)(a1 - 128);
  if ( result )
  {
    result = FIELD_U32(a1, 32);
    if ( result >= a2 && result <= a3 )
    {
      *(_BYTE *)(a1 - 125) = 1;
      if ( FIELD_U8(a1, 114) )
      {
        v5 = sub_608C3C60();
        sub_608C411C((int)v5, a1 + 12);
        FIELD_U8(a1, 114) = 0;
      }
      result = *(unsigned __int8 *)(a1 - 127);
      if ( *(_BYTE *)(a1 - 127) )
      {
        *(_BYTE *)(a1 - 127) = 0;
        return 0;
      }
    }
  }
  return result;
}
