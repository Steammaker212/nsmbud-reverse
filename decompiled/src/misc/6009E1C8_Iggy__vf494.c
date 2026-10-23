/* Iggy__vf494
 * address: 0x6009E1C8   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: KoopalingBase : 0x600B7EDC
// 
// Overridden by: None
float __fastcall Iggy__vf494(_DWORD *a1)
{
  int *v1; // r2
  int v2; // r1
  float result; // s0

  if ( !a1[80] )
  {
    v1 = &dword_6009E20C;
    LOWORD(v2) = 0;
    if ( a1[20] == 1 )
      v1 = &dword_6009E210;
    HIWORD(v2) = 16720;
    result = *(float *)v1;
    a1[76] = *v1;
    a1[77] = v2;
    a1[78] = 1097859072;
    a1[79] = v2;
  }
  return result;
}
