/* sub_60087788
 * address: 0x60087788   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60087788(int a1)
{
  _DWORD *v2; // r0
  int v3; // r5
  _DWORD *v4; // r1
  unsigned int v5; // r2
  unsigned int v6; // r0
  _DWORD *v7; // r1
  unsigned int v8; // r0
  int v9; // r1
  unsigned int v10; // r0
  bool v11; // zf
  int result; // r0
  int v13; // [sp+4h] [bp-14h] BYREF

  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 7612));
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648));
  if ( (FIELD_U8(a1, 2872) & 1) != 0 && FIELD_F32(a1, 124) < 0.0 )
    FIELD_U32(a1, 124) = 0;
  v13 = 0;
  sub_6083246C((int *)(a1 + 160), &v13, (signed int *)(a1 + 7620));
  v3 = a1 + 7100;
  v2 = *(_DWORD **)(a1 + 7100);
  v4 = (_DWORD *)v2[3];
  v5 = v2[2];
  v6 = v2[17];
  if ( v5 > v6 )
    v4 += v6;
  if ( sub_60418548(*v4 + 4) )
    FIELD_U32(a1, 7616) |= 1u;
  v7 = *(_DWORD **)(*(_DWORD *)v3 + 12);
  v8 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v8 )
    v7 += v8;
  if ( sub_60418548(*v7 + 4) )
    FIELD_U32(a1, 7616) &= ~2u;
  v9 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v10 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v10 )
    v9 += 4 * v10;
  v11 = (*(_BYTE *)(*(_DWORD *)v9 + 28) & 0x20) == 0;
  if ( (*(_BYTE *)(*(_DWORD *)v9 + 28) & 0x20) != 0 )
    v11 = (FIELD_U8(a1, 2872) & 1) == 0;
  if ( !v11 )
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C81E6C);
  result = dword_60CC6484;
  if ( (float)(FIELD_F32(a1, 112) + 36.0) <= FIELD_F32(dword_60CC6484, 132) )
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C81E6C);
  return result;
}
