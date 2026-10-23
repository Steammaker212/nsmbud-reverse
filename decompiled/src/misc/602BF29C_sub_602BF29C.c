/* sub_602BF29C
 * address: 0x602BF29C   size: 500   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_602BF29C(int a1)
{
  _BYTE *v2; // r0
  int v3; // r1
  int v4; // t1
  int v5; // r1
  int v6; // r2
  float v7; // s0
  float v8; // s2
  unsigned int result; // r0
  int v10; // r1
  char v11; // t1
  Vec2 v12; // [sp+0h] [bp-10h] BYREF

  v4 = FIELD_U8(a1, 6485);
  v2 = (_BYTE *)(a1 + 6485);
  v3 = v4;
  if ( !v4 )
  {
    if ( (FIELD_U8(dword_60C9CF0C, 1361) & 1) == 0 )
      goto LABEL_8;
    v3 = 32;
    *v2 = 32;
  }
  v5 = v3 - 1;
  if ( v5 )
    v6 = FIELD_U32(a1, 160) + dword_60C911E4;
  else
    v6 = 0;
  FIELD_U32(a1, 160) = v6;
  *v2 = v5;
LABEL_8:
  StageActor__accelerateX((StageActor *)a1);
  v7 = FIELD_F32(a1, 124);
  v8 = FIELD_F32(a1, 136);
  if ( v7 >= v8 )
  {
    if ( v7 > v8 )
    {
      v7 = v7 - FIELD_F32(a1, 100);
      if ( v7 < v8 )
        v7 = FIELD_F32(a1, 136);
    }
  }
  else
  {
    v7 = v7 + FIELD_F32(a1, 100);
    if ( v7 > v8 )
      v7 = FIELD_F32(a1, 136);
  }
  FIELD_F32(a1, 124) = v7;
  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + FIELD_F32(a1, 120);
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + v7;
  FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + FIELD_F32(a1, 128);
  CollisionActor__sub_600034C8((CollisionActor *)a1);
  if ( (FIELD_U8(a1, 2872) & 1) == 0 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9125C);
  FIELD_U32(a1, 124) = 0;
  result = a1 + 6500;
  v10 = FIELD_U32(a1, 6500);
  if ( v10 == 1 )
  {
    v11 = FIELD_U8(a1, 6481);
    FIELD_U8(a1, 6481) = v11 - 1;
    if ( v11 == 1 )
      *(_DWORD *)result = 2;
  }
  else if ( v10 == 2 )
  {
    result = StageActor__distanceToPlayer((StateActor *)a1, &v12);
    if ( result != -1 )
    {
      if ( result >= 4 )
        result = 0;
      result = *(_DWORD *)(PlayerMgr_instance + 4 * result + 32);
      if ( result )
      {
        if ( FIELD_F32(a1, 112) < (float)((float)(FIELD_F32(result, 112) + FIELD_F32(result, 1244)) + 16.0) )
        {
          FIELD_U8(a1, 6481) = 5;
          return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9125C);
        }
      }
    }
  }
  return result;
}
