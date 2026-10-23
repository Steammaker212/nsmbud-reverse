/* SledgeBro__collisionIceball
 * address: 0x602D6A88   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A6CF8
// 
// Overridden by: None
signed int __fastcall SledgeBro__collisionIceball(int a1, int a2, int a3)
{
  int v3; // r1

  if ( !FIELD_U8(a1, 6220) )
  {
    v3 = FIELD_U32(a3, 64);
    FIELD_U8(a1, 6288) = FIELD_F32(v3, 120) < 0.0;
    FIELD_U8(a1, 6227) = FIELD_U8(v3, 84);
    FIELD_U32(a1, 6852) = 0;
    FIELD_U8(a1, 6673) = 0;
    (*(void (__fastcall **)(int, StateVirtual *))(*(_DWORD *)a1 + 192))(a1, &Enemy_StateId_Frozen);
  }
  return 1;
}
