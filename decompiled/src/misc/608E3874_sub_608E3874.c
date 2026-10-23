/* sub_608E3874
 * address: 0x608E3874   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_608E3874(int a1)
{
  int v1; // r4
  const char *v2; // r1
  int v3; // r0

  v1 = a1 + 84;
  (*(void (__fastcall **)(int))(FIELD_U32(a1, 84) + 12))(a1 + 84);
  v3 = nn__fs__CommitSaveData(*(nn__fs **)(v1 + 4), v2);
  *(_DWORD *)(v1 - 4) = v3;
  return v3 == 0;
}
