/* Object_invokeSlot37
 * address: 0x600D7390   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Object_invokeSlot37(int a1)
{
  int result; // r0

  CollisionActor__handleSpeed((CollisionActor *)a1);
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 148))(a1);
  if ( !result )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C84478);
  return result;
}
