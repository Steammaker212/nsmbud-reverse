/* sub_607B926C
 * address: 0x607B926C   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_607B926C(int a1)
{
  int v2; // r5
  int v3; // r0
  bool v4; // zf
  unsigned int v5; // r6
  int v6; // r0

  if ( (FIELD_U8(a1, 1223) & 2) != 0 )
  {
    v2 = 0;
    if ( FIELD_U32(a1, 12088) || FIELD_U32(a1, 12092) )
      return v2;
  }
  v2 = 0;
  if ( FIELD_U32(a1, 12084) || (FIELD_U8(a1, 6902) & 4) != 0 || (FIELD_U8(a1, 1225) & 4) == 0 )
    return v2;
  v3 = sub_60766708(a1);
  v4 = v3 == 0;
  if ( !v3 )
    v4 = (FIELD_U8(a1, 1222) & 8) == 0;
  if ( !v4 )
    return v2;
  if ( sub_6079DD80(a1) )
    return v2;
  if ( sub_6079DE44(a1) )
    return v2;
  v2 = 1;
  if ( sub_6079DB30(a1) )
    return v2;
  v5 = FIELD_U32(a1, 1320);
  v6 = sub_6079D894(a1);
  if ( !v6 )
  {
    if ( v5 > 9 )
      return v5 == 4 && (v5 | 1) != 9;
    if ( ((1 << v5) & 0x390) == 0 )
      return v5 == 4 && (v5 | 1) != 9;
    v2 = 0;
    if ( !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1068))(a1) )
      return v5 == 4 && (v5 | 1) != 9;
    return v2;
  }
  v5 = FIELD_U32(v6, 1320);
  return v5 == 4 && (v5 | 1) != 9;
}
