/* Fuzzy__collisionGroundPoundYoshi
 * address: 0x60277F8C   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A65D4
// 
// Overridden by: None
int __fastcall Fuzzy__collisionGroundPoundYoshi(float *a1, int a2, int a3)
{
  int v3; // r4

  v3 = FIELD_U32(a3, 64);
  if ( v3 )
  {
    sub_602A3520(a1, "SE_EMY_YOSHI_STEP", 0);
    (*(void (__fastcall **)(float *, int))(*(_DWORD *)a1 + 380))(a1, v3);
  }
  return 1;
}
