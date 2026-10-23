/* sub_606C8B1C
 * address: 0x606C8B1C   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606C8B1C(int a1)
{
  int v1; // r1
  unsigned int v2; // r0
  int v3; // r0
  int v4; // r2

  v1 = FIELD_U32(a1, 7076);
  v2 = FIELD_U32(a1, 7064);
  if ( v2 >= 8 )
    v2 = 0;
  v3 = EnemyCounterMaybe_instance + 4 * v2;
  v4 = v3 + 68;
  if ( !v1 )
    v4 = v3 + 36;
  return *(_DWORD *)v4;
}
