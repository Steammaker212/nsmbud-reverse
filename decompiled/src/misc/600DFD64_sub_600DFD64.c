/* sub_600DFD64
 * address: 0x600DFD64   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600DFD64(int a1)
{
  float v2; // s0
  int result; // r0
  _BYTE *v4; // r0

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  (*(void (__fastcall **)(int, float))(*(_DWORD *)a1 + 1040))(a1, v2);
  result = FIELD_U32(a1, 7092);
  if ( result == 2 )
  {
    result = FIELD_U16(a1, 6276);
    if ( !FIELD_U16(a1, 6276) )
    {
      v4 = (_BYTE *)(a1 + 8132);
      if ( FIELD_S32(a1, 7180) < 1 )
      {
        *v4 = 0;
        return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1060))(a1);
      }
      else
      {
        *v4 = 1;
        return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C84A24);
      }
    }
  }
  else if ( result == 1 )
  {
    result = FIELD_U16(a1, 6276);
    if ( !FIELD_U16(a1, 6276) )
    {
      FIELD_U16(a1, 6276) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1072))(a1);
      result = 2;
      FIELD_U32(a1, 7092) = 2;
    }
  }
  return result;
}
