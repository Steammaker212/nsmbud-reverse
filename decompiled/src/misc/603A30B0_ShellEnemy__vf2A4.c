/* ShellEnemy__vf2A4
 * address: 0x603A30B0   size: 708   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: CarryableEnemy : 0x6027350C
// 
// Overridden by: None
int __fastcall ShellEnemy__vf2A4(int a1)
{
  _BYTE *v2; // r6
  int v3; // r0
  float v4; // s0
  int v5; // r5
  int v6; // r0
  int v7; // r7
  bool v8; // zf
  int v9; // r1
  bool v10; // zf
  float v11; // s0
  int v12; // r0
  float v13; // s0
  int result; // r0
  int *v15; // r1
  signed int v16; // [sp+0h] [bp-20h] BYREF
  int v17; // [sp+4h] [bp-1Ch] BYREF

  v2 = (_BYTE *)(a1 + 6386);
  if ( FIELD_U8(a1, 6386) )
  {
    v3 = FIELD_U32(a1, 6388);
    v17 = 0x80000000;
    v16 = dword_60C977E0[0] * -byte_60AFE3F4[v3];
    sub_6083246C((int *)(a1 + 156), &v17, &v16);
  }
  CollisionActor__handleGravity((CollisionActor *)a1);
  v4 = CollisionActor__handleSpeed((CollisionActor *)a1);
  v5 = a1 + 648;
  CollisionMgr_process((_BYTE *)(a1 + 648), v4);
  sub_603A4974(a1, FIELD_U8(a1, 6584) == 0);
  FIELD_U8(a1, 6584) = 1;
  v6 = FIELD_U32(a1, 2872);
  v7 = v6 & 1;
  if ( (v6 & 1) != 0 )
    goto LABEL_7;
  v8 = FIELD_U8(a1, 6609) == 0;
  if ( FIELD_U8(a1, 6609) )
    v8 = FIELD_U8(a1, 6610) == 0;
  if ( v8 )
  {
    v11 = FIELD_F32(a1, 124);
    if ( v11 < -3.0 )
      FIELD_U8(a1, 6556) = 0;
  }
  else
  {
LABEL_7:
    v9 = FIELD_U32(a1, 3200);
    v10 = (v9 & 0x20000) == 0;
    if ( (v9 & 0x20000) != 0 )
      v10 = (v6 & 8) == 0;
    if ( v10 )
    {
      if ( FIELD_U8(a1, 6054) || FIELD_U8(a1, 6410) )
      {
        FIELD_U32(a1, 120) = 0;
        FIELD_U32(a1, 124) = 0;
        FIELD_U32(a1, 128) = 0;
      }
      else
      {
        if ( FIELD_U8(a1, 6609) && FIELD_U8(a1, 6610) )
          FIELD_U32(a1, 2872) = v6 | 1;
        ((void (__fastcall *)(int, float, float, float))loc_602A25F8)(a1, 0.1875, 0.3, 0.5);
        if ( !v7 )
          FIELD_U32(a1, 2872) &= ~1u;
      }
      if ( FIELD_F32(a1, 120) == 0.0 || (v11 = FIELD_F32(a1, 124), v11 == 0.0) )
      {
        v11 = 0.0;
        FIELD_U32(a1, 120) = 0;
        FIELD_U32(a1, 124) = 0;
        FIELD_U32(a1, 128) = 0;
      }
    }
    else
    {
      v11 = 5.5;
      FIELD_U32(a1, 124) = 1085276160;
    }
  }
  if ( (FIELD_U32(a1, 2872) & 0x10400) == 0x400 && v11 > 0.0 )
    FIELD_U32(a1, 124) = 0;
  v12 = FIELD_U32(a1, 80);
  if ( ((*(_DWORD *)(v5 + 4 * ((v12 + 18) >> 5) + 2224) & (1 << ((v12 + 18) & 0x1F))) != 0
     || (*(_DWORD *)(v5 + 4 * ((v12 + 22) >> 5) + 2224) & (1 << ((v12 + 22) & 0x1F))) != 0)
    && (*(_DWORD *)(v5 + 4 * ((v12 + 28) >> 5) + 2224) & (1 << ((v12 + 28) & 0x1F))) == 0 )
  {
    if ( *(_WORD *)(v5 + 8 * v12 + 5280) != 0x1F )
      v13 = 0.0;
    else
      v13 = -FIELD_F32(a1, 120);
    FIELD_F32(a1, 120) = v13;
  }
  ((void (__fastcall *)(int))loc_603A338C)(a1);
  result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 728))(a1);
  if ( result == 1 )
  {
    if ( *v2 )
      v15 = &dword_60C9778C;
    else
      v15 = (int *)&unk_60C97744;
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, v15);
  }
  return result;
}
