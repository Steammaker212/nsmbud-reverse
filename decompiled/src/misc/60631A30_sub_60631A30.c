/* sub_60631A30
 * address: 0x60631A30   size: 772   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60631A30(int a1)
{
  unsigned int v2; // r0
  int v3; // r1
  char v4; // r2
  float *v5; // r8
  int v6; // r2
  unsigned int v7; // r1
  float v8; // s0
  float v9; // s2
  float v10; // s16
  float v11; // s18
  float *v12; // r5
  StateMgr *v13; // r0
  StateBase *v14; // r1
  unsigned int v15; // r0
  int v16; // r6
  int v17; // r0

  v2 = FIELD_U32(a1, 20);
  FIELD_U32(a1, 6552) = (int)(v2 << 26) >> 4;
  v3 = (v2 >> 8) & 7;
  v4 = v3;
  if ( v3 )
    v4 = 1;
  FIELD_U8(a1, 6570) = v4;
  v5 = (float *)(a1 + 6536);
  v6 = -134217728 * v3;
  if ( (v2 & 0x800) == 0 )
    v6 = v3 << 27;
  *v5 = (float)v6;
  v7 = FIELD_U32(a1, 24);
  v8 = (float)((HIBYTE(v7) & 0xF0) + 16);
  FIELD_F32(a1, 6544) = v8;
  FIELD_U32(a1, 6560) = ~(v7 << 7) & 0x80000000;
  FIELD_U8(a1, 6571) = (v2 & 0x200000) != 0;
  v9 = (float)(HIWORD(v2) & 7) * 16.0;
  v10 = (float)((unsigned int)((unsigned __int16)v2 >> 12) + 1) * 8.0;
  if ( (v2 & 0x200000) != 0 )
  {
    v11 = v9 + v8;
    FIELD_F32(a1, 6540) = v9 * 0.5;
  }
  else
  {
    v8 = v9 + 56.0;
    v11 = v9 + 56.0;
  }
  v12 = (float *)(a1 + 6548);
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) - v8;
  FIELD_F32(a1, 496) = v8 + FIELD_F32(a1, 496);
  FIELD_F32(a1, 6548) = v11;
  sub_608337BC(a1 + 6472, &dword_60CB4248);
  (*(void (__fastcall **)(int, bool, float, float))(*(_DWORD *)a1 + 192))(
    a1,
    (FIELD_U32(a1, 20) & 0x100000) == 0,
    v10,
    v11);
  if ( FIELD_U8(a1, 28) )
  {
    if ( sub_60631D54(a1, FIELD_U8(a1, 28)) )
      goto LABEL_13;
    v13 = (StateMgr *)(a1 + 6084);
    v14 = (StateBase *)&unk_60CB4288;
  }
  else
  {
    v13 = (StateMgr *)(a1 + 6084);
    v14 = (StateBase *)&dword_60CB4268;
  }
  StateMgr__changeState(v13, v14);
LABEL_13:
  v15 = FIELD_U32(a1, 6556);
  if ( FIELD_U8(a1, 6571) )
    *v12 = FIELD_F32(a1, 6544)
         + (float)(FIELD_F32(a1, 6540)
                 + (float)(FIELD_F32(a1, 6540)
                         * (float)(*(float *)((char *)&sinLutTable[2]
                                            + (((FIELD_U32(a1, 6560) + 2 * v15) >> 20) & 0xFF0))
                                 + (float)((float)(*(float *)((char *)&sinLutTable[3]
                                                            + (((FIELD_U32(a1, 6560) + 2 * v15) >> 20) & 0xFF0))
                                                 * (float)((FIELD_U32(a1, 6560) + 2 * v15) & 0xFFFFFF))
                                         * 0.000000059605))));
  v16 = (int)(float)(*v5
                   * (float)(*(float *)((char *)sinLutTable + ((v15 >> 20) & 0xFF0))
                           + (float)((float)((float)(v15 & 0xFFFFFF)
                                           * *(float *)((char *)&sinLutTable[1] + ((v15 >> 20) & 0xFF0)))
                                   * 0.000000059605)));
  FIELD_U32(a1, 6564) = v16;
  v17 = sub_608337E0(a1 + 6472);
  (*(void (__fastcall **)(int, int, int, int, float))(*(_DWORD *)a1 + 196))(a1, a1 + 6508, v16, v17, *v12);
  FIELD_U32(a1, 6520) = FIELD_U32(a1, 6508);
  FIELD_U32(a1, 6524) = FIELD_U32(a1, 6512);
  FIELD_U32(a1, 6528) = FIELD_U32(a1, 6516);
  sub_60631EB0(a1, a1 + 6508, v16, v10);
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6104));
  return 1;
}
