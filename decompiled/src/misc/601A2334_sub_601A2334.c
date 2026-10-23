/* sub_601A2334
 * address: 0x601A2334   size: 972   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A2334(int a1)
{
  int v2; // r0
  int v3; // r1
  int v4; // r2

  *(_DWORD *)a1 = off_60BD5EBC;
  FIELD_U32(a1, 20) = -1;
  FIELD_U32(a1, 24) = 0;
  FIELD_U32(a1, 2332) = 0;
  FIELD_U8(a1, 2840) = 0;
  FIELD_U32(a1, 2844) = &off_60BD5EF0;
  FIELD_U32(a1, 2848) = &off_60BD5F00;
  FIELD_U32(a1, 2852) = &off_60BD5F24;
  FIELD_U32(a1, 2856) = a1;
  FIELD_U32(a1, 2860) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 2864), (StateExecuter *)(a1 + 2848), (StateBase *)&dword_60C89E1C);
  FIELD_U32(a1, 2844) = &off_60BD5EE0;
  sub_604C46FC(a1 + 2880);
  sub_60544C94(a1 + 31488);
  sub_604F03B0(a1 + 64996);
  sub_604F5448(a1 + 139476);
  sub_604F9FF4(a1 + 149128);
  sub_6054C2A8(a1 + 153252);
  sub_60551AEC(a1 + 157360);
  sub_60480C58(a1 + 227624);
  sub_6055DC04(a1 + 240464);
  sub_604DE240(a1 + 261300);
  sub_604E00F0(a1 + 264900);
  sub_60515690(a1 + 268980);
  FIELD_U32(a1, 299212) = 0;
  FIELD_U8(a1, 299216) = 1;
  FIELD_U8(a1, 299217) = 0;
  FIELD_U8(a1, 299218) = 0;
  FIELD_U16(a1, 299220) = 137;
  FIELD_U8(a1, 299222) = 0;
  FIELD_U8(a1, 299223) = 0;
  FIELD_U8(a1, 299224) = 0;
  memset((void *)(a1 + 172), 0, 36);
  FIELD_U32(a1, 2336) = 5;
  FIELD_U32(a1, 2340) = 5;
  FIELD_U32(a1, 2344) = 5;
  FIELD_U32(a1, 2348) = 5;
  FIELD_U32(a1, 2352) = 5;
  FIELD_U32(a1, 2356) = 5;
  FIELD_U32(a1, 2360) = 5;
  FIELD_U32(a1, 2364) = 5;
  FIELD_U32(a1, 2368) = 5;
  FIELD_U32(a1, 2372) = 5;
  FIELD_U32(a1, 2376) = 5;
  FIELD_U32(a1, 2380) = 5;
  FIELD_U32(a1, 2384) = 5;
  FIELD_U32(a1, 2388) = 5;
  FIELD_U32(a1, 2392) = 5;
  FIELD_U32(a1, 2396) = 5;
  FIELD_U32(a1, 2400) = 5;
  FIELD_U32(a1, 2404) = 5;
  sub_601A271C(a1 + 2408, &dword_60C89E08);
  sub_601A271C(a1 + 2624, &dword_60C89E08);
  memset((void *)(a1 + 28), 0, 144);
  v2 = dword_60C89E08;
  FIELD_U32(a1, 299076) = dword_60C89E08;
  v3 = dword_60C89E0C;
  FIELD_U32(a1, 299080) = dword_60C89E0C;
  v4 = dword_60C89E10;
  FIELD_U32(a1, 299084) = dword_60C89E10;
  FIELD_U32(a1, 299088) = v2;
  FIELD_U32(a1, 299092) = v3;
  FIELD_U32(a1, 299096) = v4;
  FIELD_U32(a1, 299100) = v2;
  FIELD_U32(a1, 299104) = v3;
  FIELD_U32(a1, 299108) = v4;
  FIELD_U32(a1, 299112) = v2;
  FIELD_U32(a1, 299116) = v3;
  FIELD_U32(a1, 299120) = v4;
  FIELD_U32(a1, 299124) = v2;
  FIELD_U32(a1, 299128) = v3;
  FIELD_U32(a1, 299132) = v4;
  FIELD_U32(a1, 299136) = v2;
  FIELD_U32(a1, 299140) = v3;
  FIELD_U32(a1, 299144) = v4;
  FIELD_U32(a1, 299148) = v2;
  FIELD_U32(a1, 299152) = v3;
  FIELD_U32(a1, 299156) = v4;
  FIELD_U32(a1, 299160) = v2;
  FIELD_U32(a1, 299164) = v3;
  FIELD_U32(a1, 299168) = v4;
  FIELD_U32(a1, 299172) = v2;
  FIELD_U32(a1, 299176) = v3;
  FIELD_U32(a1, 299180) = v4;
  memset((void *)(a1 + 298956), 0, 120);
  FIELD_U8(a1, 299189) = 0;
  FIELD_U8(a1, 299185) = 0;
  FIELD_U8(a1, 299192) = 0;
  FIELD_U8(a1, 299188) = 0;
  FIELD_U8(a1, 299191) = 0;
  FIELD_U8(a1, 299190) = 0;
  FIELD_U8(a1, 299184) = 0;
  FIELD_U8(a1, 299187) = 0;
  FIELD_U8(a1, 299186) = 0;
  return a1;
}
