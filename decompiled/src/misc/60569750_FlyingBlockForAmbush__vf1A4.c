/* FlyingBlockForAmbush__vf1A4
 * address: 0x60569750   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BlockBase : 0x60564D7C
// 
// Overridden by: None
int __fastcall FlyingBlockForAmbush__vf1A4(_DWORD *a1)
{
  int v2; // r2
  int v3; // r2

  a1[1720] = 0;
  v2 = a1[1847];
  if ( !v2 || (v3 = v2 - 1, (a1[1847] = v3) == 0) )
  {
    a1[1842] = 0;
    a1[1824] = 49;
    a1[1608] = sub_605B348C;
    a1[1609] = sub_605B3934;
    a1[1610] = sub_605B4110;
    (*(void (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60CAE2F8);
  }
  return sub_60564BFC((int)a1);
}
