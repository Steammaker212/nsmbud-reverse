/* Replay_title_title_03u_dat_ref
 * address: 0x6040C398   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Replay_title_title_03u_dat_ref(int result)
{
  unsigned int v1; // r1
  int v2; // r4
  int v3; // r1
  int v4; // r2
  int *v5; // r1

  v1 = FIELD_U32(result, 2072);
  if ( v1 <= 7 && ((1 << v1) & 0xA8) != 0 )
  {
    v2 = dword_60CC6D78;
    v3 = sub_608DE61C(result + 2088, FIELD_U32(result, 2220));
    v4 = 0;
    if ( v3 )
    {
      v5 = (int *)(v3 - 4);
      if ( v5 )
        v4 = *v5;
    }
    return sub_608FDDF4(v2 + 136, "Replay/title/title%03u.dat", v4);
  }
  return result;
}
