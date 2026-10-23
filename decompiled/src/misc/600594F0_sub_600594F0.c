/* sub_600594F0
 * address: 0x600594F0   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600594F0(int a1)
{
  int v2; // r5
  int v3; // r6
  int v4; // r0
  int v5; // r1
  unsigned int v6; // r0
  int result; // r0
  int v8; // r0
  _DWORD v9[8]; // [sp+0h] [bp-20h] BYREF

  v2 = a1 + 7204;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7204));
  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v3 = FIELD_U32(a1, 80);
  if ( v3 != StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108)) && sub_600525EC((_DWORD *)a1) )
    FIELD_U32(a1, 80) ^= 1u;
  CollisionMgr_process((_BYTE *)(a1 + 648));
  v4 = FIELD_U32(a1, 2872);
  if ( (v4 & 0x440000) != 0 && (v4 & 0x10000000) == 0 || (v4 & 0x880000) != 0 && (v4 & 0x20000000) == 0 )
  {
    FIELD_F32(a1, 120) = FIELD_F32(a1, 120) * -0.5;
    FIELD_F32(a1, 132) = -FIELD_F32(a1, 132);
  }
  v5 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v6 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v6 )
    v5 += 4 * v6;
  if ( (*(_BYTE *)(*(_DWORD *)v5 + 28) & 0x10) != 0 )
  {
    v9[2] = &sead__SafeStringBase__vtable;
    v9[3] = "wait";
    sub_60051780(a1);
    v9[0] = &sead__SafeStringBase__vtable;
    v9[1] = "wait";
    sub_60051794(a1, (int)v9, 1);
  }
  result = FIELD_U16(a1, 6276);
  if ( !FIELD_U16(a1, 6276) )
  {
    v8 = FIELD_U32(a1, 8740);
    FIELD_U32(a1, 8740) = v8 - 1;
    if ( v8 < 2 || (sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) & 1) != 0 )
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
