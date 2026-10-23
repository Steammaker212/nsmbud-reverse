/* sub_608A937C
 * address: 0x608A937C   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608A937C(int a1)
{
  int **v2; // r0
  int *v3; // r3
  int v4; // r5
  int *v5; // r2

  if ( !FIELD_U8(a1, 52) )
    return 0;
  FIELD_U32(a1, 28) = &unk_60CC82A8;
  FIELD_U32(a1, 32) = 32;
  FIELD_U32(a1, 36) = 1063675494;
  FIELD_U32(a1, 40) = 0;
  v2 = (int **)(a1 + 20);
  FIELD_U32(a1, 44) = -1;
  while ( *(int ***)(a1 + 24) != v2 )
  {
    v5 = *v2;
    if ( *v2 != (int *)v2 )
    {
      v3 = (int *)v5[1];
      v4 = *v3;
      *(_DWORD *)(*v5 + 4) = v3;
      *v3 = *v5;
      FIELD_U32(v4, 4) = v5;
      *v5 = v4;
    }
  }
  sub_608C666C(a1 + 8);
  FIELD_U32(a1, 48) = 0;
  FIELD_U8(a1, 52) = 0;
  return 1;
}
