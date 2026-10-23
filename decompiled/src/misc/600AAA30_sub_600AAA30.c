/* sub_600AAA30
 * address: 0x600AAA30   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600AAA30(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r1
  unsigned int v5; // r0
  int result; // r0

  v2 = a1 + 7096;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  CollisionMgr_process((_BYTE *)(a1 + 648));
  FIELD_U32(a1, 80) = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  v3 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1108))(a1);
  sub_600B33DC(a1, v3);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1040))(a1);
  v4 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v5 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v5 )
    v4 += 4 * v5;
  if ( (*(_BYTE *)(*(_DWORD *)v4 + 28) & 0x20) != 0 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C83290);
  result = **(unsigned __int8 **)(FIELD_U32(a1, 7112) + 4);
  if ( !**(_BYTE **)(FIELD_U32(a1, 7112) + 4) )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C83290);
  return result;
}
