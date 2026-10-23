/* sub_6076A170
 * address: 0x6076A170   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076A170(_DWORD *a1, float *a2)
{
  int v4; // r0
  _DWORD *v5; // r1
  _BYTE *v6; // r2
  _DWORD *v7; // r0
  int v8; // r1
  int result; // r0
  int v10; // r1
  float v11; // r2
  _DWORD v12[2]; // [sp+0h] [bp-20h] BYREF
  float v13; // [sp+8h] [bp-18h]

  (*(void (__fastcall **)(_DWORD *, _DWORD *))(*a1 + 724))(a1, v12);
  v4 = a1[20];
  if ( v4 == 1 )
    v13 = -v13;
  v5 = a1 + 332;
  v6 = (char *)a1 + v4 + 1328;
  if ( v6[2341] )
  {
    if ( !v6[2345] )
    {
      v7 = &v5[3 * v4];
      v8 = 589;
LABEL_8:
      v13 = *(float *)&v7[v8 + 2];
    }
  }
  else if ( v6[2349] )
  {
    v7 = &v5[3 * v4];
    v8 = 601;
    goto LABEL_8;
  }
  result = v12[0];
  v10 = v12[1];
  v11 = v13;
  *a2 = *(float *)v12;
  *((_DWORD *)a2 + 1) = v10;
  a2[2] = v11;
  return result;
}
