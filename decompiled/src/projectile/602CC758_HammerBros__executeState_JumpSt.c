/* HammerBros__executeState_JumpSt
 * address: 0x602CC758   size: 452   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BrosBase : 0x602659D4
// 
// Overridden by: None
int __fastcall HammerBros__executeState_JumpSt(int a1)
{
  int v2; // r5
  int v3; // r0
  int *v4; // r1
  unsigned int v5; // r0
  int result; // r0
  int v7; // r0
  int v8; // r0
  int (__fastcall *v9)(int, StateVirtual *); // r2
  StateVirtual *v10; // r1
  int U32; // r0

  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v2 = a1 + 6300;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6300));
  CollisionMgr_process((_BYTE *)(a1 + 648));
  if ( !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 768))(a1) )
  {
    v3 = FIELD_U32(a1, 2872);
    if ( (v3 & 1) != 0 )
      FIELD_U32(a1, 124) = 0;
    if ( (v3 & 0x440000) != 0 && (v3 & 0x10000000) == 0 || (v3 & 0x880000) != 0 && (v3 & 0x20000000) == 0 )
    {
      FIELD_U32(a1, 108) = FIELD_U32(a1, 584);
      FIELD_U32(a1, 112) = FIELD_U32(a1, 588);
      FIELD_U32(a1, 116) = FIELD_U32(a1, 592);
    }
  }
  v4 = *(int **)(*(_DWORD *)v2 + 12);
  v5 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v5 )
    v4 += v5;
  result = *v4;
  if ( (*(_BYTE *)(*v4 + 28) & 0x20) != 0 )
  {
    v7 = FIELD_U32(a1, 12480);
    if ( v7 == 1 )
    {
      if ( FIELD_U32(a1, 12488) == 1 && FIELD_U32(a1, 12484) == 1 )
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C91920);
      U32 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
      v9 = *(int (__fastcall **)(int, StateVirtual *))(*(_DWORD *)a1 + 192);
      if ( U32 < 0 )
        v10 = &BroBase_StateID_Jump;
      else
        v10 = (StateVirtual *)&dword_60C91920;
    }
    else
    {
      if ( v7 == 2 )
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C91920);
      v8 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
      v9 = *(int (__fastcall **)(int, StateVirtual *))(*(_DWORD *)a1 + 192);
      if ( v8 < 0 )
        v10 = &BroBase_StateID_Jump;
      else
        v10 = (StateVirtual *)&dword_60C91920;
    }
    return v9(a1, v10);
  }
  if ( FIELD_F32(result, 20) == 7.0 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 760))(a1);
  return result;
}
