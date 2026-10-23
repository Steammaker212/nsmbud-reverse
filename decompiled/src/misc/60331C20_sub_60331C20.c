/* sub_60331C20
 * address: 0x60331C20   size: 568   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60331C20(int a1)
{
  _BYTE *v1; // r7
  float v3; // s0
  unsigned __int16 *v4; // r6
  unsigned __int16 v5; // r0
  _BOOL4 v6; // r0
  bool v7; // zf
  int v8; // r9
  int v9; // r8
  int v10; // r1
  unsigned int v11; // r0
  int v12; // r1
  unsigned int v13; // r0
  float v14; // s0
  int result; // r0
  int v16; // r0
  _BYTE *v17; // r6
  int (__fastcall *v18)(int, int *, float); // r2
  int *v19; // r1
  _BYTE *v20; // r5
  int U32; // r0

  CollisionActor__handleGravity((CollisionActor *)a1);
  v3 = CollisionActor__handleSpeed((CollisionActor *)a1);
  v4 = (unsigned __int16 *)(a1 + 6988);
  if ( FIELD_U16(a1, 6988) )
  {
    v5 = FIELD_U16(a1, 6988) - 1;
    *v4 = v5;
    v6 = v5 < 0xFu;
  }
  else
  {
    v6 = 1;
  }
  if ( FIELD_U8(a1, 7003) )
  {
    v7 = v6;
    if ( v6 )
    {
      v1 = (_BYTE *)(a1 + 6994);
      v7 = FIELD_U8(a1, 6994) == 0;
    }
    if ( v7 )
    {
      v8 = a1 + 6336;
      v9 = FIELD_U32(a1, 6972);
      sub_60421938(*(_DWORD **)(a1 + 6336), FIELD_U32(a1, 6340), (int)&unk_60C93F00);
      v10 = *(_DWORD *)(FIELD_U32(a1, 6336) + 12);
      v11 = *(_DWORD *)(FIELD_U32(a1, 6336) + 68);
      if ( *(_DWORD *)(FIELD_U32(a1, 6336) + 8) > v11 )
        v10 += 4 * v11;
      AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v10 + 4), 1);
      v12 = *(_DWORD *)(*(_DWORD *)v8 + 12);
      v13 = *(_DWORD *)(*(_DWORD *)v8 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v8 + 8) > v13 )
        v12 += 4 * v13;
      *(_DWORD *)(*(_DWORD *)v12 + 24) = v9;
      *v1 = 1;
    }
  }
  v14 = CollisionMgr_process((_BYTE *)(a1 + 648), v3);
  result = FIELD_U8(a1, 2872);
  if ( (result & 1) != 0 )
  {
    FIELD_U32(a1, 124) = 0;
    result = *v4;
    if ( !*v4 )
    {
      v16 = FIELD_U32(a1, 6300);
      if ( v16 )
      {
        if ( v16 != 2 )
        {
          v18 = *(int (__fastcall **)(int, int *, float))(*(_DWORD *)a1 + 192);
          v19 = &dword_60C93FE8;
          return v18(a1, v19, v14);
        }
        v17 = (_BYTE *)(a1 + 6997);
        if ( FIELD_U8(a1, 6997) >= 2u )
        {
          *v17 = 0;
          v18 = *(int (__fastcall **)(int, int *, float))(*(_DWORD *)a1 + 192);
          v19 = &dword_60C93FA8;
          return v18(a1, v19, v14);
        }
        v18 = *(int (__fastcall **)(int, int *, float))(*(_DWORD *)a1 + 192);
        if ( FIELD_U8(a1, 7003) )
        {
          v19 = &dword_60C93FE8;
          return v18(a1, v19, v14);
        }
        v18(a1, &dword_60C93FA8, v14);
        *v17 = 0;
        return 0;
      }
      else
      {
        v20 = (_BYTE *)(a1 + 6996);
        if ( FIELD_U8(a1, 6996) >= 2u )
        {
          *v20 = 0;
          v18 = *(int (__fastcall **)(int, int *, float))(*(_DWORD *)a1 + 192);
          v19 = &dword_60C93FE8;
          return v18(a1, v19, v14);
        }
        U32 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
        v18 = *(int (__fastcall **)(int, int *, float))(*(_DWORD *)a1 + 192);
        if ( U32 >= 0 )
        {
          v19 = &dword_60C93FA8;
          return v18(a1, v19, v14);
        }
        ((void (__fastcall *)(int, int *))v18)(a1, &dword_60C93FE8);
        *v20 = 0;
        return 0;
      }
    }
  }
  return result;
}
