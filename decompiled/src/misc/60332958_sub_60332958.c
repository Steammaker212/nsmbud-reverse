/* sub_60332958
 * address: 0x60332958   size: 476   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60332958(int a1)
{
  _DWORD *v2; // r0
  _DWORD **v3; // r6
  int v4; // r1
  unsigned int v5; // r2
  unsigned int v6; // r0
  int v7; // r1
  float v8; // s0
  int *v9; // r3
  _DWORD *v10; // r5
  unsigned int v11; // r1
  unsigned int v12; // r2
  _DWORD *v13; // r0
  int v14; // r0
  int (__fastcall *v15)(int, _DWORD *); // r2
  int v16; // r0
  float v17; // s2
  int v18; // r2
  int result; // r0
  unsigned int v20; // r1
  _DWORD v21[16]; // [sp+0h] [bp-40h] BYREF

  v3 = (_DWORD **)(a1 + 6336);
  v2 = *(_DWORD **)(a1 + 6336);
  v4 = v2[3];
  v5 = v2[2];
  v6 = v2[17];
  if ( v5 > v6 )
    v4 += 4 * v6;
  if ( *(float *)(*(_DWORD *)v4 + 20) >= 8.0 )
  {
    v7 = FIELD_U32(a1, 6964);
    if ( v7 >= 1 )
      FIELD_U32(a1, 160) += v7;
    FIELD_U32(a1, 6964) = v7 - FIELD_U32(a1, 6968);
  }
  CollisionActor__handleGravity((CollisionActor *)a1);
  v8 = CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648), v8);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    FIELD_U32(a1, 124) = 0;
  v9 = *v3;
  v10 = (_DWORD *)(*v3)[3];
  v11 = (*v3)[2];
  v12 = (*v3)[17];
  v13 = v10;
  if ( v11 > v12 )
    v13 = &v10[v12];
  if ( *(float *)(*v13 + 20) < 30.0 )
  {
    v14 = *v9;
    v15 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)*v9 + 84);
    v21[0] = &sead__SafeStringBase__vtable;
    v21[1] = "spine";
    v16 = v15(v14, v21);
    (*(void (__fastcall **)(_DWORD, int, _DWORD *))(*(_DWORD *)**v3 + 108))(**v3, v16, v21);
    v17 = (float)(*(float *)&v21[7] - FIELD_F32(a1, 112)) + -2.0;
    FIELD_F32(a1, 304) = *(float *)&v21[3] - FIELD_F32(a1, 108);
    FIELD_F32(a1, 308) = v17;
    v10 = (_DWORD *)(*v3)[3];
    v11 = (*v3)[2];
    v12 = (*v3)[17];
  }
  if ( v11 > v12 )
    v10 += v12;
  if ( sub_60418548(*v10 + 4) )
    FIELD_U8(a1, 7004) = 1;
  v18 = FIELD_U32(a1, 6984);
  FIELD_U32(a1, 6984) = v18 - 1;
  result = (*v3)[3];
  v20 = (*v3)[17];
  if ( (*v3)[2] > v20 )
    result += 4 * v20;
  if ( v18 <= 1 )
  {
    result = *(_DWORD *)(*(_DWORD *)result + 28) & 0x20;
    if ( result )
      return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C94048);
  }
  return result;
}
