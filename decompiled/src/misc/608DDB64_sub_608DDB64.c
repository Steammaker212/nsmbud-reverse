/* sub_608DDB64
 * address: 0x608DDB64   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DDB64(int a1)
{
  int v1; // r4
  unsigned int v2; // r0

  v1 = 4;
  if ( FIELD_U8(a1, 192) )
  {
    v2 = *((_DWORD *)sub_608065A0() + 32);
    if ( v2 <= 2 )
      return dword_60B3A3BC[v2];
  }
  return v1;
}
