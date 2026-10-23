/* sub_607A9AB0
 * address: 0x607A9AB0   size: 496   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A9AB0(int a1)
{
  int v2; // r1
  int v3; // r5
  char v4; // r12
  float v5; // s16
  float v6; // s0
  int v7; // r1
  _DWORD v9[18]; // [sp+0h] [bp-48h] BYREF

  sub_6079EA38((_DWORD *)a1);
  sub_607AA814(a1);
  FIELD_U32(a1, 1228) |= 0x20400u;
  v2 = FIELD_U32(a1, 1236);
  FIELD_U32(a1, 1232) |= 0x20000000u;
  FIELD_U32(a1, 1236) = v2 | 0x10010004;
  v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 12940));
  if ( ((unsigned int)&dword_60C7B408 & ~(1618647852 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
  {
    dword_60C7B404 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B408);
  }
  if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C7B404) == 1 && tongue_tip_ref_2(v3, v9) == 1 )
  {
    v5 = *(float *)&v9[7];
    FIELD_U32(a1, 108) = v9[3];
    v6 = v5 + flt_60B0C8E4[(*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 156))(a1, FIELD_U32(a1, 1320))];
    FIELD_F32(a1, 112) = v6;
    FIELD_F32(a1, 12968) = (float)(FIELD_F32(a1, 108) - FIELD_F32(v3, 108))
                           / (float)(*(float *)((char *)sinLutTable + ((FIELD_U32(v3, 160) >> 20) & 0xFF0))
                                   + (float)((float)((float)(FIELD_U32(v3, 160) & 0xFFFFFF)
                                                   * *(float *)((char *)&sinLutTable[1]
                                                              + ((FIELD_U32(v3, 160) >> 20) & 0xFF0)))
                                           * 0.000000059605));
    FIELD_F32(a1, 12972) = v6 - FIELD_F32(v3, 112);
    v7 = FIELD_U32(v3, 112);
    FIELD_U32(a1, 12980) = FIELD_U32(v3, 108);
    FIELD_U32(a1, 12984) = v7;
  }
  FIELD_U32(a1, 1236) |= 0x40000000u;
  PlayerBase_dispatchVirtual3(a1 + 11356, 122, 0.0);
  FIELD_U32(a1, 88) = 0;
  FIELD_U32(a1, 100) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U8(a1, 12976) = 0;
  return 0;
}
