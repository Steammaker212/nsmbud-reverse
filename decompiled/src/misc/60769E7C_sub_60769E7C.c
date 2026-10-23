/* sub_60769E7C
 * address: 0x60769E7C   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60769E7C(_BYTE *a1, int a2, int a3, int a4)
{
  int v7; // r5
  _BYTE *v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  _BYTE *v12; // r0
  _BYTE *v13; // r1
  int v14; // r1
  int v15; // r2
  float v17[4]; // [sp+8h] [bp-38h] BYREF
  float v18[2]; // [sp+18h] [bp-28h] BYREF
  float v19; // [sp+20h] [bp-20h]

  if ( (unsigned int)(a4 - 2) < 2 )
  {
    (*(void (__fastcall **)(_BYTE *, float *))(*(_DWORD *)a1 + 724))(a1, v18);
    v11 = *((_DWORD *)a1 + 20);
    if ( v11 == 1 )
      v19 = -v19;
    v12 = a1 + 1328;
    v13 = &a1[v11 + 1328];
    if ( v13[2341] )
    {
      if ( v13[2345] )
        goto LABEL_21;
      v14 = 3 * v11;
      v15 = 2356;
    }
    else
    {
      if ( !v13[2349] )
        goto LABEL_21;
      v14 = 3 * v11;
      v15 = 2404;
    }
    v19 = *(float *)&v12[4 * v14 + 8 + v15];
LABEL_21:
    v17[0] = v18[0];
    v17[1] = v18[1];
    v17[2] = v19;
    v7 = 0;
    if ( ((int (__fastcall *)(_BYTE *, int, int, int, float *))loc_60155120)(v12, a2, a3, v11, v17) != 1 )
      return v7;
    if ( !a1[6692] )
      return 1;
    goto LABEL_23;
  }
  v7 = 0;
  if ( a4 )
  {
    if ( a4 != 1 || ((int (__fastcall *)(_BYTE *, int, int))loc_60154D7C)(a1 + 1328, a2, a3) != 1 )
      return v7;
    if ( !a1[6692] )
    {
      v8 = a1;
      v9 = a2;
      v10 = 1;
      goto LABEL_15;
    }
    goto LABEL_23;
  }
  if ( ((int (__fastcall *)(_BYTE *, int, int))loc_60154F48)(a1 + 1328, a2, a3) != 1 )
    return v7;
  FIELD_F32(a2, 4) = FIELD_F32(a2, 4) + -16.0;
  if ( a1[6692] )
  {
LABEL_23:
    if ( (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 712))(a1) != 1 )
      return v7;
    return 1;
  }
  v7 = 0;
  v8 = a1;
  v9 = a2;
  v10 = 0;
LABEL_15:
  if ( ((int (__fastcall *)(_BYTE *, int, int))loc_6076A024)(v8, v9, v10) != 2 )
    return 1;
  return v7;
}
