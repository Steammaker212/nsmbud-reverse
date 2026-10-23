/* sub_60829624
 * address: 0x60829624   size: 1148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60829624(int a1, int a2)
{
  char v2; // r5
  int v4; // r10
  int v5; // r9
  int v6; // r0
  int v7; // r0
  int v8; // r1
  bool v9; // zf
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int i; // r0
  int v14; // r3
  int v15; // r7
  int v16; // r6
  int v17; // r6
  _BYTE *v18; // r2
  int v19; // r7
  int v20; // r0
  int v21; // r1
  bool v22; // zf
  int v23; // r0
  int v24; // r0

  v4 = dword_60CC6D78;
  v5 = dword_60C99DEC;
  *(_BYTE *)a2 = 1;
  FIELD_U8(a2, 1) = sub_603FD0B4((_BYTE *)(v5 + 16));
  FIELD_U8(a2, 2) = FIELD_U32(v5, 468);
  FIELD_U8(a2, 3) = 0;
  FIELD_U8(a2, 3) = FIELD_U8(v4, 120);
  FIELD_U8(a2, 4) = FIELD_U32(v4, 412);
  FIELD_U8(a2, 5) = FIELD_U32(v4, 416);
  v6 = FIELD_U32(v4, 420);
  if ( v6 < 0 )
    LOBYTE(v6) = -1;
  FIELD_U8(a2, 6) = v6;
  v7 = FIELD_U32(v4, 468);
  if ( v7 == -1 )
    goto LABEL_10;
  v8 = FIELD_U32(v4, 472);
  v9 = v8 == -1;
  if ( v8 != -1 )
    v9 = FIELD_U32(v4, 476) == -1;
  if ( v9 )
  {
LABEL_10:
    LOBYTE(v10) = -1;
    FIELD_U8(a2, 7) = -1;
    FIELD_U8(a2, 8) = -1;
  }
  else
  {
    FIELD_U8(a2, 7) = v7;
    FIELD_U8(a2, 8) = FIELD_U32(v4, 472);
    v10 = FIELD_U32(v4, 476);
    if ( v10 < 0 )
      LOBYTE(v10) = -1;
  }
  FIELD_U8(a2, 9) = v10;
  v11 = 0;
  v12 = 0;
  FIELD_U8(a2, 10) = FIELD_U8(v4, 513);
  FIELD_U8(a2, 11) = FIELD_U32(v4, 516);
  for ( i = 0; i != 432; i += 72 )
  {
    v14 = v5 + i;
    v15 = *(_DWORD *)(v5 + i + 48);
    if ( v15 == 3 )
    {
      v16 = 1;
      if ( (v12 & 1) != 0 )
      {
        v12 = 1;
        continue;
      }
LABEL_19:
      v18 = (_BYTE *)(a2 + v11++);
      v18[17] = v15;
      v18[12] = FIELD_U32(v14, 40);
      v19 = FIELD_U32(v14, 44);
      v18[22] = v19;
      v2 = FIELD_U8(v14, 66);
      if ( v2 )
      {
        v2 = (_BYTE)v18 + 22;
        v18[22] = v19 | 0x80;
      }
      v18[27] = FIELD_U32(v14, 96);
      v12 = v16 | ((FIELD_U32(v14, 48) & 0xFFFFFFFE) == 2);
      continue;
    }
    v17 = 0;
    if ( v15 == 2 )
    {
      v17 = 1;
      v2 = v12 ^ 1;
    }
    v16 = v12 | v17;
    if ( v15 != 2 || (v2 & 1) != 0 )
      goto LABEL_19;
  }
  FIELD_U16(a2, 32) = FIELD_U16(v4, 520);
  FIELD_U8(a2, 34) = FIELD_U8(v4, 2092);
  FIELD_U8(a2, 35) = FIELD_U8(v4, 2093);
  FIELD_U32(a2, 36) = FIELD_U32(v4, 2136);
  FIELD_U32(a2, 40) = FIELD_U32(v4, 2140);
  FIELD_U32(a2, 44) = FIELD_U32(v4, 2144);
  FIELD_U32(a2, 48) = FIELD_U32(v4, 756);
  FIELD_U32(a2, 52) = FIELD_U32(v5, 472);
  sub_6081EE98(v4, (_BYTE *)(a2 + 56));
  FIELD_U16(a2, 72) = FIELD_U16(v4, 109052);
  v20 = FIELD_U32(v4, 456);
  if ( v20 == -1 )
    goto LABEL_30;
  v21 = FIELD_U32(v4, 460);
  v22 = v21 == -1;
  if ( v21 != -1 )
    v22 = FIELD_U32(v4, 464) == -1;
  if ( v22 )
  {
LABEL_30:
    LOBYTE(v23) = -1;
    FIELD_U8(a2, 74) = -1;
    FIELD_U8(a2, 75) = -1;
  }
  else
  {
    FIELD_U8(a2, 74) = v20;
    FIELD_U8(a2, 75) = FIELD_U32(v4, 460);
    v23 = FIELD_U32(v4, 464);
    if ( v23 < 0 )
      LOBYTE(v23) = -1;
  }
  FIELD_U8(a2, 76) = v23;
  FIELD_U8(a2, 77) = FIELD_U8(v4, 109036);
  FIELD_U8(a2, 78) = FIELD_U8(v4, 109037);
  FIELD_U8(a2, 79) = FIELD_U8(v4, 109038);
  FIELD_U8(a2, 80) = FIELD_U8(v4, 109039);
  FIELD_U8(a2, 81) = FIELD_U32(v4, 536);
  FIELD_U8(a2, 82) = sub_603FD434(v5 + 16);
  FIELD_U8(a2, 83) = 0;
  FIELD_U8(a2, 84) = 0;
  FIELD_U8(a2, 85) = 0;
  FIELD_U8(a2, 86) = FIELD_U8(v4, 523);
  FIELD_U8(a2, 87) = FIELD_U8(v4, 524);
  FIELD_U8(a2, 88) = FIELD_U8(v4, 98528);
  FIELD_U8(a2, 89) = FIELD_U8(v4, 525);
  FIELD_U8(a2, 90) = FIELD_U32(v4, 528);
  FIELD_U8(a2, 91) = FIELD_U8(v4, 505);
  FIELD_U8(a2, 92) = FIELD_U8(v4, 522);
  FIELD_U8(a2, 93) = FIELD_U8(v4, 532);
  FIELD_U8(a2, 94) = FIELD_U8(v4, 526);
  FIELD_U8(a2, 95) = FIELD_U8(v4, 527);
  FIELD_U8(a2, 96) = FIELD_U8(v4, 2084);
  FIELD_U8(a2, 100) = FIELD_U8(v4, 2088);
  FIELD_U8(a2, 97) = FIELD_U8(v4, 2085);
  FIELD_U8(a2, 101) = FIELD_U8(v4, 2089);
  FIELD_U8(a2, 98) = FIELD_U8(v4, 2086);
  FIELD_U8(a2, 102) = FIELD_U8(v4, 2090);
  FIELD_U8(a2, 99) = FIELD_U8(v4, 2087);
  FIELD_U8(a2, 103) = FIELD_U8(v4, 2091);
  FIELD_U8(a2, 104) = FIELD_U8(v4, 109041);
  FIELD_U8(a2, 105) = FIELD_U8(v4, 109042);
  FIELD_U8(a2, 106) = FIELD_U8(v4, 109043);
  FIELD_U8(a2, 107) = FIELD_U8(v4, 109044);
  FIELD_U8(a2, 108) = FIELD_U8(v4, 109045);
  FIELD_U8(a2, 109) = FIELD_U8(v4, 109046);
  FIELD_U8(a2, 110) = FIELD_U8(v4, 109047);
  sub_603F7878(v4 + 796, a2 + 111);
  sub_604084EC(v4 + 52, (void *)(a2 + 296));
  FIELD_U8(a2, 337) = FIELD_U32(v4, 98488);
  FIELD_U8(a2, 338) = FIELD_U32(v4, 98492);
  FIELD_U8(a2, 339) = FIELD_U32(v4, 98496);
  FIELD_U8(a2, 340) = FIELD_U32(v4, 98500);
  FIELD_U8(a2, 341) = FIELD_U32(v4, 98504);
  FIELD_U8(a2, 342) = FIELD_U32(v4, 98508);
  FIELD_U8(a2, 343) = FIELD_U32(v4, 98512);
  FIELD_U8(a2, 344) = FIELD_U32(v4, 98516);
  FIELD_U8(a2, 345) = FIELD_U32(v4, 98520);
  FIELD_U8(a2, 346) = FIELD_U32(v4, 98524);
  sub_60187078(v4 + 984, a2 + 347);
  sub_60400030((int *)(v5 + 596), (_DWORD *)(a2 + 456));
  v24 = FIELD_U8(v4, 109034);
  FIELD_U8(a2, 512) = v24;
  return sub_608284CC(v24, (unsigned __int8 *)a2);
}
