/* sub_60087604
 * address: 0x60087604   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60087604(int a1)
{
  _DWORD *v2; // r0
  int v3; // r5
  _DWORD *v4; // r1
  unsigned int v5; // r2
  unsigned int v6; // r0
  float v7; // s0
  int v8; // r1
  unsigned int v9; // r0
  int result; // r0
  bool v11; // zf

  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648));
  v3 = a1 + 7100;
  v2 = *(_DWORD **)(a1 + 7100);
  v4 = (_DWORD *)v2[3];
  v5 = v2[2];
  v6 = v2[17];
  if ( v5 > v6 )
    v4 += v6;
  if ( sub_60418548(*v4 + 4) )
  {
    v7 = *(float *)&dword_60C81F4C;
    FIELD_U32(a1, 124) = dword_60C81F4C;
    FIELD_F32(a1, 136) = -v7;
    FIELD_U32(a1, 100) = dword_60C81F24;
  }
  v8 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v9 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v9 )
    v8 += 4 * v9;
  result = *(unsigned __int8 *)(*(_DWORD *)v8 + 28);
  v11 = (result & 0x20) == 0;
  if ( (result & 0x20) != 0 )
  {
    result = FIELD_U8(a1, 2872);
    v11 = (result & 1) == 0;
  }
  if ( !v11 )
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C81E6C);
  return result;
}
