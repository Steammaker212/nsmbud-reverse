/* BanzaiBill_vf112
 * address: 0x60322208   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall BanzaiBill_vf112(int a1)
{
  if ( FIELD_U32(a1, 7300) == 1 )
    FIELD_U32(a1, 156) += 50331648;
  CollisionActor__handleGravity((CollisionActor *)a1);
  return CollisionActor__handleSpeed((CollisionActor *)a1);
}
