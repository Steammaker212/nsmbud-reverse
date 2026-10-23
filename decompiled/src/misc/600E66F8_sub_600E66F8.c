/* sub_600E66F8
 * address: 0x600E66F8   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600E66F8(int a1)
{
  int v2; // r5
  float v3; // s0
  int v4; // r0
  int result; // r0
  int v6; // r1
  unsigned int v7; // r2
  bool v8; // zf

  v2 = a1 + 7096;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  CollisionActor__handleGravity((CollisionActor *)a1);
  v3 = CollisionActor__handleSpeed((CollisionActor *)a1);
  v4 = (*(int (__fastcall **)(int, float))(*(_DWORD *)a1 + 1108))(a1, v3);
  result = sub_600B33DC((int *)a1, v4);
  v6 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v7 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v7 )
    v6 += 4 * v7;
  v8 = result == 0;
  if ( result )
  {
    result = *(_DWORD *)(*(_DWORD *)v6 + 28) & 0x20;
    v8 = result == 0;
  }
  if ( !v8 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8512C);
  return result;
}
