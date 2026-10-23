/* sub_6006DF14
 * address: 0x6006DF14   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6006DF14(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0

  a1[30] = 0;
  a1[31] = 1082130432;
  a1[32] = 0;
  a1[25] = -1110651699;
  a1[34] = -1047527424;
  *(_DWORD *)(**(_DWORD **)(a1[1778] + 28) + 24) = 0;
  v2 = **(_DWORD **)(a1[1778] + 28);
  FIELD_U32(v2, 20) = 0;
  FIELD_U32(v2, 28) |= 2u;
  sub_60075CE0(a1);
  v3 = FIELD_U32(EnemyCounterMaybe_instance, 24);
  if ( v3 )
    FIELD_U8(v3, 6102) = 1;
  v4 = dword_60CBC000;
  FIELD_U8(dword_60CBC000, 166) = 0;
  FIELD_U32(v4, 132) = 0;
  FIELD_U32(v4, 140) = 0;
  return (*(int (__fastcall **)(_DWORD *))(*a1 + 800))(a1);
}
