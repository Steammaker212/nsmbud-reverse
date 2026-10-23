/* Fuzzy__vf268
 * address: 0x60278620   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A94A8
// 
// Overridden by: None
int __fastcall Fuzzy__vf268(int a1)
{
  if ( !FIELD_U8(a1, 6492) )
    SE_EMY_CHOROBON_ref(a1);
  return Enemy__vf268((Enemy *)a1);
}
