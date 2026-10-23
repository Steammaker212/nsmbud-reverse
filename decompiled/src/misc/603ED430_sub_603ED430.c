/* sub_603ED430
 * address: 0x603ED430   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603ED430(int a1)
{
  int result; // r0
  int *v3; // r5
  int i; // r7

  result = FIELD_U32(a1, 252);
  if ( result >= 1 )
  {
    v3 = (int *)(a1 + 128);
    for ( i = 0; i < result; ++i )
    {
      sub_604434C8((int)DrawMgr_instance, *((unsigned __int16 *)v3 - 3), (int)(v3 - 9), v3, a1 + 56);
      result = FIELD_U32(a1, 252);
      v3 += 10;
    }
  }
  return result;
}
