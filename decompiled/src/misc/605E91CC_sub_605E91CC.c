/* sub_605E91CC
 * address: 0x605E91CC   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E91CC(_DWORD *a1, int a2, int *a3)
{
  int v5; // r0
  int v6; // r4
  int v7; // r6
  int v8; // r3
  int v9; // r3
  int v10; // r1
  int result; // r0

  v5 = a1[9];
  if ( v5 )
  {
    v6 = a1[8];
    v7 = 0;
    do
    {
      v8 = a1[7];
      if ( v6 < v8 )
        v8 = 0;
      v9 = *(_DWORD *)(a1[6] - 4 * v8 + 4 * v6++);
      if ( FIELD_U32(v9, 6252) == a2 )
        ++v7;
      --v5;
    }
    while ( v5 );
  }
  else
  {
    v7 = 0;
  }
  v10 = sub_6078A030(PlayerMgr_instance) - v7;
  if ( v10 <= 0 )
  {
    if ( !a3 )
      return 0;
LABEL_15:
    *a3 = 0;
    return 0;
  }
  if ( a1[9] == 12 )
  {
    if ( !a3 )
      return 0;
    goto LABEL_15;
  }
  result = 1;
  if ( a3 )
    *a3 = v10;
  return result;
}
