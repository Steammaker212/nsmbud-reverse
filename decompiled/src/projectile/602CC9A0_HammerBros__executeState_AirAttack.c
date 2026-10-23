/* HammerBros__executeState_AirAttack
 * address: 0x602CC9A0   size: 572   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BrosBase : 0x60265D08
// 
// Overridden by: None
void __fastcall HammerBros__executeState_AirAttack(int a1)
{
  int v2; // r6
  float v3; // s0
  float v4; // s16
  float v5; // s0
  int v6; // r5
  int v7; // r0
  int v8; // r0
  _DWORD *v9; // r7
  int v10; // r1
  unsigned int v11; // r0
  float v12; // s18
  float v13; // s18
  _DWORD *v14; // r1
  unsigned int v15; // r0
  int v16; // r1
  unsigned int v17; // r0
  int v18; // r1
  unsigned int v19; // r0

  v2 = a1 + 6300;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6300));
  CollisionActor__handleGravity((CollisionActor *)a1);
  v3 = CollisionActor__handleSpeed((CollisionActor *)a1);
  v4 = (*(float (__fastcall **)(int, float))(*(_DWORD *)a1 + 716))(a1, v3);
  v5 = CollisionMgr_process((_BYTE *)(a1 + 648), v4);
  v6 = 0;
  if ( !(*(int (__fastcall **)(int, float))(*(_DWORD *)a1 + 768))(a1, v5) )
  {
    v7 = FIELD_U32(a1, 2872);
    v6 = 0;
    if ( (v7 & 1) != 0 )
    {
      FIELD_U32(a1, 120) = 0;
      FIELD_U32(a1, 124) = 0;
      FIELD_U32(a1, 128) = 0;
      sub_6026508C(a1);
      v7 = FIELD_U32(a1, 2872);
      v6 = 1;
    }
    if ( (v7 & 0x440000) != 0 && (v7 & 0x10000000) == 0 || (v7 & 0x880000) != 0 && (v7 & 0x20000000) == 0 )
      FIELD_U32(a1, 120) = 0;
  }
  v9 = (_DWORD *)(a1 + 6756);
  v8 = FIELD_U32(a1, 6756);
  if ( v8 == 2 )
  {
    v13 = (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 716))(a1);
    v14 = *(_DWORD **)(*(_DWORD *)v2 + 12);
    v15 = *(_DWORD *)(*(_DWORD *)v2 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v15 )
      v14 += v15;
    if ( sub_60418548(*v14 + 4) )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 752))(a1);
    }
    else
    {
      v16 = *(_DWORD *)(*(_DWORD *)v2 + 12);
      v17 = *(_DWORD *)(*(_DWORD *)v2 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v17 )
        v16 += 4 * v17;
      if ( *(float *)(*(_DWORD *)v16 + 20) < v13 )
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 744))(a1);
    }
  }
  else if ( v8 == 1 )
  {
    v10 = *(_DWORD *)(*(_DWORD *)v2 + 12);
    v11 = *(_DWORD *)(*(_DWORD *)v2 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v11 )
      v10 += 4 * v11;
    v12 = *(float *)(*(_DWORD *)v10 + 20);
    if ( v12 >= (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 712))(a1) )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 748))(a1);
      *v9 = 2;
      if ( v6 != 1 )
        return;
      goto LABEL_25;
    }
  }
  if ( v6 != 1 )
    return;
LABEL_25:
  if ( *v9 == 2 )
  {
    v18 = *(_DWORD *)(*(_DWORD *)v2 + 12);
    v19 = *(_DWORD *)(*(_DWORD *)v2 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v19 )
      v18 += 4 * v19;
    if ( *(float *)(*(_DWORD *)v18 + 20) < v4 )
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 808))(a1);
  }
  (*(void (__fastcall **)(int, StateVirtual *))(*(_DWORD *)a1 + 192))(a1, &BroBase_StateID_JumpEd);
}
