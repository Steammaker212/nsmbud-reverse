/* sub_605BF550
 * address: 0x605BF550   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605BF550(int a1)
{
  int *v1; // r4
  int i; // r0
  int v3; // r1
  bool v4; // zf
  unsigned int v5; // r2

  v1 = *(int **)(a1 + 1280);
  for ( i = 0; v1; v1 = (int *)v1[1] )
  {
    v3 = *v1;
    v4 = *v1 == 0;
    if ( *v1 )
    {
      v3 = FIELD_U32(v3, 2196);
      v4 = v3 == 0;
    }
    if ( !v4 && FIELD_U8(v3, 533) == 1 )
    {
      v5 = FIELD_S8(v3, 84);
      if ( v5 <= 3 && (FIELD_U16(PlayerMgr_instance, 66) & (unsigned __int16)(1 << v5)) != 0 )
        i |= (1 << v5) | sub_606BA918(v3);
    }
  }
  return sub_606BAAFC(i);
}
