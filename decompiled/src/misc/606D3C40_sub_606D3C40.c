/* sub_606D3C40
 * address: 0x606D3C40   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606D3C40(int a1)
{
  int v1; // r1

  if ( FIELD_U8(a1, 7404) )
    v1 = 7392;
  else
    v1 = 7388;
  DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + v1));
  return 1;
}
