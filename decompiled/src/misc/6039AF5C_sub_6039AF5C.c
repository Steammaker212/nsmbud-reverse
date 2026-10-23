/* sub_6039AF5C
 * address: 0x6039AF5C   size: 800   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6039AF5C(_BYTE *a1, int a2, float a3)
{
  _DWORD *v6; // r6
  int v7; // r1
  unsigned int v8; // r0
  int v9; // s0
  int v10; // r1
  int v11; // r2
  int v12; // r2
  int v13; // r0
  float v14; // s0
  int v15; // r0
  int v16; // r1
  int v17; // r1
  int v18; // r1
  int result; // r0
  int v20; // [sp+0h] [bp-28h] BYREF
  int v21; // [sp+4h] [bp-24h]
  int v22; // [sp+8h] [bp-20h]
  int v23; // [sp+Ch] [bp-1Ch] BYREF

  v6 = a1 + 6304;
  j_ModelWrapper_updateAnims(*((_DWORD *)a1 + 1576));
  if ( dword_60C96F28[4 * v6[2] + 3] != 1 )
  {
    v7 = *(_DWORD *)(*v6 + 12);
    v8 = *(_DWORD *)(*v6 + 68);
    if ( *(_DWORD *)(*v6 + 8) > v8 )
      v7 += 4 * v8;
    if ( (*(_BYTE *)(*(_DWORD *)v7 + 28) & 0x20) != 0 )
      *((_DWORD *)a1 + 1580) |= 0x100u;
  }
  if ( a2 >= 0 )
  {
    if ( !a2 )
      a2 = 10;
    v9 = (int)(float)((float)(2147500000.0 * 60.0) / 180.0);
    v10 = byte_60AFE3F4[*((_DWORD *)a1 + 20)];
    v11 = v9 / a2;
    if ( v9 / a2 < 0 && v11 != 0x80000000 )
      v11 = -v11;
    v12 = *((_DWORD *)a1 + 40) + v11 * v10;
    *((_DWORD *)a1 + 40) = v12;
    if ( v12 < 0 && v12 != 0x80000000 )
      v12 = -v12;
    if ( v12 >= (unsigned int)v9 )
    {
      *((_DWORD *)a1 + 40) = v10 * v9;
      *((_DWORD *)a1 + 1580) |= 0x10000u;
    }
  }
  if ( FIELD_U8(dword_60CC6D8C, 17) && *((float *)a1 + 31) > 0.0 )
    goto LABEL_23;
  v23 = 0;
  v13 = sub_6000389C((int)a1, (int)&v23);
  if ( v13 == 5 )
  {
    if ( !a1[6054] )
    {
      v20 = *((_DWORD *)a1 + 27);
      v21 = v23;
      v22 = 1170939904;
      (*(void (__fastcall **)(_BYTE *, int *))(*(_DWORD *)a1 + 120))(a1, &v20);
    }
    goto LABEL_26;
  }
  if ( v13 != 1 )
  {
LABEL_23:
    a1[6054] = 0;
    goto LABEL_27;
  }
  if ( !a1[6054] )
  {
    v20 = *((_DWORD *)a1 + 27);
    v21 = v23;
    v22 = 1170939904;
    (*(void (__fastcall **)(_BYTE *, int *))(*(_DWORD *)a1 + 108))(a1, &v20);
  }
LABEL_26:
  sub_600038DC((Enemy *)a1);
LABEL_27:
  ((void (__fastcall *)(_BYTE *, float, float))loc_6039B3D8)(a1, *((float *)a1 + 1579), a3);
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionActor__sub_600034C8((CollisionActor *)a1);
  v14 = *((float *)a1 + 30);
  v15 = *((_DWORD *)a1 + 718);
  v16 = 0x40000;
  if ( v14 < 0.0 )
    v16 = 0x80000;
  if ( (v16 & v15) != 0 )
    goto LABEL_33;
  v17 = 0x400000;
  if ( v14 < 0.0 )
    v17 = 0x800000;
  if ( (v17 & v15) != 0 )
  {
LABEL_33:
    v18 = 0x10000000;
    if ( v14 < 0.0 )
      v18 = 0x20000000;
    if ( (v18 & v15) == 0 )
    {
      *((_DWORD *)a1 + 1579) = 0;
      *((_DWORD *)a1 + 22) = 0;
    }
  }
  nullsub_7();
  if ( sub_60003460((int)a1) == 1 )
    *((_DWORD *)a1 + 1580) |= 1u;
  result = *((_DWORD *)a1 + 718);
  if ( (result & 0x10400) == 0x400 )
    *((_DWORD *)a1 + 1580) |= 2u;
  if ( (result & 0x440000) != 0 && (result & 0x10000000) == 0 )
    *((_DWORD *)a1 + 1580) |= 8u;
  if ( (result & 0x880000) != 0 )
  {
    result &= 0x20000000u;
    if ( !result )
    {
      result = *((_DWORD *)a1 + 1580) | 4;
      *((_DWORD *)a1 + 1580) = result;
    }
  }
  return result;
}
