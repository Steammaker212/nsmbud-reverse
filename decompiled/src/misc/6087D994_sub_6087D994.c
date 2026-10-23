/* sub_6087D994
 * address: 0x6087D994   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6087D994(_DWORD *a1, _DWORD *a2, _DWORD *a3, int a4, unsigned int a5)
{
  int v6; // r4
  int v10; // r0
  int v11; // r7
  int v12; // r6
  int v13; // r0
  unsigned int v14; // r0
  int v16; // [sp+8h] [bp+0h] BYREF
  int v17; // [sp+Ch] [bp+4h]
  int v18; // [sp+10h] [bp+8h]
  int v19; // [sp+14h] [bp+Ch]

  v6 = 0;
  v10 = *a1;
  v11 = FIELD_U16(v10, 80);
  v12 = FIELD_U16(v10, 78);
  v19 = 0;
  v18 = 0;
  v17 = 0;
  v16 = 0;
  sub_6083D5B0(&v16);
  v16 = 48 * (*(unsigned __int16 *)(*a1 + 80) + *(unsigned __int16 *)(*a1 + 78));
  v17 = 80;
  v13 = sub_608352A0(a2, (int)&v16);
  v14 = *((unsigned __int8 *)a1 + 6) * ((v13 + 48 * (v11 + v12) - 1) & -v13);
  if ( v14 <= a5 )
  {
    v6 = 1;
    if ( v14 )
    {
      a1[6] = a3;
      a1[7] = a4;
      g3d_SkeletonUniformBlock_ref(a1, a2, a3, a4);
    }
  }
  return v6;
}
