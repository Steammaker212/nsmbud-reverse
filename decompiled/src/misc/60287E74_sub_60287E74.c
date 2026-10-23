/* sub_60287E74
 * address: 0x60287E74   size: 952   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60287E74(int a1)
{
  int v2; // r0
  int result; // r0
  _BYTE *v4; // r6
  float v5; // r0
  _BYTE *v6; // r7
  int v7; // r7
  int v8; // r1
  unsigned int v9; // r0
  int v10; // r1
  unsigned int v11; // r0
  int v12; // r5
  int v13; // r1
  unsigned int v14; // r0
  int v15; // r1
  unsigned int v16; // r0
  Vec3 speed[3]; // [sp+8h] [bp-28h] BYREF

  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionActor__sub_600034C8((CollisionActor *)a1);
  if ( FIELD_U8(a1, 6607) )
  {
    v2 = FIELD_U32(a1, 80);
    speed[0].x = 1.5046e-36;
    if ( moveValueTo((int *)(a1 + 160), (int *)&Enemy_CommonRotations[v2], (int *)speed) )
      FIELD_U8(a1, 6607) = 0;
  }
  v4 = (_BYTE *)(a1 + 6605);
  result = FIELD_S8(a1, 6605);
  if ( result == 1 )
  {
    result = FIELD_U32(a1, 6588);
    FIELD_U32(a1, 6588) = result - 1;
    if ( result <= 0 )
    {
      if ( sub_602A1F74(a1, 240.0, 80.0) == 1
        && StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108)) == FIELD_U32(a1, 80) )
      {
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8F24C);
      }
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8F20C);
    }
  }
  else if ( !FIELD_U8(a1, 6605) )
  {
    result = FIELD_U8(a1, 2872);
    if ( (result & 1) != 0 )
    {
      if ( (FIELD_U8(a1, 2880) & 1) == 0 )
      {
        FIELD_U32(a1, 6568) = FIELD_U32(a1, 108);
        v5 = FIELD_F32(a1, 108);
        speed[0].y = FIELD_F32(a1, 112);
        speed[0].x = v5;
        speed[0].z = 4500.0;
        EffectWrapper_update((EffectWrapper *)(a1 + 6452), 661, speed, 0, 0);
        v6 = (_BYTE *)(a1 + 6604);
        if ( !FIELD_U8(a1, 6604) )
        {
          FIELD_U32(a1, 124) = 1071644672;
          FIELD_U8(a1, 6609) = 0;
          result = 1;
          goto LABEL_37;
        }
        if ( FIELD_U8(a1, 6604) == 1 )
        {
          FIELD_U32(a1, 124) = 1065353216;
          result = 2;
LABEL_37:
          *v6 = result;
          return result;
        }
        FIELD_U64(a1, 120) = 1050253722;
        if ( sub_602A1F74(a1, 240.0, 80.0) != 1
          || StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108)) != FIELD_U32(a1, 80) )
        {
          if ( FIELD_U8(a1, 6606) )
          {
            v12 = a1 + 6300;
            sub_60421938(*(_DWORD **)(a1 + 6300), FIELD_U32(a1, 6304), (int)&dword_60C8F18C);
            v13 = *(_DWORD *)(FIELD_U32(a1, 6300) + 12);
            v14 = *(_DWORD *)(FIELD_U32(a1, 6300) + 68);
            if ( *(_DWORD *)(FIELD_U32(a1, 6300) + 8) > v14 )
              v13 += 4 * v14;
            AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v13 + 4), 1);
            v15 = *(_DWORD *)(*(_DWORD *)v12 + 12);
            v16 = *(_DWORD *)(*(_DWORD *)v12 + 68);
            if ( *(_DWORD *)(*(_DWORD *)v12 + 8) > v16 )
              v15 += 4 * v16;
            *(_DWORD *)(*(_DWORD *)v15 + 24) = 1036831949;
            FIELD_U8(a1, 6606) = 0;
          }
          FIELD_U32(a1, 6588) = 10;
          ++*v4;
          result = (unsigned __int8)*v6 + 1;
          goto LABEL_37;
        }
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8F24C);
      }
      FIELD_U64(a1, 120) = 1050253722;
      if ( sub_602A1F74(a1, 240.0, 80.0) == 1
        && StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108)) == FIELD_U32(a1, 80) )
      {
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8F24C);
      }
      if ( FIELD_U8(a1, 6606) )
      {
        v7 = a1 + 6300;
        sub_60421938(*(_DWORD **)(a1 + 6300), FIELD_U32(a1, 6304), (int)&dword_60C8F18C);
        v8 = *(_DWORD *)(FIELD_U32(a1, 6300) + 12);
        v9 = *(_DWORD *)(FIELD_U32(a1, 6300) + 68);
        if ( *(_DWORD *)(FIELD_U32(a1, 6300) + 8) > v9 )
          v8 += 4 * v9;
        AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v8 + 4), 1);
        v10 = *(_DWORD *)(*(_DWORD *)v7 + 12);
        v11 = *(_DWORD *)(*(_DWORD *)v7 + 68);
        if ( *(_DWORD *)(*(_DWORD *)v7 + 8) > v11 )
          v10 += 4 * v11;
        *(_DWORD *)(*(_DWORD *)v10 + 24) = 1036831949;
        FIELD_U8(a1, 6606) = 0;
      }
      FIELD_U32(a1, 6588) = 10;
      result = (unsigned __int8)*v4 + 1;
      *v4 = result;
    }
  }
  return result;
}
