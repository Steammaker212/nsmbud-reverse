/* SwingingCollider_vf30
 * address: 0x60165984   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SwingingCollider_vf30(_DWORD *a1)
{
  int *v2; // r4
  int v3; // t1
  int *v4; // r1
  int result; // r0
  int *v6; // r1
  _DWORD *v7; // r2
  int v8; // r3

  ColliderBase_vf30(a1);
  v3 = a1[98];
  v2 = a1 + 98;
  v4 = v2 + 2;
  if ( v3 < v2[2] )
    v4 = v2;
  result = *v4;
  if ( *v4 >= 1 )
  {
    v6 = (int *)(v2[1] + 4);
    v7 = (_DWORD *)(v2[3] + 4);
    do
    {
      --result;
      *(v7 - 1) = *(v6 - 1);
      v8 = *v6;
      v6 += 2;
      *v7 = v8;
      v7 += 2;
    }
    while ( result );
  }
  return result;
}
