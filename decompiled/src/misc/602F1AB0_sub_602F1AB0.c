/* sub_602F1AB0
 * address: 0x602F1AB0   size: 460   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_602F1AB0(int a1)
{
  int v2; // r7
  float v3; // s0
  int v4; // r0
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  int v9; // r0
  float v10; // s0
  float v11; // s0
  int v12; // r1
  unsigned int v13; // r0
  float v14; // s16

  v2 = a1 + 6300;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6300));
  CollisionMgr_process((_BYTE *)(v2 - 5652), v3);
  if ( (*(_DWORD *)(v2 - 3428) & 0x10400) == 0x400 )
    FIELD_U32(a1, 124) = 0;
  v4 = FIELD_U32(a1, 6756);
  switch ( v4 )
  {
    case 3:
      CollisionActor__handleGravity((CollisionActor *)a1);
      v10 = CollisionActor__handleSpeed((CollisionActor *)a1);
      CollisionMgr_process((_BYTE *)(v2 - 5652), v10);
      if ( (FIELD_U8(a1, 2872) & 1) != 0 )
      {
        FIELD_U32(a1, 124) = 0;
        sub_6026508C(a1);
        (*(void (__fastcall **)(int, StateVirtual *))(*(_DWORD *)a1 + 192))(a1, &BroBase_StateID_JumpEd);
      }
      break;
    case 2:
      CollisionActor__handleGravity((CollisionActor *)a1);
      if ( FIELD_F32(a1, 124) < 0.0 )
        FIELD_U32(a1, 124) = 0;
      v11 = CollisionActor__handleSpeed((CollisionActor *)a1);
      v12 = *(_DWORD *)(*(_DWORD *)v2 + 12);
      v13 = *(_DWORD *)(*(_DWORD *)v2 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v13 )
        v12 += 4 * v13;
      v14 = *(float *)(*(_DWORD *)v12 + 20);
      if ( v14 == (*(float (__fastcall **)(int, float))(*(_DWORD *)a1 + 716))(a1, v11) )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 752))(a1);
        v9 = 3;
LABEL_22:
        FIELD_U32(a1, 6756) = v9;
      }
      break;
    case 1:
      CollisionActor__handleGravity((CollisionActor *)a1);
      CollisionActor__handleSpeed((CollisionActor *)a1);
      v5 = *(_DWORD *)(*(_DWORD *)v2 + 12);
      v6 = *(_DWORD *)(*(_DWORD *)v2 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v6 )
        v5 += 4 * v6;
      if ( *(float *)(*(_DWORD *)v5 + 20) >= 12.0 )
        *(_DWORD *)(*(_DWORD *)v5 + 24) = 0;
      if ( FIELD_F32(a1, 124) <= 1.0 )
      {
        v7 = *(_DWORD *)(*(_DWORD *)v2 + 12);
        v8 = *(_DWORD *)(*(_DWORD *)v2 + 68);
        if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v8 )
          v7 += 4 * v8;
        *(_DWORD *)(*(_DWORD *)v7 + 24) = 1065353216;
        FIELD_U32(a1, 124) = 0;
        v9 = 2;
        goto LABEL_22;
      }
      break;
  }
}
