/* sub_60991504
 * address: 0x60991504   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60991504(int a1)
{
  _DWORD *v2; // r0
  unsigned int v3; // r3
  int *v4; // r4
  char v5; // r1
  int *v6; // r2
  int v7; // r5
  unsigned int v8; // r1
  int *v9; // r0
  int v10; // r1
  int (__fastcall *v11)(int *, _DWORD, float); // r2

  v2 = *(_DWORD **)(a1 + 44);
  v3 = v2[1];
  v4 = (int *)v2[2];
  v5 = FIELD_U8(a1, 30);
  v6 = v4;
  if ( v3 > 2 )
    v6 = v4 + 2;
  v7 = *v6;
  if ( (v5 & 0x40) != 0 )
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
  v9 = (int *)sub_6098A304(v2, v8);
  v10 = *v9;
  if ( v7 )
    v11 = *(int (__fastcall **)(int *, _DWORD, float))(v10 + 84);
  else
    v11 = *(int (__fastcall **)(int *, _DWORD, float))(v10 + 92);
  return v11(v9, 0, 1.0);
}
