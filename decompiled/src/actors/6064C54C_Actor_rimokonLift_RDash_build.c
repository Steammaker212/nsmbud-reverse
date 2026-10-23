/* Actor_rimokonLift_RDash_build
 * address: 0x6064C54C   size: 144   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_rimokonLift_RDash_build(ActorBuildInfo *a1)
{
  int v2; // r0
  int result; // r0
  _DWORD *v4; // r1
  int v5; // r3

  v2 = operator_new(0x2130u);
  result = Actor_rimokonLift_RDash_build_helper(v2, a1);
  *(_DWORD *)result = off_60C13BF0;
  v4 = (_DWORD *)(result + 8480);
  FIELD_U32(result, 7444) = 0;
  FIELD_U32(result, 7448) = 0;
  FIELD_U32(result, 7452) = 0;
  v5 = result + 7456;
  do
  {
    *(_DWORD *)v5 = 0;
    FIELD_U8(v5, 4) = 0;
    FIELD_U8(v5, 5) = 1;
    FIELD_U32(v5, 8) = 0;
    FIELD_U16(v5, 12) = 256;
    v5 += 16;
  }
  while ( (_DWORD *)v5 != v4 );
  FIELD_U16(result, 8488) = 0;
  *v4 = 0;
  FIELD_U32(result, 8484) = 0;
  return result;
}
