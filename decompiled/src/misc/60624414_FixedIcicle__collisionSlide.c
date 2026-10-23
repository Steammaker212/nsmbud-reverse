/* FixedIcicle__collisionSlide
 * address: 0x60624414   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A5C00
// 
// Overridden by: None
int __fastcall FixedIcicle__collisionSlide(int a1, int a2, int a3)
{
  int v3; // r6
  int v6; // r0
  bool v7; // zf

  v6 = FIELD_U32(a3, 136);
  v7 = v6 == 15;
  if ( v6 != 15 )
  {
    v3 = FIELD_U32(a3, 64);
    v7 = v3 == 0;
  }
  if ( !v7 && !(*(int (__fastcall **)(int))(*(_DWORD *)v3 + 1156))(v3) )
    (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v3 + 1164))(v3, a2, a3);
  return 1;
}
