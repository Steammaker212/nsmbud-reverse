/* sub_608337E0
 * address: 0x608337E0   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608337E0(int a1)
{
  int v1; // lr
  int v2; // r12
  int v3; // r3
  int v4; // r2
  int v5; // r3
  int v6; // r3
  int v7; // r12
  int v8; // r1
  char v9; // r3
  bool v10; // nf

  v1 = FIELD_U32(a1, 4);
  v2 = FIELD_U32(a1, 12);
  v3 = -v1 / FIELD_U32(a1, 8) + *(_DWORD *)a1;
  if ( v3 < 0 )
  {
    v4 = (v3 + v2) & ((v3 + v2) >> 31);
  }
  else
  {
    v4 = v3 - v2;
    if ( v3 - v2 <= 0 )
      v4 = 0;
  }
  v5 = FIELD_U32(a1, 16);
  if ( v4 <= v5 )
  {
    if ( v4 < -v5 )
      v4 = -v5;
  }
  else
  {
    v4 = FIELD_U32(a1, 16);
  }
  v6 = FIELD_U32(a1, 20);
  if ( v4 <= -v6 || v4 >= v6 )
  {
    v8 = v4 + v1;
    v9 = 0;
  }
  else
  {
    v7 = FIELD_U32(a1, 24);
    if ( v1 < 0 )
    {
      v8 = v6 + v1;
      v10 = v6 + v1 + v7 < 0;
      v9 = 0;
      if ( !(v10 ^ __OFSUB__(v8, -v7) | (v8 == -v7)) )
      {
        v4 = 0;
        v9 = 1;
        v8 = 0;
      }
    }
    else
    {
      v8 = v1 - v6;
      v9 = 0;
      if ( v8 < v7 )
      {
        v4 = 0;
        v9 = 1;
        v8 = 0;
      }
    }
  }
  *(_DWORD *)a1 = v4;
  FIELD_U32(a1, 4) = v8;
  FIELD_U8(a1, 32) = v9;
  return v8;
}
