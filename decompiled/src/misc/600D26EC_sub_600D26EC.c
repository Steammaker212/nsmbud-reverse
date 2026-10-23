/* sub_600D26EC
 * address: 0x600D26EC   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600D26EC(int a1)
{
  int result; // r0
  _DWORD *v3; // r5

  v3 = (_DWORD *)(a1 + 6124);
  result = FIELD_U32(a1, 6124);
  if ( result == 2 )
  {
    result = FIELD_U8(a1, 6351);
    if ( FIELD_U8(a1, 6351) )
      return sub_600D3BA8(a1);
  }
  else if ( result == 1 )
  {
    result = sub_6077A638(dword_60CBFA90);
    if ( result == 1 )
    {
      FIELD_U8(a1, 6138) = 1;
      result = 2;
      *v3 = 2;
    }
  }
  return result;
}
