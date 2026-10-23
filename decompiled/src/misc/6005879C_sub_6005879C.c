/* sub_6005879C
 * address: 0x6005879C   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6005879C(int a1)
{
  int v2; // r5
  int v3; // r6
  int v4; // r1
  unsigned int v5; // r0
  int result; // r0
  int v7; // r0

  v2 = a1 + 7204;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7204));
  v3 = FIELD_U32(a1, 80);
  if ( v3 != StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108)) && sub_600525EC((_DWORD *)a1) )
    FIELD_U32(a1, 80) ^= 1u;
  CollisionMgr_process((_BYTE *)(a1 + 648));
  v4 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v5 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v5 )
    v4 += 4 * v5;
  result = *(unsigned __int8 *)(*(_DWORD *)v4 + 28);
  if ( (result & 0x20) != 0 )
  {
    v7 = FIELD_U32(a1, 8740);
    FIELD_U32(a1, 8740) = v7 - 1;
    if ( v7 < 2 || (sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) & 1) != 0 )
    {
      FIELD_U32(a1, 8740) = 2;
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1364))(a1);
    }
    else
    {
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C80A9C);
    }
  }
  return result;
}
