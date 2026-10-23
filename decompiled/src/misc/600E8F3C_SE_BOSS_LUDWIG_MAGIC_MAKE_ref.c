/* SE_BOSS_LUDWIG_MAGIC_MAKE_ref
 * address: 0x600E8F3C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_LUDWIG_MAGIC_MAKE_ref(int a1)
{
  int v1; // r4
  const char *v2; // r1

  v1 = a1;
  if ( FIELD_U8(a1, 8132) )
    a1 = FIELD_U32(a1, 56);
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 724))(a1) == 1 )
    v2 = "SE_BOSS_LUDWIG_MAGIC_MAKE_FAST";
  else
    v2 = "SE_BOSS_LUDWIG_MAGIC_MAKE";
  return sub_608134C8(v1 + 6332, v2, 0);
}
