/* BrosBase__executeState_JumpSt
 * address: 0x602659D4   size: 296   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x602CC758 : HammerBros
int __fastcall BrosBase__executeState_JumpSt(int a1)
{
  int v2; // r5
  float v3; // s0
  float v4; // s0
  int v5; // r0
  int v6; // r1
  float v7; // s0
  int v8; // r1
  int v9; // r1
  int *v10; // r1
  unsigned int v11; // r0
  int result; // r0

  v2 = a1 + 6300;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6300));
  CollisionActor__handleGravity((CollisionActor *)a1);
  v3 = CollisionActor__handleSpeed((CollisionActor *)a1);
  v4 = CollisionMgr_process((_BYTE *)(a1 + 648), v3);
  if ( !(*(int (__fastcall **)(int, float))(*(_DWORD *)a1 + 768))(a1, v4) )
  {
    v5 = FIELD_U32(a1, 2872);
    if ( (v5 & 1) != 0 )
      FIELD_U32(a1, 124) = 0;
    v6 = 0x40000;
    v7 = FIELD_F32(a1, 120);
    if ( v7 <= 0.0 )
      v6 = 0x80000;
    if ( (v6 & v5) != 0 )
      goto LABEL_10;
    v8 = 0x400000;
    if ( v7 <= 0.0 )
      v8 = 0x800000;
    if ( (v8 & v5) != 0 )
    {
LABEL_10:
      v9 = 0x10000000;
      if ( v7 <= 0.0 )
        v9 = 0x20000000;
      if ( (v9 & v5) == 0 )
      {
        FIELD_U32(a1, 108) = FIELD_U32(a1, 584);
        FIELD_U32(a1, 112) = FIELD_U32(a1, 588);
        FIELD_U32(a1, 116) = FIELD_U32(a1, 592);
      }
    }
  }
  v10 = *(int **)(*(_DWORD *)v2 + 12);
  v11 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v11 )
    v10 += v11;
  result = *v10;
  if ( (*(_BYTE *)(*v10 + 28) & 0x20) != 0 )
    return (*(int (__fastcall **)(int, StateVirtual *))(*(_DWORD *)a1 + 192))(a1, &BroBase_StateID_Jump);
  if ( FIELD_F32(result, 20) == 7.0 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 760))(a1);
  return result;
}
