/* challenge_replay_ref_2_helper
 * address: 0x607E2F30   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall challenge_replay_ref_2_helper(int a1)
{
  int v2; // r9
  _DWORD *v3; // r5
  unsigned int v4; // r7
  int v5; // r4
  signed int *v6; // r10
  signed int result; // r0
  int v8; // r1
  _DWORD v9[10]; // [sp+8h] [bp-28h] BYREF

  v2 = dword_60CC62E4;
  v3 = (_DWORD *)dword_60C99DEC;
  FIELD_U32(dword_60C99DEC, 508) = 4;
  v3[11] = 0;
  v3[29] = 0;
  v3[47] = 0;
  v3[65] = 0;
  v4 = FIELD_U32(dword_60C99DB8, 614136);
  v5 = dword_60C9A1F0;
  v6 = sub_603FD91C((_DWORD *)(dword_60C9A1F0 + 16), v4);
  challenge_replay_ref_2_helper_helper_7E3030();
  sub_604089F4(v5, v4);
  v9[0] = 2;
  v9[1] = sub_600246FC;
  result = SceneMgr_doSceneChange(v2, a1, (int)v9, 0, 0);
  if ( result == 1 )
  {
    sub_603FD238((int)(v3 + 4));
    result = *v6;
    v8 = 15;
    if ( *v6 == 2 )
      v8 = 11;
    if ( result == 1 )
      v8 = 10;
    v3[129] = v8;
  }
  return result;
}
