/* sub_603F4C8C
 * address: 0x603F4C8C   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_603F4C8C()
{
  int v0; // r0
  int v1; // r2
  unsigned int v2; // r1
  int v3; // r0
  int result; // r0

  sub_604140F8(dword_60C9A698);
  sub_60238B54(dword_60C8D9DC);
  sub_60788D18(PlayerMgr_instance);
  sub_605E8A4C(dword_60CB1BE4);
  sub_60007C88((sead_ListNode *)ActorMgr__instance);
  nullsub_1330(dword_60CBD894);
  sub_6072253C(dword_60CBD85C);
  sub_608DE6BC(dword_60C995D0 + 16);
  nullsub_1329();
  v0 = dword_60CD0B40;
  v1 = FIELD_U32(dword_60CD0B40, 36);
  if ( FIELD_U32(dword_60CD0B40, 32) > 9u )
    v1 += 36;
  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v1 + 420) + 880) = 0;
  v2 = FIELD_U32(v0, 32);
  v3 = FIELD_U32(v0, 36);
  if ( v2 > 8 )
    v3 += 32;
  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v3 + 420) + 880) = 0;
  if ( FIELD_U32(dword_60C9BAAC, 172) )
    sub_60417FFC(dword_60C9BAAC, 3u);
  sub_604574C8(dword_60C9CF18, 1, 0);
  result = dword_60CC6C2C;
  FIELD_U8(dword_60CC6C2C, 286) &= ~1u;
  return result;
}
