/* sub_6022A1D0
 * address: 0x6022A1D0   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6022A1D0(int a1)
{
  float v2; // s2
  float v3; // s0
  _BOOL4 v4; // r5
  float v5; // s2
  int v6; // r0
  int v7; // r1
  int v9; // [sp+4h] [bp-24h] BYREF
  _DWORD v10[2]; // [sp+8h] [bp-20h] BYREF
  _DWORD v11[6]; // [sp+10h] [bp-18h] BYREF

  v2 = FIELD_F32(a1, 40);
  v3 = v2 + FIELD_F32(a1, 36);
  FIELD_F32(a1, 36) = v3;
  if ( v2 <= 0.0 )
  {
    v4 = 0;
    if ( v2 < 0.0 )
    {
      v5 = FIELD_F32(a1, 32);
      if ( v3 < v5 )
      {
        FIELD_F32(a1, 36) = v5;
        goto LABEL_7;
      }
    }
  }
  else
  {
    if ( v3 > -0.8 )
    {
      FIELD_U32(a1, 36) = -1085485875;
LABEL_7:
      v4 = 1;
      goto LABEL_10;
    }
    v4 = 0;
    if ( FIELD_U8(a1, 48) )
      v4 = v3 > (float)((float)(v2 * -22.0) + -0.8);
  }
LABEL_10:
  v6 = (*(int (__fastcall **)(_DWORD, _DWORD))(***(_DWORD ***)(a1 + 8) + 132))(
         **(_DWORD **)(a1 + 8),
         FIELD_U32(a1, 28));
  v7 = FIELD_U32(a1, 36);
  v11[0] = 0;
  v9 = 0;
  v11[1] = v7;
  v10[0] = 1065353216;
  v10[1] = 1065353216;
  (*(void (__fastcall **)(int, _DWORD, _DWORD *, int *, _DWORD *))(*(_DWORD *)v6 + 4))(v6, 0, v10, &v9, v11);
  return v4;
}
