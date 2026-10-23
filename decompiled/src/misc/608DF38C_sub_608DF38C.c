/* sub_608DF38C
 * address: 0x608DF38C   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DF38C(int result)
{
  _DWORD *v1; // r4
  _DWORD *v2; // r6

  v1 = *(_DWORD **)(result + 4);
  if ( v1 )
  {
    do
    {
      v2 = (_DWORD *)v1[2];
      result = sub_608DF38C(v1);
      *v1 = 0;
      v1[1] = 0;
      v1[2] = 0;
      v1[3] = 0;
      v1 = v2;
    }
    while ( v2 );
  }
  return result;
}
