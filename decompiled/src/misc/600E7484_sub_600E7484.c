/* sub_600E7484
 * address: 0x600E7484   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600E7484(int a1)
{
  int v2; // r4
  int v3; // t1
  int v4; // r0
  int *v5; // r0
  int result; // r0

  PlayerLookTargetMgr_remove(PlayerLookTargetList_instance, a1 + 6644);
  v3 = FIELD_U32(a1, 7096);
  v2 = a1 + 7096;
  v4 = FIELD_U32(v3, 28);
  if ( FIELD_U32(v3, 24) > 1u )
    v4 += 4;
  *(_DWORD *)(*(_DWORD *)v4 + 24) = 0;
  v5 = *(int **)(*(_DWORD *)v2 + 28);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 24) > 1u )
    ++v5;
  result = *v5;
  FIELD_U32(result, 20) = 0;
  FIELD_U32(result, 28) |= 2u;
  return result;
}
