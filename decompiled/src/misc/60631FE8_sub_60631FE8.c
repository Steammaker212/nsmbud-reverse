/* sub_60631FE8
 * address: 0x60631FE8   size: 512   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60631FE8(int a1)
{
  int result; // r0
  unsigned int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r6
  float v7; // s4
  float v8; // s6
  int v9; // [sp+4h] [bp-5Ch] BYREF
  _BYTE v10[88]; // [sp+8h] [bp-58h] BYREF

  StateMgr__execute((StateMgr *)(a1 + 6084));
  result = 0;
  if ( !FIELD_U8(a1, 6572) )
  {
    if ( FIELD_U8(a1, 6571) )
    {
      v3 = FIELD_U32(a1, 6560) + 2 * FIELD_U32(a1, 6556);
      FIELD_F32(a1, 6548) = FIELD_F32(a1, 6544)
                            + (float)(FIELD_F32(a1, 6540)
                                    + (float)(FIELD_F32(a1, 6540)
                                            * (float)(*(float *)((char *)&sinLutTable[2] + ((v3 >> 20) & 0xFF0))
                                                    + (float)((float)(*(float *)((char *)&sinLutTable[3]
                                                                               + ((v3 >> 20) & 0xFF0))
                                                                    * (float)(v3 & 0xFFFFFF))
                                                            * 0.000000059605))));
    }
    memset(v10, 0, 64);
    v9 = 0;
    v4 = sub_606BAB1C(v10, &v9, a1 + 6104);
    if ( v4 != FIELD_U16(a1, 6568) )
      FIELD_U32(a1, 6472) = FIELD_U32(a1, 6500);
    FIELD_U16(a1, 6568) = v4;
    v5 = sub_608337E0(a1 + 6472);
    v6 = (int)(float)(FIELD_F32(a1, 6536)
                    * (float)(*(float *)((char *)sinLutTable + ((FIELD_U32(a1, 6556) >> 20) & 0xFF0))
                            + (float)((float)((float)(FIELD_U32(a1, 6556) & 0xFFFFFF)
                                            * *(float *)((char *)&sinLutTable[1]
                                                       + ((FIELD_U32(a1, 6556) >> 20) & 0xFF0)))
                                    * 0.000000059605)));
    FIELD_U32(a1, 6564) = v6;
    (*(void (__fastcall **)(int, int, int, int, float))(*(_DWORD *)a1 + 196))(
      a1,
      a1 + 6520,
      v6,
      v5,
      FIELD_F32(a1, 6548));
    v7 = FIELD_F32(a1, 112);
    v8 = FIELD_F32(a1, 6524);
    FIELD_F32(a1, 6276) = FIELD_F32(a1, 6520) - FIELD_F32(a1, 108);
    FIELD_F32(a1, 6280) = v8 - v7;
    FIELD_U32(a1, 6348) = v6;
    SolidOnTopCollider_execute((ColliderBase *)(a1 + 6104));
    StageActor__cullCheck((StageActor *)a1, 0);
    return 1;
  }
  return result;
}
