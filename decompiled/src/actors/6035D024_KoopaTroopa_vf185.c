/* KoopaTroopa_vf185
 * address: 0x6035D024   size: 92   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall KoopaTroopa_vf185(int a1)
{
  float v2; // s16
  int v3; // r5

  if ( FIELD_U32(a1, 7476) == 1 )
  {
    v2 = FIELD_F32(a1, 500);
    v3 = FIELD_U32(a1, 504);
    FIELD_F32(a1, 500) = v2 + 400.0;
    StageActor__cullCheck((StageActor *)a1, 8);
    FIELD_F32(a1, 500) = v2;
    FIELD_U32(a1, 504) = v3;
  }
  else
  {
    ShellEnemy__vf2E4(a1);
  }
}
