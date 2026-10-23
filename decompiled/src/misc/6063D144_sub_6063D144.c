/* sub_6063D144
 * address: 0x6063D144   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6063D144(Actor *a1, int a2)
{
  int ProfileId; // r0
  int *v4; // r2

  ProfileId = Actor__getProfileId(a1);
  v4 = &dword_60CB560C;
  if ( ProfileId == 99 )
    v4 = (int *)&unk_60CB5678;
  return &v4[9 * a2];
}
