/* Actor_mid_build
 * address: 0x6061992C   size: 116   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall Actor_mid_build(ActorBuildInfo *a1)
{
  StateActor *v2; // r4
  int *v3; // r5
  int v4; // r0
  char *v5; // r2

  v2 = (StateActor *)operator_new(0x1C08u);
  sub_60676744(v2, a1);
  FIELD_U32(v2, 0x0)._._.vtable = (int)off_60C1080C;
  v3 = &v2[1]._._._.field_30;
  memset(&v2[1]._._._.field_20.next, 0, 1038);
  v4 = 0;
  do
  {
    v3[v4] = 0x40000000;
    v5 = (char *)&v3[v4];
    v4 += 4;
    *((_DWORD *)v5 + 1) = 0x40000000;
    *((_DWORD *)v5 + 2) = 0x40000000;
    *((_DWORD *)v5 + 3) = 0x40000000;
  }
  while ( v4 != 256 );
  return v2;
}
