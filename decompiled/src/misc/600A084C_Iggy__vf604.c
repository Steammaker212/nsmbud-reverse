/* Iggy__vf604
 * address: 0x600A084C   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: KoopalingBase : 0x600B5F34
// 
// Overridden by: None
int __fastcall Iggy__vf604(int a1)
{
  float v2; // s0
  int result; // r0

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  result = (*(int (__fastcall **)(int, float))(*(_DWORD *)a1 + 1252))(a1, v2);
  if ( FIELD_F32(a1, 124) <= 2.75 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C82758);
  return result;
}
