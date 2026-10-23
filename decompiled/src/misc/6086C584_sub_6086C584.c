/* sub_6086C584
 * address: 0x6086C584   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6086C584(int *a1, _DWORD *a2, _DWORD *a3, int a4, unsigned int a5)
{
  int v6; // r4
  int v10; // r7
  int v11; // r0
  unsigned int v12; // r0
  int v14; // [sp+8h] [bp-30h] BYREF
  int v15; // [sp+Ch] [bp-2Ch]
  int v16; // [sp+10h] [bp-28h]
  int v17; // [sp+14h] [bp-24h]

  v6 = 0;
  v10 = *(unsigned __int16 *)(*a1 + 176);
  v17 = 0;
  v16 = 0;
  v15 = 0;
  v14 = 0;
  sub_6083D5B0(&v14);
  v14 = *(unsigned __int16 *)(*a1 + 176);
  v15 = 16;
  v11 = sub_608352A0(a2, (int)&v14);
  v12 = *((unsigned __int8 *)a1 + 6) * ((v10 + v11 - 1) & -v11);
  if ( v12 <= a5 )
  {
    v6 = 1;
    if ( v12 )
    {
      a1[8] = (int)a3;
      a1[9] = a4;
      g3d_MaterialUniformBlock_ref(a1, a2, a3, a4);
    }
  }
  return v6;
}
