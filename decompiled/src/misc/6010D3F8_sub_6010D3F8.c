/* sub_6010D3F8
 * address: 0x6010D3F8   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6010D3F8(int a1)
{
  int v2; // r1
  __int16 v3; // r2
  int v4; // r5
  _WORD *v5; // r6
  int result; // r0

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  FIELD_U32(a1, 7124) = sub_600B2FD4(a1, v2, v3);
  v4 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1036))(a1);
  v5 = (_WORD *)(a1 + 6276);
  result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1040))(a1);
  if ( v4 )
  {
    result = (unsigned __int16)*v5;
    if ( !*v5 )
      return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C86498);
  }
  return result;
}
