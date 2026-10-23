/* sub_604E5030
 * address: 0x604E5030   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604E5030(_DWORD *a1)
{
  int v2; // r7
  int v3; // r6
  int *v4; // r8
  int *v5; // r4
  int v6; // r0
  int v7; // r7

  v2 = sub_60834614(a1);
  if ( FIELD_U8(v2, 20) )
  {
    v3 = 0;
    v4 = a1 + 14759;
    v5 = a1 + 14763;
    do
    {
      v6 = sub_6050F248(a1 + 14758, *(_DWORD *)(v2 + 72 * v3 + 32), v3);
      if ( v3 )
      {
        if ( ++v3 >= 6 )
          break;
      }
      else
      {
        v7 = FIELD_U32(v2, 24);
        v3 = 1;
        if ( sub_6050DF34(a1 + 14758, *v5, 0) < v7 )
          a1[15704] = 653;
        v6 = *v5;
        if ( *v5 != v7 )
        {
          a1[14762] = v6;
          *v5 = v7;
          v6 = *v4 | 2;
          *v4 = v6;
        }
      }
      v2 = sub_60834614(v6);
    }
    while ( *(_BYTE *)(v2 + 72 * v3 + 20) );
  }
  ((void (__fastcall *)(_DWORD *))loc_604E6E64)(a1);
  sub_604E7960(a1, 0);
  sub_604E7C78(a1, 0);
  return sub_604E75CC(a1);
}
