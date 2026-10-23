/* sub_60056D34
 * address: 0x60056D34   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60056D34(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r1
  unsigned int v5; // r0
  int result; // r0
  int v7; // r1
  unsigned int v8; // r0
  int v9; // r6
  int *v10; // r1
  unsigned int v11; // r0
  _DWORD v12[10]; // [sp+0h] [bp-28h] BYREF

  v2 = a1 + 7204;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7204));
  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648));
  v3 = FIELD_U32(a1, 2872);
  if ( (v3 & 0x440000) != 0 && (v3 & 0x10000000) == 0 || (v3 & 0x880000) != 0 && (v3 & 0x20000000) == 0 )
  {
    FIELD_F32(a1, 120) = FIELD_F32(a1, 120) * -0.5;
    FIELD_F32(a1, 132) = -FIELD_F32(a1, 132);
  }
  v4 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v5 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v5 )
    v4 += 4 * v5;
  if ( (*(_BYTE *)(*(_DWORD *)v4 + 28) & 0x10) != 0 )
  {
    v12[2] = &sead__SafeStringBase__vtable;
    v12[3] = "wait";
    sub_60051780(a1);
    v12[0] = &sead__SafeStringBase__vtable;
    v12[1] = "wait";
    sub_60051794(a1, (int)v12, 1);
  }
  result = FIELD_U16(a1, 6276);
  if ( !FIELD_U16(a1, 6276) )
  {
    v7 = *(_DWORD *)(*(_DWORD *)v2 + 12);
    v8 = *(_DWORD *)(*(_DWORD *)v2 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v8 )
      v7 += 4 * v8;
    v9 = *(_DWORD *)(*(_DWORD *)v7 + 20);
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C804A8);
    v10 = *(int **)(*(_DWORD *)v2 + 12);
    v11 = *(_DWORD *)(*(_DWORD *)v2 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v11 )
      v10 += v11;
    result = *v10;
    FIELD_U32(result, 20) = v9;
    FIELD_U32(result, 28) |= 2u;
  }
  return result;
}
