/* sub_605BD07C
 * address: 0x605BD07C   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605BD07C(int a1)
{
  int result; // r0
  int v3; // r1

  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  FIELD_U32(a1, 160) += 0x8000000;
  result = a1 + 7784;
  if ( FIELD_U16(a1, 7784) )
  {
    *(_WORD *)result = FIELD_U16(a1, 7784) - 1;
  }
  else
  {
    sub_60584408(dword_60CAF15C, FIELD_S8(a1, 7786), 0);
    sub_60022760(0.0, 0.0, dword_60C7F52C, a1, 0, FIELD_S8(a1, 7786));
    v3 = FIELD_U32(a1, 7308);
    if ( v3 )
      sub_6058568C(dword_60CAF15C, v3, 2);
    if ( (FIELD_U8(a1, 22) & 0x10) != 0 )
    {
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB084C);
    }
    else
    {
      FIELD_U8(a1, 19) = 1;
      return 1;
    }
  }
  return result;
}
