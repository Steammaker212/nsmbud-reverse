/* sub_60003928
 * address: 0x60003928   size: 440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60003928(int a1, _DWORD *a2, int a3)
{
  int v5; // r5
  _BYTE *v6; // r7
  float v7; // s2
  float v8; // s0
  void (__fastcall *v9)(int, _DWORD *); // r2
  float v10; // s0
  _DWORD v12[3]; // [sp+4h] [bp-2Ch] BYREF
  int v13; // [sp+10h] [bp-20h] BYREF
  int v14; // [sp+14h] [bp-1Ch] BYREF

  v14 = FIELD_U32(a3, 4);
  ((void (__fastcall *)(int *, int *, int, _DWORD))checkLiquidCollisions)(&v13, &v14, a3, FIELD_U8(a1, 86));
  v5 = v13;
  switch ( v13 )
  {
    case 1:
    case 2:
      v6 = (_BYTE *)(a1 + 6054);
      if ( FIELD_U8(a1, 6054) )
        goto LABEL_20;
      v7 = FIELD_F32(a1, 124);
      v8 = FIELD_F32(a1, 6044);
      if ( v7 >= v8 )
      {
        v10 = FIELD_F32(a1, 6040);
        if ( v7 > v10 )
          FIELD_F32(a1, 124) = v10;
      }
      else
      {
        FIELD_F32(a1, 124) = v8;
      }
      *v6 = 1;
      v9 = *(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)a1 + 108);
      goto LABEL_19;
    case 3:
      v6 = (_BYTE *)(a1 + 6054);
      if ( FIELD_U8(a1, 6054) )
        goto LABEL_20;
      *v6 = 1;
      if ( FIELD_U8(a1, 6057) )
        goto LABEL_20;
      v9 = *(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)a1 + 112);
      goto LABEL_19;
    case 4:
      v6 = (_BYTE *)(a1 + 6054);
      if ( FIELD_U8(a1, 6054) )
        goto LABEL_20;
      *v6 = 1;
      if ( FIELD_U8(a1, 6057) )
        goto LABEL_20;
      v9 = *(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)a1 + 116);
      goto LABEL_19;
    default:
      v6 = (_BYTE *)(a1 + 6054);
      if ( v13 != 5 )
      {
        *v6 = 0;
        if ( !a2 )
          return v5;
        goto LABEL_21;
      }
      if ( !*v6 )
      {
        *v6 = 1;
        v9 = *(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)a1 + 120);
LABEL_19:
        v12[0] = FIELD_U32(a1, 108);
        v12[1] = v14;
        v12[2] = 1170939904;
        v9(a1, v12);
      }
LABEL_20:
      if ( a2 )
      {
LABEL_21:
        if ( *v6 )
          *a2 = v14;
      }
      return v5;
  }
}
