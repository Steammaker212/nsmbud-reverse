/* sub_605EB89C
 * address: 0x605EB89C   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605EB89C(_DWORD *a1, float a2)
{
  int result; // r0
  int v5; // r5
  int v6; // r0
  bool v7; // zf
  int v8; // r0
  unsigned int v9; // r1
  int *v10; // r0
  int v11; // r5
  bool v12; // zf

  result = a1[20];
  if ( result != -1 )
  {
    a1[46] = 0;
    v5 = **(_DWORD **)(a1[3] + 12);
    v6 = FIELD_U32(v5, 136);
    v7 = v6 == 0;
    if ( v6 )
      v7 = FIELD_U32(v5, 128) == 0;
    if ( !v7 )
    {
      sub_6041838C((ModelAnimation *)(v5 + 4));
      FIELD_U32(v5, 20) = 0;
      FIELD_U32(v5, 28) |= 2u;
    }
    result = a1[21];
    if ( result == -1 )
    {
      v8 = a1[3];
      v9 = FIELD_U32(v8, 8);
      v10 = *(int **)(v8 + 12);
      if ( v9 > 1 )
        ++v10;
      v11 = *v10;
      result = *(_DWORD *)(*v10 + 136);
      v12 = result == 0;
      if ( result )
      {
        result = FIELD_U32(v11, 128);
        v12 = result == 0;
      }
      if ( !v12 )
      {
        sub_6041838C((ModelAnimation *)(v11 + 4));
        FIELD_U32(v11, 20) = 0;
        result = FIELD_U32(v11, 28) | 2;
        FIELD_U32(v11, 28) = result;
      }
    }
    if ( a2 != 0.0 )
      return sub_6040EB10((int)(a1 + 4), a2);
  }
  return result;
}
