/* sub_60287C90
 * address: 0x60287C90   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60287C90(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  unsigned int v4; // r2
  unsigned int v5; // r0
  int result; // r0
  int *v7; // r1

  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionActor__sub_600034C8((CollisionActor *)a1);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    FIELD_U32(a1, 124) = 0;
  v2 = *(_DWORD **)(a1 + 6300);
  v3 = v2[3];
  v4 = v2[2];
  v5 = v2[17];
  if ( v4 > v5 )
    v3 += 4 * v5;
  result = *(unsigned __int8 *)(*(_DWORD *)v3 + 28);
  if ( (result & 0x20) != 0 )
  {
    result = *(unsigned __int8 *)(FIELD_U32(a1, 6308) + 28);
    if ( (result & 0x20) != 0 )
    {
      result = a1 + 6602;
      if ( FIELD_U16(a1, 6602) )
      {
        *(_WORD *)result = FIELD_U16(a1, 6602) - 1;
      }
      else
      {
        FIELD_U8(a1, 6607) = 1;
        if ( sub_602A1F74(a1, 240.0, 80.0) )
          v7 = &dword_60C8F24C;
        else
          v7 = &dword_60C8F1CC;
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, v7);
      }
    }
  }
  return result;
}
