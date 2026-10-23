/* PlantFireball_vf72
 * address: 0x6013A1C4   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall PlantFireball_vf72(int a1)
{
  int *v1; // r1

  v1 = dword_6013A1E0;
  if ( !FIELD_U32(a1, 6772) )
    v1 = &dword_6013A1E0[1];
  return *(float *)v1;
}
