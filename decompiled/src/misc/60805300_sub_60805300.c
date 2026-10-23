/* sub_60805300
 * address: 0x60805300   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60805300(int a1, void *a2)
{
  _QWORD *v4; // r6
  int v5; // r0
  _DWORD v7[13]; // [sp+4h] [bp-34h] BYREF

  sub_608DA42C(a1, 1);
  *(_DWORD *)a1 = off_60C27F18;
  FIELD_U8(a1, 68) = 0;
  FIELD_U32(a1, 56) = 0;
  FIELD_U32(a1, 60) = 0;
  FIELD_U32(a1, 64) = 0;
  sub_608DA770(a1, 32);
  sub_608DA77C(a1, 0.95);
  sub_608DA788(a1, 100.0);
  v7[3] = 0;
  v7[4] = 1056964608;
  v7[5] = 1065353216;
  v7[6] = 1;
  v7[0] = 1137180672;
  v7[1] = 1120403456;
  v7[2] = 1140457472;
  sub_608DA794(a1, v7);
  v4 = (_QWORD *)operator_new_8DE2C8(0x2D0u, (int)a2, 16);
  *v4 = 0x4000000B0LL;
  sub_608DA230(v4 + 2);
  sub_608DA230(v4 + 24);
  sub_608DA230(v4 + 46);
  sub_608DA230(v4 + 68);
  FIELD_U32(a1, 56) = v4 + 2;
  v5 = operator_new_8DE25C(0x3Cu, a2, 4);
  FIELD_U32(a1, 60) = sub_608DA2A8(v5);
  ((void (*)(void))sub_608DA314)();
  sub_608DA314(FIELD_U32(a1, 60), FIELD_U32(a1, 56) + 176);
  sub_608DA314(FIELD_U32(a1, 60), FIELD_U32(a1, 56) + 352);
  sub_608DA314(FIELD_U32(a1, 60), FIELD_U32(a1, 56) + 528);
  operator_new_8DE25C(0x24u, a2, 4);
  FIELD_U32(a1, 64) = sub_6080699C();
  return a1;
}
