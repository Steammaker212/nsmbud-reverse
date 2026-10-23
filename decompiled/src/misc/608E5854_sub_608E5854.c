/* sub_608E5854
 * address: 0x608E5854   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E5854(int a1, _BYTE *a2, _DWORD *a3)
{
  int v5; // r4

  v5 = 0;
  if ( FIELD_U32(a1, 80) )
  {
    (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
    if ( a3[1] )
    {
      v5 = 1;
      *a2 = 0;
    }
  }
  return v5;
}
