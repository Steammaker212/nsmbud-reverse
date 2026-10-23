/* sub_60358D4C
 * address: 0x60358D4C   size: 476   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60358D4C(int a1)
{
  int v2; // r6
  float v3; // s0
  _DWORD *v4; // r7
  int v5; // r0
  _DWORD *v6; // r5
  int result; // r0
  unsigned int v8; // r3
  int v9; // r1
  unsigned int U32; // r0
  int *v11; // r2
  unsigned int v12; // r1
  float v13; // s4
  int v14; // r0
  int v15; // r5
  int v16; // r0
  int (__fastcall *v17)(int, State *); // r2
  State *v18; // r1
  int target; // [sp+4h] [bp-24h] BYREF

  v2 = a1 + 6820;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6820));
  CollisionActor__handleGravity((CollisionActor *)a1);
  v3 = CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648), v3);
  sub_6039F328(a1, 0);
  ((void (__fastcall *)(int))loc_603A2F84)(a1);
  v4 = (_DWORD *)(a1 + 7476);
  if ( !FIELD_U32(a1, 7476) )
  {
    v6 = (_DWORD *)(a1 + 6856);
    v5 = FIELD_U32(a1, 6856);
    if ( v5 )
    {
      *v6 = v5 - 1;
      target = 0;
      moveValueTo((int *)(a1 + 160), &target, (int *)(a1 + 6860));
      if ( !*v6 )
        FIELD_U32(a1, 160) = 0;
    }
  }
  result = *(_DWORD *)v2;
  v8 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  v9 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v8 )
    v9 += 4 * v8;
  if ( (*(_BYTE *)(*(_DWORD *)v9 + 28) & 0x10) != 0 )
  {
    if ( *v4 )
    {
      FIELD_U32(a1, 6828) = 0;
      sub_60421AD4(result);
      U32 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
      v11 = *(int **)(*(_DWORD *)v2 + 12);
      v12 = *(_DWORD *)(*(_DWORD *)v2 + 68);
      v13 = (float)((float)(unsigned int)(((3 * (unsigned __int64)U32) >> 32) + 1) * 25.0) + 5.0;
      if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v12 )
        v11 += v12;
      v14 = *v11;
      FIELD_F32(v14, 20) = v13;
      FIELD_U32(v14, 28) |= 2u;
      v15 = FIELD_U32(a1, 80);
      v16 = dword_60AF20E0[*v4];
      v17 = *(int (__fastcall **)(int, State *))(*(_DWORD *)a1 + 192);
      if ( v15 )
        v16 = -v16;
      if ( FIELD_U32(a1, 160) != v16 )
      {
        result = v17(a1, &KoopaTroopa_StateID_Turn);
        FIELD_U32(a1, 80) = v15;
        return result;
      }
      v18 = &KoopaTroopa_StateID_Walk;
    }
    else
    {
      v17 = *(int (__fastcall **)(int, State *))(*(_DWORD *)a1 + 192);
      v18 = (State *)&dword_60C953A8;
    }
    return v17(a1, v18);
  }
  return result;
}
