/* sub_608EE3EC
 * address: 0x608EE3EC   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608EE3EC(int a1)
{
  int result; // r0
  int v3; // r5

  result = FIELD_U8(a1, 68);
  if ( (result & 1) == 0 )
    result = (**(int (__fastcall ***)(int))(a1 + 44))(a1 + 44);
  v3 = FIELD_U32(a1, 20);
  if ( v3 )
  {
    result = FIELD_U8(a1, 68);
    if ( (result & 2) == 0 )
    {
      do
      {
        sub_608EE3EC(FIELD_U32(v3, 16));
        result = FIELD_U32(v3, 16);
        v3 = FIELD_U32(result, 24);
      }
      while ( v3 );
    }
  }
  return result;
}
