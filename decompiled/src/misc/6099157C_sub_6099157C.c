/* sub_6099157C
 * address: 0x6099157C   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6099157C(int a1)
{
  _DWORD *v2; // r0
  unsigned int v3; // r12
  _DWORD *v4; // r3
  int v5; // r1
  _DWORD *v6; // r2
  unsigned int v7; // r1
  unsigned int v8; // r1
  int v9; // r0
  float v10; // s0
  int (__fastcall *v11)(float); // r2
  int v12; // r0

  v2 = *(_DWORD **)(a1 + 44);
  v3 = v2[1];
  v4 = (_DWORD *)v2[2];
  v5 = FIELD_U16(a1, 30) & 0x40;
  v6 = v4;
  if ( v3 > 2 )
    v6 = v4 + 2;
  if ( *v6 )
  {
    if ( v5 )
    {
      v7 = 3;
      if ( v3 > 3 )
        v4 += 3;
      if ( !*v4 )
        v7 = 2;
    }
    else
    {
      v7 = 2;
    }
    v9 = sub_6098A304(v2, v7);
    v10 = 1.0;
    v11 = *(int (__fastcall **)(float))(*(_DWORD *)v9 + 84);
  }
  else
  {
    if ( v5 )
    {
      v8 = 1;
      if ( v3 > 1 )
        ++v4;
      if ( !*v4 )
        v8 = 0;
    }
    else
    {
      v8 = 0;
    }
    v12 = sub_6098A304(v2, v8);
    v10 = -1.0;
    v11 = *(int (__fastcall **)(float))(*(_DWORD *)v12 + 92);
  }
  return v11(v10);
}
