/* nn__atk__SoundActor__GetPlayingSoundCount_const
 * address: 0x608A97A4   size: 44   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall nn__atk__SoundActor__GetPlayingSoundCount_const(int a1, int a2)
{
  int v2; // r0
  int v3; // r2
  int v4; // r1
  int result; // r0

  v2 = *(_DWORD *)(a1 + 4 * a2 + 72);
  v3 = FIELD_U32(v2, 8);
  v4 = v2 + 4;
  result = 0;
  while ( v3 != v4 )
  {
    v3 = FIELD_U32(v3, 4);
    ++result;
  }
  return result;
}
