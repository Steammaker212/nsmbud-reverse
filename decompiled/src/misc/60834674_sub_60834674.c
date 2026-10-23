/* sub_60834674
 * address: 0x60834674   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60834674(int a1)
{
  int v2; // r0
  bool v3; // zf

  v2 = dword_60C9C0FC;
  v3 = dword_60C9C0FC == 0;
  if ( dword_60C9C0FC )
  {
    v2 = FIELD_U32(dword_60C9C0FC, 724);
    v3 = v2 == 0;
  }
  if ( v3 )
    return 100663296;
  else
    return sub_6042EFA8(v2, a1);
}
