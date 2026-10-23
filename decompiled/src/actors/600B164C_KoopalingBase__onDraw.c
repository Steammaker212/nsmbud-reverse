/* KoopalingBase__onDraw
 * address: 0x600B164C   size: 80   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Actor : 0x60002F54
// 
// Overridden by: None
int __fastcall KoopalingBase__onDraw(int *a1)
{
  int v2; // r0
  int *v3; // r5

  v3 = a1 + 1794;
  v2 = a1[1794];
  if ( (v2 & 1) != 0 )
  {
    (*(void (__fastcall **)(int *))(*a1 + 1052))(a1);
    v2 = *v3;
  }
  if ( (v2 & 2) != 0 )
    (*(void (__fastcall **)(int *))(*a1 + 1056))(a1);
  return 1;
}
