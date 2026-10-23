/* ChallengeResultScene_create
 * address: 0x600247B0   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ChallengeResultScene_create(int a1)
{
  int v2; // r0

  v2 = operator_new_8DE25C(0x2A6Cu, *(void **)(*(_DWORD *)a1 + 4 * *(_DWORD *)(*(_DWORD *)a1 + 20)), 4);
  return ChallengeResultScene_ctor(v2, a1);
}
