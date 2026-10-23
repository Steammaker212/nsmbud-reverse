/* sub_60686118
 * address: 0x60686118   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60686118(int a1)
{
  unsigned int v2; // r6
  int v3; // r6

  v2 = FIELD_U32(a1, 20) & 0xF;
  if ( Actor__getProfileId((Actor *)a1) == 30 || Actor__getProfileId((Actor *)a1) == 31 )
    v2 |= 0x10u;
  if ( v2 >= 0x20 )
    v2 = 0;
  v3 = EnemyCounterMaybe_instance + 20 * v2;
  FIELD_U32(v3, 284) = FIELD_U32(a1, 108);
  FIELD_U32(v3, 288) = FIELD_U32(a1, 112);
  FIELD_U32(v3, 292) = (unsigned __int8)BYTE1(FIELD_U32(a1, 20));
  FIELD_U32(v3, 296) = 0;
  if ( Actor__getProfileId((Actor *)a1) == 31 )
    FIELD_U32(v3, 296) = 1;
  FIELD_U8(v3, 300) = (FIELD_U32(a1, 20) & 0x80) != 0;
  FIELD_U8(v3, 301) = (FIELD_U32(a1, 20) & 0x10) != 0;
  FIELD_U8(a1, 19) = 1;
  return 2;
}
