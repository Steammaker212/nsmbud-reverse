/* sub_60332C30
 * address: 0x60332C30   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60332C30(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // t1
  float v5; // s0
  _DWORD *v6; // r3
  _DWORD **v7; // r6
  _DWORD *v8; // r5
  unsigned int v9; // r1
  unsigned int v10; // r2
  _DWORD *v11; // r0
  int v12; // r0
  int (__fastcall *v13)(int, _DWORD *); // r2
  int v14; // r0
  float v15; // s2
  int v16; // r1
  unsigned int v17; // r0
  int result; // r0
  _DWORD v19[16]; // [sp+0h] [bp-40h] BYREF

  v4 = FIELD_U32(a1, 6964);
  v2 = (_DWORD *)(a1 + 6964);
  v3 = v4;
  if ( v4 >= 1 )
    FIELD_U32(a1, 160) += v3;
  *v2 = v3 - FIELD_U32(a1, 6968);
  CollisionActor__handleGravity((CollisionActor *)a1);
  v5 = CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648), v5);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    FIELD_U32(a1, 124) = 0;
  v7 = (_DWORD **)(a1 + 6336);
  v6 = *(_DWORD **)(a1 + 6336);
  v8 = (_DWORD *)v6[3];
  v9 = v6[2];
  v10 = v6[17];
  v11 = v8;
  if ( v9 > v10 )
    v11 = &v8[v10];
  if ( *(float *)(*v11 + 20) < 30.0 )
  {
    v12 = *v6;
    v13 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)*v6 + 84);
    v19[0] = &sead__SafeStringBase__vtable;
    v19[1] = "spine";
    v14 = v13(v12, v19);
    (*(void (__fastcall **)(_DWORD, int, _DWORD *))(*(_DWORD *)**v7 + 108))(**v7, v14, v19);
    v15 = (float)(*(float *)&v19[7] - FIELD_F32(a1, 112)) + -2.0;
    FIELD_F32(a1, 304) = *(float *)&v19[3] - FIELD_F32(a1, 108);
    FIELD_F32(a1, 308) = v15;
    v8 = (_DWORD *)(*v7)[3];
    v9 = (*v7)[2];
    v10 = (*v7)[17];
  }
  if ( v9 > v10 )
    v8 += v10;
  if ( sub_60418548(*v8 + 4) )
    FIELD_U8(a1, 7004) = 1;
  v16 = (*v7)[3];
  v17 = (*v7)[17];
  if ( (*v7)[2] > v17 )
    v16 += 4 * v17;
  result = *(unsigned __int8 *)(*(_DWORD *)v16 + 28);
  if ( (result & 0x20) != 0 )
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C94048);
  return result;
}
