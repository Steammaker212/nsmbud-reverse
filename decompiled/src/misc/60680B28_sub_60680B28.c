/* sub_60680B28
 * address: 0x60680B28   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60680B28(int *a1, double a2, double a3)
{
  int v4; // r0
  bool v5; // zf
  int v6; // r0
  int result; // r0
  bool v8; // zf
  _DWORD *v9; // r1
  int *v10; // r2
  unsigned int v11; // r3
  unsigned int v12; // r1
  float v13; // s0

  a1[1888] = 0;
  if ( a1[1878] )
  {
    LODWORD(a2) = 0;
  }
  else
  {
    LODWORD(a2) = 1107296256;
    v4 = *((unsigned __int8 *)a1 + 7597);
    v5 = v4 == 0;
    if ( *((_BYTE *)a1 + 7597) )
    {
      v4 = a1[1882];
      v5 = v4 == 0;
    }
    if ( !v5 )
    {
      LODWORD(a2) = 1107296256;
      *(float *)&a3 = (float)v4;
      LODWORD(a2) = vmin_f32(*(float32x2_t *)&a3, *(float32x2_t *)&a2).n64_u32[0];
    }
  }
  v6 = *a1;
  if ( *((_BYTE *)a1 + 7560) )
    (*(void (__fastcall **)(int *, float))(v6 + 224))(a1, *(float *)&a2);
  else
    (*(void (__fastcall **)(int *, float))(v6 + 208))(a1, *(float *)&a2);
  result = *((unsigned __int8 *)a1 + 7597);
  v8 = result == 0;
  if ( *((_BYTE *)a1 + 7597) )
  {
    result = a1[1882];
    v8 = result == 0;
  }
  if ( !v8 )
  {
    v9 = (_DWORD *)a1[1528];
    v10 = (int *)v9[3];
    v11 = v9[2];
    v12 = v9[17];
    v13 = 120.0 / (float)result;
    if ( v11 > v12 )
      v10 += v12;
    result = *v10;
    *(float *)(*v10 + 24) = v13;
  }
  return result;
}
