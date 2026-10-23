/* sub_60875774
 * address: 0x60875774   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60875774(int a1, _DWORD *a2, _DWORD *a3, int a4, unsigned int a5)
{
  int v6; // r4
  int v10; // r0
  unsigned int v11; // r0
  int v13; // [sp+8h] [bp-30h] BYREF
  int v14; // [sp+Ch] [bp-2Ch]
  int v15; // [sp+10h] [bp-28h]
  int v16; // [sp+14h] [bp-24h]

  v6 = 0;
  v16 = 0;
  v15 = 0;
  v14 = 0;
  v13 = 0;
  sub_6083D5B0(&v13);
  v13 = 256;
  v14 = 16;
  v10 = sub_608352A0(a2, (int)&v13);
  v11 = FIELD_U8(a1, 10) * ((v10 + 255) & -v10) * FIELD_U8(a1, 11);
  if ( v11 <= a5 )
  {
    v6 = 1;
    if ( v11 )
    {
      FIELD_U32(a1, 12) = a3;
      FIELD_U32(a1, 16) = a4;
      g3d_ShapeUniformBlock_ref(a1, a2, a3, a4);
    }
  }
  return v6;
}
