/* sub_60332EB8
 * address: 0x60332EB8   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60332EB8(int a1)
{
  float v2; // s0
  int v3; // r5
  _DWORD *v4; // t1
  _DWORD *v5; // r1
  unsigned int v6; // r0
  int v7; // r0
  unsigned int v8; // r1
  unsigned int v9; // r2
  int v10; // r3
  int result; // r0
  int v12; // [sp+0h] [bp-18h] BYREF
  int target; // [sp+4h] [bp-14h] BYREF

  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648), v2);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    FIELD_U32(a1, 124) = 0;
  v4 = *(_DWORD **)(a1 + 6336);
  v3 = a1 + 6336;
  v5 = (_DWORD *)v4[3];
  v6 = v4[17];
  if ( v4[2] > v6 )
    v5 += v6;
  if ( sub_60418548(*v5 + 4) )
  {
    FIELD_U8(a1, 7004) = 0;
    FIELD_U32(a1, 304) = 0;
    FIELD_U32(a1, 308) = 1099956224;
    FIELD_U32(a1, 312) = 1096810496;
    FIELD_U32(a1, 316) = 1096810496;
  }
  v7 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v8 = *(_DWORD *)(*(_DWORD *)v3 + 8);
  v9 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  v10 = v7;
  if ( v8 > v9 )
    v10 = v7 + 4 * v9;
  if ( *(float *)(*(_DWORD *)v10 + 20) < 13.0 )
  {
    target = 0;
    v12 = 184549376;
    moveValueTo((int *)(a1 + 160), &target, &v12);
    v7 = *(_DWORD *)(*(_DWORD *)v3 + 12);
    v8 = *(_DWORD *)(*(_DWORD *)v3 + 8);
    v9 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  }
  if ( v8 > v9 )
    v7 += 4 * v9;
  result = *(unsigned __int8 *)(*(_DWORD *)v7 + 28);
  if ( (result & 0x20) != 0 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C93FE8);
  return result;
}
