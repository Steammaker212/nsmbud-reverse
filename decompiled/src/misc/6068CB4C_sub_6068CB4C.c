/* sub_6068CB4C
 * address: 0x6068CB4C   size: 584   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6068CB4C(int a1)
{
  int v2; // r5
  int v3; // r0
  bool v4; // zf
  unsigned int v5; // r1
  int v6; // r0
  int v7; // r0
  float v8; // s0
  float v9; // s1
  float v10; // s2
  float v11; // s3
  _DWORD *v12; // r0
  unsigned int v13; // r1
  int v14; // r0
  int v15; // r0
  int v16; // [sp+4h] [bp-1Ch] BYREF
  int v17; // [sp+8h] [bp-18h] BYREF
  int v18; // [sp+Ch] [bp-14h] BYREF

  v2 = 0;
  v3 = FIELD_U32(MaskMgr_instance, 16);
  v4 = (v3 & 0xF0) == 32;
  if ( (v3 & 0xF0) != 0x20 )
    v4 = (unsigned __int8)v3 == 48;
  if ( !v4 )
  {
LABEL_15:
    v18 = 1017370378;
    v17 = 1075838976;
    v16 = 1065353216;
    if ( v2 )
    {
      v7 = 0;
      switch ( FIELD_U32(MaskMgr_instance, 16) )
      {
        case '"':
          v7 = 1;
          break;
        case '#':
          v7 = 2;
          break;
        case '$':
        case '0':
          v7 = 3;
          break;
        default:
          break;
      }
      v12 = (_DWORD *)((char *)&unk_60AF4E50 + 8 * v7);
      if ( FIELD_U8(a1, 317) )
        ++v12;
      FIELD_U32(a1, 300) = *v12;
      ((void (__fastcall *)(int, int *, int *, int *))loc_6068CDB8)(a1, &v18, &v17, &v16);
      v11 = *(float *)&v16;
      v10 = *(float *)&v17;
      v9 = *(float *)&v18;
      v8 = FIELD_F32(a1, 300);
    }
    else
    {
      v8 = 0.0;
      v9 = 0.02;
      v10 = 2.5;
      v11 = 1.0;
      FIELD_U32(a1, 300) = 0;
    }
    ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 292, v8, v9, v10, v11);
    if ( v2 != 1 )
      goto LABEL_33;
    v13 = FIELD_U8(a1, 316);
    if ( FIELD_U8(a1, 317) )
    {
      v14 = sub_607891F8(PlayerMgr_instance, v13);
      if ( !v14 )
        goto LABEL_33;
    }
    else
    {
      if ( v13 >= 4 )
        v13 = 0;
      v14 = *(_DWORD *)(PlayerMgr_instance + 4 * v13 + 32);
      if ( !v14 )
        goto LABEL_33;
    }
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)v14 + 1204))(v14) )
    {
      v15 = 1146388480;
LABEL_34:
      FIELD_U32(a1, 304) = v15;
      JUMPOUT(0x60832560);
    }
LABEL_33:
    v15 = 0;
    goto LABEL_34;
  }
  v5 = FIELD_U8(a1, 316);
  if ( FIELD_U8(a1, 317) )
  {
    v6 = sub_607891F8(PlayerMgr_instance, v5);
    if ( !v6 )
    {
LABEL_14:
      v2 = 1;
      goto LABEL_15;
    }
  }
  else
  {
    if ( v5 >= 4 )
      v5 = 0;
    v6 = *(_DWORD *)(PlayerMgr_instance + 4 * v5 + 32);
    if ( !v6 )
      goto LABEL_14;
  }
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 168))(v6) == 1 )
    v2 = 1;
  goto LABEL_15;
}
