/* BrosBase__executeState_Jump
 * address: 0x60265BD8   size: 200   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall BrosBase__executeState_Jump(int a1)
{
  float v2; // s0
  float v3; // s0
  int result; // r0
  float v5; // s0
  int v6; // r1
  int v7; // r1
  int v8; // r1

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6300));
  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  v3 = CollisionMgr_process((_BYTE *)(a1 + 648), v2);
  result = (*(int (__fastcall **)(int, float))(*(_DWORD *)a1 + 768))(a1, v3);
  if ( !result )
  {
    v5 = FIELD_F32(a1, 120);
    result = FIELD_U32(a1, 2872);
    v6 = 0x40000;
    if ( v5 <= 0.0 )
      v6 = 0x80000;
    if ( (v6 & result) != 0 )
      goto LABEL_8;
    v7 = 0x400000;
    if ( v5 <= 0.0 )
      v7 = 0x800000;
    if ( (v7 & result) != 0 )
    {
LABEL_8:
      v8 = 0x10000000;
      if ( v5 <= 0.0 )
        v8 = 0x20000000;
      if ( (v8 & result) == 0 )
        FIELD_U32(a1, 120) = 0;
    }
    if ( (result & 1) != 0 )
    {
      sub_6026508C(a1);
      return (*(int (__fastcall **)(int, StateVirtual *))(*(_DWORD *)a1 + 192))(a1, &BroBase_StateID_JumpEd);
    }
  }
  return result;
}
