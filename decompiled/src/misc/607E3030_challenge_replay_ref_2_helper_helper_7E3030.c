/* challenge_replay_ref_2_helper_helper_7E3030
 * address: 0x607E3030   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall challenge_replay_ref_2_helper_helper_7E3030(int a1, _BYTE *a2)
{
  char v3; // r11
  int v4; // r5
  char v5; // r0
  char v6; // r10
  char v7; // r9
  char v8; // r7
  int v9; // r4
  int v10; // r6
  unsigned int v12; // [sp+0h] [bp-28h]

  v3 = a2[32];
  v4 = LevelInfo_instance;
  v5 = sub_603FD9AC((int)a2);
  v6 = a2[64];
  v7 = a2[68];
  v8 = v5;
  v12 = sub_603FD9BC((int)a2);
  v9 = dword_60C99DEC;
  v10 = dword_60C99DEC + 16;
  sub_603FD36C(dword_60C99DEC + 16, 0);
  sub_603F692C(v10);
  sub_6040D3A4(v4, v3);
  sub_6040D3B8(v4, v8);
  sub_6040D3CC(v4, v6);
  sub_6040D3E0(v4, v7);
  sub_6040D3F4(v4, 1);
  FIELD_U32(v9, 88) = 0;
  FIELD_U32(v9, 40) = 5;
  FIELD_U32(v9, 160) = 0;
  FIELD_U8(v9, 108) = 0;
  FIELD_U32(v9, 112) = 5;
  FIELD_U32(v9, 232) = 0;
  FIELD_U8(v9, 180) = 0;
  FIELD_U32(v9, 184) = 5;
  FIELD_U32(v9, 304) = 0;
  FIELD_U8(v9, 252) = 0;
  FIELD_U32(v9, 256) = 5;
  FIELD_U8(v9, 36) = 1;
  FIELD_U32(v9, 44) = v12;
  FIELD_U8(v9, 478) = -1;
  FIELD_U8(v9, 477) = -1;
  FIELD_U8(v9, 479) = -1;
  FIELD_U8(v9, 521) = 0;
  FIELD_U32(v9, 508) = 4;
  return 4;
}
