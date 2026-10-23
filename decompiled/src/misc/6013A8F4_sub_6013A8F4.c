/* sub_6013A8F4
 * address: 0x6013A8F4   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6013A8F4(int a1)
{
  int v1; // r12
  unsigned int v2; // r3
  int *v3; // lr
  int v4; // r1
  int v5; // r2

  v1 = 0;
  v3 = (int *)(a1 + 6768);
  v2 = FIELD_U32(a1, 6768);
  if ( v2 >= 4 )
    v2 = 0;
  v4 = EnemyCounterMaybe_instance + 100;
  ++*(_DWORD *)(EnemyCounterMaybe_instance + 100 + 8 * v2);
  v5 = *v3;
  if ( (unsigned int)*v3 >= 4 )
    v5 = 0;
  ++*(_DWORD *)(v4 + 8 * v5 + 4);
  if ( FIELD_S8(dword_60C9CF0C, 1404) >= 0 && !FIELD_U8(dword_60C9CF0C, 1406) )
    v1 = 1;
  FIELD_U32(a1, 6760) = 60;
  return v1;
}
