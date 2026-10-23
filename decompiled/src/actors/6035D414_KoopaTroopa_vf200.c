/* KoopaTroopa_vf200
 * address: 0x6035D414   size: 200   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall KoopaTroopa_vf200(int a1)
{
  int v2; // r5
  float v3; // s0
  int v4; // r0
  int v5; // r1
  unsigned int v6; // r0
  int result; // r0

  v2 = a1 + 6820;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6820));
  Animation_update(**(_DWORD **)(FIELD_U32(a1, 6824) + 12));
  CollisionActor__handleGravity((CollisionActor *)a1);
  v3 = CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648), v3);
  sub_6039F328(a1, 0);
  ((void (__fastcall *)(int))loc_603A2F84)(a1);
  v4 = FIELD_U32(a1, 2872);
  if ( (v4 & 0x440000) != 0 && (v4 & 0x10000000) == 0 || (v4 & 0x880000) != 0 && (v4 & 0x20000000) == 0 )
    FIELD_U32(a1, 120) = 0;
  v5 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v6 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v6 )
    v5 += 4 * v6;
  result = *(unsigned __int8 *)(*(_DWORD *)v5 + 28);
  if ( (result & 0x10) != 0 )
    return (*(int (__fastcall **)(int, StateVirtual *))(*(_DWORD *)a1 + 192))(a1, &stru_60C95454);
  return result;
}
