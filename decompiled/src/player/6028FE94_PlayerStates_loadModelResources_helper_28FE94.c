/* PlayerStates_loadModelResources_helper_28FE94
 * address: 0x6028FE94   size: 192   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PlayerStates_loadModelResources_helper_28FE94(int a1)
{
  signed int v2; // r1
  int result; // r0
  int v4; // r1
  float v5; // s0
  StateBase *v6; // r1

  v2 = damage_ref_28FF68((int *)a1);
  result = 0;
  if ( v2 == 1 )
  {
    v4 = FIELD_U8(a1, 100);
    if ( FIELD_U8(a1, 100) )
    {
      v5 = 1.0;
      FIELD_U32(a1, 52) = dword_60C8F8B0;
      FIELD_U32(a1, 56) = dword_60C8F8B4;
      FIELD_U32(a1, 60) = dword_60C8F8B8;
      FIELD_U32(a1, 80) = -357913941;
    }
    else
    {
      v5 = 0.635;
      FIELD_U32(a1, 52) = dword_60C8F8BC;
      FIELD_U32(a1, 56) = dword_60C8F8C0;
      FIELD_U32(a1, 60) = dword_60C8F8C4;
    }
    FIELD_F32(a1, 88) = v5;
    FIELD_F32(a1, 92) = v5;
    FIELD_F32(a1, 96) = v5;
    if ( v4 )
      v6 = (StateBase *)&dword_60C8F754;
    else
      v6 = (StateBase *)&unk_60C8F7D4;
    StateMgr__changeState((StateMgr *)(a1 + 20), v6);
    sub_60290130(a1);
    return 1;
  }
  return result;
}
