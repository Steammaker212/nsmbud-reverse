/* CarryableEnemy__vf2AC
 * address: 0x6027341C   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall CarryableEnemy__vf2AC(int a1)
{
  int v2; // r1
  unsigned int v3; // r0
  int v4; // r1
  int result; // r0

  FIELD_U32(a1, 328) = 9;
  sub_6015907C((ActiveCollider *)(a1 + 188), 176);
  FIELD_U32(a1, 340) |= 0x1000u;
  FIELD_U32(a1, 3200) |= 0x18u;
  FIELD_U32(a1, 3192) |= 0x18u;
  v2 = FIELD_U32(a1, 3184);
  FIELD_U32(a1, 3176) |= 0x18u;
  FIELD_U32(a1, 3184) = v2 | 0x18;
  sub_600009FC((StageActor *)a1);
  v3 = FIELD_U8(a1, 84);
  v4 = 0;
  if ( v3 < 4 )
    v4 = (char)v3;
  result = a1 + 2 * v4;
  FIELD_U16(result, 6140) = 10;
  return result;
}
