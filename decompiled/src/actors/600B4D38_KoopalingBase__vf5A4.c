/* KoopalingBase__vf5A4
 * address: 0x600B4D38   size: 192   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall KoopalingBase__vf5A4(int a1)
{
  int v2; // r5
  int v3; // r1
  __int16 v4; // r2
  int v5; // r1
  unsigned int v6; // r0
  int result; // r0

  v2 = a1 + 7096;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  FIELD_U32(a1, 7124) = sub_600B2FD4(a1, v3, v4);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1036))(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1040))(a1);
  v5 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v6 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v6 )
    v5 += 4 * v6;
  if ( (*(_BYTE *)(*(_DWORD *)v5 + 28) & 0x20) != 0 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C83290);
  result = **(unsigned __int8 **)(FIELD_U32(a1, 7112) + 4);
  if ( !**(_BYTE **)(FIELD_U32(a1, 7112) + 4) )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C83290);
  return result;
}
