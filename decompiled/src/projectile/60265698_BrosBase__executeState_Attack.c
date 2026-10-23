/* BrosBase__executeState_Attack
 * address: 0x60265698   size: 580   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
void __fastcall BrosBase__executeState_Attack(int a1)
{
  int v2; // r5
  float v3; // s0
  float v4; // s0
  int v5; // r6
  int v6; // r0
  _BOOL4 v7; // r1
  int v8; // r2
  int v9; // r2
  int v10; // r2
  int v11; // r0
  int v12; // r1
  unsigned int v13; // r0
  float v14; // s16
  float v15; // s16
  _DWORD *v16; // r1
  unsigned int v17; // r0
  void (__fastcall *v18)(int); // r1
  int v19; // r1
  unsigned int v20; // r0
  int v21; // r0

  v2 = a1 + 6300;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6300));
  CollisionActor__handleGravity((CollisionActor *)a1);
  v3 = CollisionActor__handleSpeed((CollisionActor *)a1);
  v4 = CollisionMgr_process((_BYTE *)(a1 + 648), v3);
  v5 = 0;
  if ( !(*(int (__fastcall **)(int, float))(*(_DWORD *)a1 + 768))(a1, v4) )
  {
    v6 = FIELD_U32(a1, 2872);
    if ( (v6 & 1) != 0 )
    {
      v5 = 1;
      FIELD_U32(a1, 120) = 0;
      FIELD_U32(a1, 124) = 0;
      FIELD_U32(a1, 128) = 0;
      v7 = 1;
    }
    else
    {
      v5 = 0;
      v7 = FIELD_F32(a1, 120) <= 0.0;
    }
    v8 = 0x40000;
    if ( v7 )
      v8 = 0x80000;
    if ( (v8 & v6) != 0 )
      goto LABEL_11;
    v9 = 0x400000;
    if ( v7 )
      v9 = 0x800000;
    if ( (v9 & v6) != 0 )
    {
LABEL_11:
      v10 = 0x10000000;
      if ( v7 )
        v10 = 0x20000000;
      if ( (v10 & v6) == 0 )
        FIELD_U32(a1, 120) = 0;
    }
  }
  v11 = FIELD_U32(a1, 6756);
  if ( v11 != 2 )
  {
    if ( v11 == 1 )
    {
      v12 = *(_DWORD *)(*(_DWORD *)v2 + 12);
      v13 = *(_DWORD *)(*(_DWORD *)v2 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v13 )
        v12 += 4 * v13;
      v14 = *(float *)(*(_DWORD *)v12 + 20);
      if ( v14 >= (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 712))(a1) )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 748))(a1);
        FIELD_U32(a1, 6756) = 2;
      }
    }
    return;
  }
  v15 = (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 716))(a1);
  v16 = *(_DWORD **)(*(_DWORD *)v2 + 12);
  v17 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v17 )
    v16 += v17;
  if ( sub_60418548(*v16 + 4) )
  {
    v18 = *(void (__fastcall **)(int))(*(_DWORD *)a1 + 752);
LABEL_25:
    v18(a1);
    return;
  }
  v19 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v20 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v20 )
    v19 += 4 * v20;
  if ( *(float *)(*(_DWORD *)v19 + 20) < v15 )
  {
    FIELD_U8(a1, 6612) = 1;
    return;
  }
  if ( (*(_BYTE *)(*(_DWORD *)v19 + 28) & 0x20) != 0 )
  {
    v21 = FIELD_U32(a1, 6564);
    FIELD_U32(a1, 6564) = v21 - 1;
    if ( v21 >= 2 )
    {
      v18 = *(void (__fastcall **)(int))(*(_DWORD *)a1 + 636);
      goto LABEL_25;
    }
    if ( v5 == 1 )
      (*(void (__fastcall **)(int, StateVirtual *))(*(_DWORD *)a1 + 192))(a1, &BroBase_StateID_Move);
  }
}
