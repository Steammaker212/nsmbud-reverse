/* SpinyBase__ctor
 * address: 0x603BD010   size: 208   group: misc
 * sym: SpinyBase::SpinyBase(ActorBuildInfo const*) as C2
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

CarryableEnemy *__fastcall SpinyBase__ctor(CarryableEnemy *a1, ActorBuildInfo *a2)
{
  int v2; // r4
  int v3; // r2
  CarryableEnemy *result; // r0

  v2 = FIELD_U32(a2, 0x0) & 3;
  v3 = 0;
  if ( v2 == 1 )
    v3 = 2;
  if ( !v2 )
    v3 = 1;
  result = ShellEnemy__ctor(a1, a2, v3, v2 == 3, 0);
  FIELD_U32(result, 0x0) = (int)off_60BF6040;
  BYTE2(result[1]._._._._.aCollider.field_118) = 0;
  *(float *)((char *)&result[1]._._._._.field_1F8 + 2) = 0.0;
  *(float *)((char *)&result[1]._._._._.field_1FC + 2) = 0.0;
  BYTE2(result[1]._._._._.field_200) = 0;
  *(float *)((char *)&result[1]._._._._.field_204 + 2) = 0.0;
  *(float *)((char *)&result[1]._._._._.field_208 + 2) = 0.0;
  BYTE2(result[1]._._._._.aCollider.field_12C) = 0;
  *(int *)((char *)&result[1]._._._._.aCollider.field_128 + 2) = 0;
  *(int *)((char *)&result[1]._._._._.aCollider.field_124 + 2) = 0;
  *(int *)((char *)&result[1]._._._._.aCollider.field_11C + 2) = 0;
  *(int *)((char *)&result[1]._._._._.aCollider.field_120 + 2) = 0;
  LOBYTE(result[1]._._._._.field_1F8) = 0;
  HIWORD(result[1]._._._._.field_1F4) = 0;
  *(int *)((char *)&result[1]._._._._.field_1F0 + 2) = 0;
  *(float *)((char *)&result[1]._._._._.field_1EC + 2) = 0.0;
  return result;
}
