/* PowBlock_vf7
 * address: 0x605C9330   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PowBlock_vf7(int a1)
{
  int v2; // r4
  int v3; // r2
  _BOOL4 v4; // r1
  bool v5; // zf

  v2 = 0;
  if ( sub_605CC294() != 1 )
    return v2;
  if ( FIELD_U32(a1, 6144) )
  {
    v2 = 1;
    v3 = FIELD_U32(a1, 6148);
    v4 = 1;
    if ( v3 )
    {
      FIELD_U32(a1, 6148) = v3 - 1;
      v4 = v3 == 1;
    }
    v5 = v4;
    if ( v4 )
      v5 = (FIELD_U32(a1, 6124) & 4) == 0;
    if ( v5 )
    {
      v2 = 1;
      if ( !ActiveCollider_check5C((ActiveCollider *)(a1 + 188), 1) )
        *(_DWORD *)(FIELD_U32(a1, 6144) + 148) = 0;
    }
    return v2;
  }
  return 1;
}
