/* sub_608732C4
 * address: 0x608732C4   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608732C4(int a1, _DWORD *a2, _DWORD *a3, int a4, unsigned int a5)
{
  int v9; // r0
  int v10; // r1
  int v11; // r4
  int v12; // r6
  int v13; // r0
  unsigned int v14; // r0
  int v16; // [sp+8h] [bp-38h] BYREF
  int v17; // [sp+Ch] [bp-34h]
  int v18; // [sp+10h] [bp-30h]
  int v19; // [sp+14h] [bp-2Ch]

  v9 = *(_DWORD *)a1;
  v10 = FIELD_S8(v9, 226);
  if ( v10 < 0 )
    return 1;
  v11 = 0;
  v12 = *(unsigned __int16 *)(FIELD_U32(v9, 72) + 32 * v10 + 26);
  v19 = 0;
  v18 = 0;
  v17 = 0;
  v16 = 0;
  sub_6083D5B0(&v16);
  v16 = v12;
  v17 = 16;
  v13 = sub_608352A0(a2, (int)&v16);
  v14 = FIELD_U8(a1, 40) * ((v12 + v13 - 1) & -v13);
  if ( v14 <= a5 )
  {
    if ( v14 )
    {
      FIELD_U32(a1, 24) = a3;
      FIELD_U32(a1, 28) = a4;
      g3d_OptionUniformBlock_ref((int *)a1, a2, a3, a4);
    }
    return 1;
  }
  return v11;
}
