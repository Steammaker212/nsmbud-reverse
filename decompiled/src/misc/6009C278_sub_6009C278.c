/* sub_6009C278
 * address: 0x6009C278   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6009C278(int a1)
{
  int *v2; // r5
  unsigned int v3; // r3
  int v4; // r1
  int result; // r0

  v2 = (int *)(a1 + 7096);
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v3 = *(_DWORD *)(*v2 + 68);
  v4 = *(_DWORD *)(*v2 + 12);
  if ( *(_DWORD *)(*v2 + 8) > v3 )
    v4 += 4 * v3;
  if ( (*(_BYTE *)(*(_DWORD *)v4 + 28) & 0x20) != 0 )
    sub_60421AD4(*v2);
  result = FIELD_U16(a1, 6276);
  if ( !FIELD_U16(a1, 6276) )
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C824B0);
  return result;
}
