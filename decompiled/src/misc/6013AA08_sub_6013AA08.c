/* sub_6013AA08
 * address: 0x6013AA08   size: 876   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6013AA08(int a1, unsigned int a2)
{
  float v4; // s2
  float v5; // s0
  int v6; // r0
  int v7; // r1
  int v8; // r0
  int v9; // r0
  int v10; // r0
  unsigned int v11; // r0
  signed int v12; // r0
  signed int v13; // r6
  int v14; // r0
  unsigned int v15; // r0
  _DWORD *v16; // r1
  _DWORD *v17; // r2
  int v18; // r2
  bool v19; // zf
  _DWORD v20[9]; // [sp+14h] [bp-24h] BYREF

  if ( a2 != 2 )
    goto LABEL_15;
  v4 = FIELD_F32(a1, 108);
  v5 = FIELD_F32(dword_60CC6484, 120);
  if ( v4 <= v5 && v4 >= FIELD_F32(dword_60CC6484, 112) )
  {
    if ( FIELD_U32(AreaTask_intance, 1828) )
    {
      FIELD_F32(a1, 584) = v4;
      FIELD_U32(a1, 588) = FIELD_U32(a1, 112);
      v8 = FIELD_U32(a1, 116);
    }
    else
    {
      sub_6075DE94(dword_60CBF354, v20, FIELD_U32(a1, 6768));
      FIELD_U32(a1, 584) = v20[0];
      FIELD_U32(a1, 588) = v20[1];
      v8 = v20[2];
    }
    FIELD_U32(a1, 592) = v8;
    CollisionMgr_process((_BYTE *)(a1 + 648));
    v9 = FIELD_U32(a1, 2872);
    if ( ((v9 & 0x440000) == 0 || (v9 & 0x10000000) != 0)
      && ((v9 & 0x880000) == 0 || (v9 & 0x20000000) != 0)
      && (v9 & 0x10400) != 0x400 )
    {
      if ( (v9 & 1) == 0 )
        goto LABEL_15;
      v11 = sub_6014C508(a1 + 648, FIELD_U32(a1, 80));
      if ( (float)(*(float *)((char *)sinLutTable + ((v11 >> 20) & 0xFF0))
                 + (float)((float)((float)(v11 & 0xFFFFFF) * *(float *)((char *)&sinLutTable[1] + ((v11 >> 20) & 0xFF0)))
                         * 0.000000059605)) < (float)(*(float *)((char *)sinLutTable
                                                               + (((unsigned int)(int)(float)((float)(2147500000.0 * 63.4)
                                                                                            / 180.0) >> 20)
                                                                & 0xFF0))
                                                    + (float)((float)((float)((int)(float)((float)(2147500000.0 * 63.4)
                                                                                         / 180.0)
                                                                            & 0xFFFFFF)
                                                                    * *(float *)((char *)&sinLutTable[1]
                                                                               + (((unsigned int)(int)(float)((float)(2147500000.0 * 63.4) / 180.0) >> 20)
                                                                                & 0xFF0)))
                                                            * 0.000000059605)) )
      {
        v12 = sub_6014C4A4(a1 + 648);
        v13 = sub_6014C57C(a1 + 648, v12);
        v14 = sub_6014C540(a1 + 648);
        if ( v14 )
        {
          if ( v14 != 1 )
          {
            v15 = FIELD_U32(a1, 80);
            v16 = &unk_60AF67FC;
            v17 = &unk_60AF67D4;
            goto LABEL_29;
          }
          v15 = FIELD_U32(a1, 80);
          if ( v15 )
          {
            v16 = &unk_60AF67FC;
            v17 = &unk_60AF67D4;
LABEL_29:
            v18 = v17[v13];
            v19 = v15 == 0;
            FIELD_U32(a1, 120) = v18;
            if ( v15 )
              v15 = v18 ^ 0x80000000;
            FIELD_U32(a1, 124) = v16[v13];
            if ( !v19 )
              FIELD_U32(a1, 120) = v15;
            goto LABEL_15;
          }
          v15 = 0;
        }
        else
        {
          v15 = 1;
          if ( FIELD_U32(a1, 80) != 1 )
          {
            v16 = &unk_60AF67FC;
            v17 = &unk_60AF67D4;
            v15 = FIELD_U32(a1, 80);
            goto LABEL_29;
          }
        }
        v16 = &unk_60AF6810;
        v17 = &unk_60AF67E8;
        goto LABEL_29;
      }
    }
    v10 = FIELD_U32(a1, 6232);
    FIELD_U32(a1, 108) = FIELD_U32(a1, 6228);
    FIELD_U32(a1, 112) = v10;
    FIELD_U32(a1, 116) = 1166843904;
    LightSource_update1((LightSource *)(a1 + 6364), 0, (Vec3 *)(a1 + 108), 0, 0, 0, 0, 0, 0);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 240))(a1);
    sub_601362A0(a1);
LABEL_15:
    CollisionActor__afterCreate((CollisionActor *)a1, a2);
    return;
  }
  if ( FIELD_U32(AreaTask_intance, 1828) )
  {
    if ( v4 > v5 )
      v5 = FIELD_F32(dword_60CC6484, 112);
    FIELD_F32(a1, 108) = v5;
    v6 = FIELD_U32(a1, 112);
    v7 = FIELD_U32(a1, 116);
    FIELD_F32(a1, 584) = v5;
    FIELD_U32(a1, 588) = v6;
    FIELD_U32(a1, 592) = v7;
    FIELD_F32(a1, 608) = v5;
    FIELD_U32(a1, 612) = v6;
    FIELD_U32(a1, 616) = v7;
    CollisionActor__afterCreate((CollisionActor *)a1, 2u);
  }
  else
  {
    CollisionActor__afterCreate((CollisionActor *)a1, 2u);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 296))(a1);
    FIELD_U8(a1, 6240) = 1;
  }
}
