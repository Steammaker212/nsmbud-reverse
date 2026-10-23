/* sub_600AAEF8
 * address: 0x600AAEF8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600AAEF8(int a1)
{
  int v2; // r4
  int v3; // t1
  int *v4; // r0
  int v5; // r0
  int *v6; // r0
  int result; // r0

  KoopalingBase__vf5CC();
  v3 = FIELD_U32(a1, 7096);
  v2 = a1 + 7096;
  v4 = *(int **)(v3 + 28);
  if ( FIELD_U32(v3, 24) > 1u )
    ++v4;
  v5 = *v4;
  FIELD_U32(v5, 20) = 0;
  FIELD_U32(v5, 28) |= 2u;
  v6 = *(int **)(*(_DWORD *)v2 + 28);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 24) > 1u )
    ++v6;
  result = *v6;
  FIELD_U32(result, 24) = 0;
  return result;
}
