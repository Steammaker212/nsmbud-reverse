/* sub_60261720
 * address: 0x60261720   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60261720(int a1)
{
  int v2; // r5
  float v3; // s0
  int result; // r0

  v2 = a1 + 7068;
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 7068));
  CollisionActor__handleGravity((CollisionActor *)a1);
  v3 = CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648), v3);
  sub_6025FFE4(a1, 1);
  ((void (__fastcall *)(int))loc_602600B0)(a1);
  result = *(unsigned __int8 *)(**(_DWORD **)(*(_DWORD *)v2 + 12) + 28);
  if ( (result & 0x30) != 0 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8E48C);
  return result;
}
