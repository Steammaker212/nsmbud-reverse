/* sub_60003160
 * address: 0x60003160   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60003160(CollisionActor *a1)
{
  int result; // r0
  int v3; // r0
  int *v4; // r5
  char v5; // r1
  char *v6; // r6
  int v7; // r0
  int v8; // r0
  char v9; // r0
  _BYTE *v10; // r4
  int v11; // t1
  float y; // s2
  float v13; // s0
  float v14; // s0
  float v15; // [sp+0h] [bp-20h] BYREF
  int v16; // [sp+4h] [bp-1Ch] BYREF

  result = (unsigned __int8)FIELD_U8(a1, 0x17A7);
  if ( result )
    return result;
  v4 = &FIELD_U32(a1, 0x17A8);
  v3 = LOBYTE(FIELD_U32(a1, 0x17A8));
  if ( v3 == 1 )
  {
    v6 = &FIELD_U8(a1, 0x17A4);
    if ( !FIELD_U8(a1, 0x17A4) )
    {
      *v6 = 1;
      if ( FIELD_U8(a1, 0x177C) )
      {
        if ( !FIELD_U32(a1, 0x1780) )
          goto LABEL_17;
      }
      else
      {
        ((void (__fastcall *)(int *, _DWORD, Vec3 *, _DWORD))checkLiquidCollisions)(
          &v16,
          0,
          FIELD_U32(a1, 0x1778),
          (unsigned __int8)FIELD_U8(a1, 0x56));
        if ( !v16 )
          goto LABEL_17;
      }
      y = FIELD_F32(a1, 0x7C);
      v13 = FIELD_F32(a1, 0x179C);
      if ( y >= v13 )
      {
        v14 = FIELD_F32(a1, 0x1798);
        if ( y > v14 )
          FIELD_F32(a1, 0x7C) = v14;
      }
      else
      {
        FIELD_F32(a1, 0x7C) = v13;
      }
      v5 = 1;
      goto LABEL_5;
    }
LABEL_11:
    v7 = sub_60003928(a1, &v15, FIELD_U32(a1, 0x1778));
    if ( (unsigned int)(v7 - 3) > 1 )
    {
      if ( v7 != 5 )
        goto LABEL_17;
      v8 = (*(int (__fastcall **)(CollisionActor *, float))(FIELD_U32(a1, 0x0) + 184))(a1, v15);
    }
    else
    {
      v8 = (*(int (__fastcall **)(CollisionActor *, float))(FIELD_U32(a1, 0x0) + 180))(a1, v15);
    }
    if ( v8 == 1 )
    {
      (*(void (__fastcall **)(CollisionActor *, _DWORD))(FIELD_U32(a1, 0x0) + 164))(a1, 0);
      *v6 = 0;
      FIELD_U8(a1, 0x17A6) = 0;
    }
    goto LABEL_17;
  }
  if ( v3 != 2 )
  {
    v6 = &FIELD_U8(a1, 0x17A4);
    if ( !FIELD_U8(a1, 0x17A4) )
      goto LABEL_17;
    goto LABEL_11;
  }
  v5 = 0;
  FIELD_U8(a1, 0x17A4) = 0;
LABEL_5:
  FIELD_U8(a1, 0x17A6) = v5;
LABEL_17:
  v11 = BYTE1(FIELD_U32(a1, 0x17A8));
  v10 = (char *)&FIELD_U32(a1, 0x17A8) + 1;
  v9 = v11;
  if ( v11 )
    *v10 = v9 - 1;
  result = 0;
  *(_BYTE *)v4 = 0;
  return result;
}
