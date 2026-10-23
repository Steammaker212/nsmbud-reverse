/* sub_607E22E0
 * address: 0x607E22E0   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_607E22E0()
{
  int v0; // r6
  int v1; // r4
  _DWORD *v2; // r5
  char v3; // r7
  char v4; // r8
  unsigned int v5; // r0
  int v6; // r1
  int result; // r0

  v0 = LevelInfo_instance;
  v1 = dword_60C99DD4 + 272;
  if ( !dword_60C99DD4 )
    v1 = dword_60C99DEC + 16;
  v2 = sub_603FD91C((_DWORD *)(dword_60C9A1F0 + 16), FIELD_U8(dword_60C9A1F0, 6558));
  v3 = *((_BYTE *)v2 + 64);
  v4 = *((_BYTE *)v2 + 68);
  sub_603F692C(v1);
  sub_6040D3CC(v0, v3);
  sub_6040D3E0(v0, v4);
  sub_6040D3F4(v0, 1);
  sub_603FD36C(v1, 0);
  v5 = sub_603FD9BC((int)v2);
  FIELD_U32(v1, 72) = 0;
  FIELD_U32(v1, 24) = 5;
  FIELD_U32(v1, 28) = v5;
  FIELD_U32(v1, 144) = 0;
  FIELD_U32(v1, 96) = 5;
  FIELD_U32(v1, 100) = v5;
  FIELD_U32(v1, 216) = 0;
  FIELD_U32(v1, 168) = 5;
  FIELD_U32(v1, 172) = v5;
  FIELD_U32(v1, 288) = 0;
  FIELD_U32(v1, 240) = 5;
  FIELD_U32(v1, 244) = v5;
  FIELD_U8(v1, 505) = 0;
  v6 = 15;
  result = *v2;
  if ( *v2 == 2 )
    v6 = 11;
  if ( result == 1 )
    v6 = 10;
  FIELD_U32(v1, 500) = v6;
  return result;
}
