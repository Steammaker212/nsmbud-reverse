/* LargeGoomba_vf193
 * address: 0x603420C8   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LargeGoomba_vf193(int a1)
{
  float v2; // s0
  int result; // r0

  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  result = FIELD_U32(a1, 6412);
  if ( result <= 0 )
  {
    result = FIELD_U8(a1, 535);
    if ( FIELD_U8(a1, 535) )
    {
      (*(void (__fastcall **)(int, float))(*(_DWORD *)a1 + 648))(a1, v2);
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C94590);
    }
  }
  return result;
}
