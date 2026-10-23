/* sub_607F68AC
 * address: 0x607F68AC   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F68AC(int a1, int a2)
{
  int v4; // r4
  int v5; // r0
  int v6; // r0

  v4 = 0;
  v5 = FIELD_U32(a1, 104);
  if ( v5 )
  {
    if ( !sub_607EBD84(v5) )
    {
      v6 = **(_DWORD **)(a1 + 104);
      if ( v6 )
      {
        if ( sub_607F0350(v6) == 1 )
        {
          v4 = 1;
          FIELD_U32(a1, 108) = a2;
          FIELD_U8(a1, 112) = 0;
        }
      }
    }
  }
  return v4;
}
