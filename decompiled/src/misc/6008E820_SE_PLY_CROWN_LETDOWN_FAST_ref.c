/* SE_PLY_CROWN_LETDOWN_FAST_ref
 * address: 0x6008E820   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_CROWN_LETDOWN_FAST_ref(int a1)
{
  float v2; // s0
  int v3; // r1
  int result; // r0
  int *v5; // r1

  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  sub_60101A6C(a1, v2);
  FIELD_U32(a1, 160) += dword_60C82364;
  sub_608134C8(a1 + 9476, "SE_PLY_CROWN_LETDOWN_FAST", 0);
  CollisionMgr_process((_BYTE *)(a1 + 648));
  v3 = FIELD_U32(a1, 15268);
  if ( v3 < 1 || (FIELD_U32(a1, 15268) = v3 - 1, v3 == 1) )
  {
    if ( FIELD_U8(a1, 15264) )
      (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C821A0);
  }
  result = FIELD_U8(a1, 2872);
  if ( (result & 1) != 0 )
  {
    FIELD_U32(a1, 124) = 0;
    if ( FIELD_U8(a1, 15264) )
      v5 = (int *)&unk_60C821A0;
    else
      v5 = &dword_60C82160;
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, v5);
  }
  return result;
}
