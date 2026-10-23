/* sub_603D09D4
 * address: 0x603D09D4   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_603D09D4(int a1)
{
  int v2; // r0
  int v3; // r0
  bool v4; // zf
  char v5; // r0
  int v6; // r0
  float v7; // s2
  int v8; // r0
  _DWORD v10[15]; // [sp+4h] [bp-3Ch] BYREF

  StageActor__cullCheck((StageActor *)a1, 0);
  if ( !v2 && !sub_603D0AEC(a1) && !((int (__fastcall *)(int))loc_603D0E00)(a1) )
  {
    v3 = FIELD_U8(a1, 644);
    v4 = v3 == 0;
    if ( FIELD_U8(a1, 644) )
    {
      v5 = v3 - 1;
      FIELD_U8(a1, 644) = v5;
      v4 = v5 == 0;
    }
    if ( v4 && FIELD_S32(EnemyCounterMaybe_instance, 244) <= 7 )
    {
      memset(&v10[1], 0, 40);
      v6 = FIELD_U32(a1, 80);
      v10[0] = (v6 + 1) | 0x10000000;
      v7 = (float)byte_60AFE3F4[v6];
      v8 = FIELD_U32(a1, 112);
      *(float *)&v10[4] = FIELD_F32(a1, 108) + (float)(v7 * -8.0);
      v10[5] = v8;
      v10[6] = 0;
      v10[3] = Profile__get(0x20Du);
      LOBYTE(v10[8]) = FIELD_U8(a1, 86);
      sub_600080BC((_DWORD *)ActorMgr__instance, v10);
      FIELD_U8(a1, 644) = -76;
    }
  }
  return 1;
}
