/* sub_609873E4
 * address: 0x609873E4   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609873E4(int a1)
{
  int v2; // r6
  int v3; // r5
  int v4; // r0
  int v5; // r7

  v2 = FIELD_U32(a1, 28);
  v3 = FIELD_U32(a1, 32);
  if ( v2 )
  {
    do
    {
      if ( FIELD_U32(v3, 4) )
        sub_609119B8(v3);
      v3 += 12;
      --v2;
    }
    while ( v2 );
    v3 = FIELD_U32(a1, 32);
  }
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 - 4);
    if ( v4 )
    {
      v5 = 12 * v4;
      do
      {
        nullsub_2418();
        v5 -= 12;
      }
      while ( v5 );
    }
    operator_delete_8DE3FC((void *)(v3 - 8));
    FIELD_U32(a1, 28) = 0;
    FIELD_U32(a1, 32) = 0;
  }
  return sub_6098D9E4(a1 + 24);
}
