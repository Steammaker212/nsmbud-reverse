/* SolidOnTopCollider_vf38
 * address: 0x6015EA70   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SolidOnTopCollider_vf38(int result, _QWORD *a2)
{
  int v2; // r12
  int v3; // r2
  int v4; // r3
  int v5; // lr

  v2 = FIELD_U32(result, 348);
  if ( v2 >= 1 )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      v5 = FIELD_U32(result, 352);
      if ( v2 > (unsigned int)v4++ )
        v5 += v3;
      v3 += 32;
      FIELD_U64(v5, 24) = *a2;
      v2 = FIELD_U32(result, 348);
    }
    while ( v4 < v2 );
  }
  return result;
}
