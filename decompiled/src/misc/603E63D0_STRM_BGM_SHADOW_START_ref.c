/* STRM_BGM_SHADOW_START_ref
 * address: 0x603E63D0   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall STRM_BGM_SHADOW_START_ref(int a1)
{
  _DWORD *v2; // r1
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0

  sub_608091A4(SoundSystem_instance, "STRM_BGM_SHADOW_START");
  sub_6077A260(dword_60CBFA90);
  v2 = (_DWORD *)PlayerMgr_instance;
  v3 = FIELD_U32(PlayerMgr_instance, 32);
  if ( v3 )
  {
    FIELD_U32(v3, 1236) |= 2u;
    sub_60768F28(v3, 153, 0);
    v2 = (_DWORD *)PlayerMgr_instance;
  }
  v4 = v2[9];
  if ( v4 )
  {
    FIELD_U32(v4, 1236) |= 2u;
    sub_60768F28(v4, 153, 0);
    v2 = (_DWORD *)PlayerMgr_instance;
  }
  v5 = v2[10];
  if ( v5 )
  {
    FIELD_U32(v5, 1236) |= 2u;
    sub_60768F28(v5, 153, 0);
    v2 = (_DWORD *)PlayerMgr_instance;
  }
  v6 = v2[11];
  if ( v6 )
  {
    FIELD_U32(v6, 1236) |= 2u;
    sub_60768F28(v6, 153, 0);
  }
  sub_605E995C(dword_60CB1BE4);
  StateMgr__changeState((StateMgr *)(a1 + 76), (StateBase *)&dword_60C99620);
  FIELD_U32(a1, 52) = 0;
  return 0;
}
